#ifndef GUARD_CONSTANTS_DAY_NIGHT_H
#define GUARD_CONSTANTS_DAY_NIGHT_H

#define HOUR_MORNING 4
#define HOUR_DAY 8
#define HOUR_NIGHT 18

// not real times of day but useful for specifying override times
#define HOUR_AFTERNOON 18
#define HOUR_MIDNIGHT_0 0
#define HOUR_MIDNIGHT_24 24

#define DN_TIME_MORNING 0
#define DN_TIME_DAY 1
#define DN_TIME_NIGHT 2

#define TINT_PERIODS_PER_HOUR 60
#define MINUTES_PER_TINT_PERIOD (60 / TINT_PERIODS_PER_HOUR)

#endif  // GUARD_CONSTANTS_DAY_NIGHT_H
