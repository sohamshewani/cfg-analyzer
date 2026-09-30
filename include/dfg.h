#ifndef CFG_ANALYZER_DFG_H
#define CFG_ANALYZER_DFG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "config.h"

// Data Flow Graph (CFG) structure
typedef struct dfg_node_t {
    int id;
    char *label;
    bool is_entry;
    bool is_exit;
    struct dfg_node_t *parent;
    struct dfg_node_t *children[10];
    int child_count;
} dfg_node_t;

// Function prototype
int dfg_build(dfg_node_t *root, const char *source_code);

#endif // CFG_ANALYZER_DFG_H