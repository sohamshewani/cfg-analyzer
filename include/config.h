#ifndef CFG_ANALYZER_CONFIG_H
#define CFG_ANALYZER_CONFIG_H

#include <stdbool.h>

// Configuration parameters
#define MAX_SOURCE_FILE_SIZE (1024 * 1024) // 1MB
#define MAX_MEM_TRACK_RECORDS 100000

// Error codes
#define CFG_OK 0
#define CFG_ERROR -1
#define CFG_OUT_OF_MEMORY -2

#endif // CFG_ANALYZER_CONFIG_H