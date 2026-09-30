#ifndef CFG_ANALYZER_REPORT_H
#define CFG_ANALYZER_REPORT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "config.h"

// Report structure
typedef struct report_t {
    char *report_string;
} report_t;

// Function prototype
void report_generate(dfg_node_t *root, mem_track_t *memory_records, report_t *report);

#endif // CFG_ANALYZER_REPORT_H