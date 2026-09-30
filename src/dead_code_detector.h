#ifndef CFG_ANALYZER_DEAD_CODE_DETECTOR_H
#define CFG_ANALYZER_DEAD_CODE_DETECTOR_H

#include "dfg.h"

void detect_dead_code(dfg_node_t *root);

#endif // CFG_ANALYZER_DEAD_CODE_DETECTOR_H