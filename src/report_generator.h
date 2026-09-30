#ifndef CFG_ANALYZER_REPORT_GENERATOR_H
#define CFG_ANALYZER_REPORT_GENERATOR_H

#include "report.h"
#include "dfg.h"
#include "memtrack.h"

void report_generate(dfg_node_t *root, mem_track_t *memory_records, report_t *report);

#endif // CFG_ANALYZER_REPORT_GENERATOR_H