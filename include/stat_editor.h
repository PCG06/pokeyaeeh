#ifndef GUARD_STAT_EDITOR_H
#define GUARD_STAT_EDITOR_H

#include "main.h"

void Task_OpenStatEditorFromStartMenu(u8 taskId);
void StatEditor_Init(MainCallback callback);

extern const u8 *const gNatureNamePointers[];
extern const u8 gAbilityNames[][ABILITY_NAME_LENGTH + 1];
extern const struct SpeciesInfo gSpeciesInfo[];


#endif // GUARD_STAT_EDITOR_H