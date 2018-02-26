#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2018 // UTC year
#define YOTTA_BUILD_MONTH 2 // UTC month 1-12
#define YOTTA_BUILD_DAY 26 // UTC day 1-31
#define YOTTA_BUILD_HOUR 23 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 11 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 54 // UTC second 0-61
#define YOTTA_BUILD_UUID b6af04d9-99d5-46ba-abbd-9f71629a8bab // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID 776a98b911f52d7a2a2efc523d5463085e015c01 // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION 776a98b // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
