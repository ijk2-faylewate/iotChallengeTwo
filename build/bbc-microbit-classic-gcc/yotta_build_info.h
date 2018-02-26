#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2018 // UTC year
#define YOTTA_BUILD_MONTH 2 // UTC month 1-12
#define YOTTA_BUILD_DAY 26 // UTC day 1-31
#define YOTTA_BUILD_HOUR 1 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 54 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 24 // UTC second 0-61
#define YOTTA_BUILD_UUID 401abded-841c-4ce8-ba12-c874b37f13e2 // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID fac71e874aa573cefbe513629beabea29dc0c0fc // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION fac71e8 // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
