import json
from collections import defaultdict, Counter

def generate_encounters_list(input_file, output_file):
    with open(input_file, 'r') as f:
        data = json.load(f)

    # Grab the first wild encounter group
    group = data["wild_encounter_groups"][0]
    encounters = group.get("encounters", [])

    report_lines = []
    
    # Group encounters by map
    map_groups = defaultdict(list)
    for encounter in encounters:
        map_groups[encounter["map"]].append(encounter)

    for map_name, map_encounters in map_groups.items():
        report_lines.append(f"\n{map_name}\n")
        report_lines.append("-" * len(map_name) + "\n")
        
        # Group by time of day (only Day/Night)
        time_groups = defaultdict(list)
        for encounter in map_encounters:
            label = encounter["base_label"]
            if "_Day" in label:
                time_groups["Day"].append(encounter)
            elif "_Night" in label:
                time_groups["Night"].append(encounter)
        
        for time_name in ["Day", "Night"]:  # Fixed order: Day first, then Night
            if time_name not in time_groups:
                continue
                
            report_lines.append(f"\n{time_name}:\n")
            
            # Group by encounter type (Land/Water/etc.)
            type_groups = defaultdict(list)
            for encounter in time_groups[time_name]:
                for field in encounter:
                    if field.endswith("_mons") and "mons" in encounter[field]:
                        type_name = field.replace("_mons", "")
                        type_groups[type_name].extend(
                            mon["species"] for mon in encounter[field]["mons"]
                        )
            
            for type_name in ["land", "water", "fishing", "rock_smash"]:  # Consistent order
                if type_name not in type_groups:
                    continue
                    
                report_lines.append(f"\n{type_name.capitalize()}:\n")
                
                # Count and sort species
                species_counts = Counter(type_groups[type_name])
                species_lines = [
                    f"{species} = {count},"
                    for species, count in sorted(species_counts.items())
                ]
                
                report_lines.extend(species_lines)
                report_lines.append("")  # Blank line after each type
    
    # Write the report to file
    with open(output_file, 'w') as f:
        f.write("\n".join(report_lines).strip())

# Example usage:
generate_encounters_list("src/data/wild_encounters.json", "encounter_report.txt")