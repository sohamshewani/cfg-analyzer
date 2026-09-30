#ifndef CFG_ANALYZER_MEMTRACK_H
#define CFG_ANALYZER_MEMTRACK_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "config.h"

// Memory tracking structure
typedef struct mem_track_t {
    int id;
    const char *filename;
    int line;
    int size;
    void *address;
    bool is_allocated;
} mem_track_t;

// Function prototypes
int memtrack_start(void);
void memtrack_stop(void);
int memtrack_track_allocation(mem_track_t *track);
int memtrack_track_deallocation(mem_track_t *track);

#endif // CFG_ANALYZER_MEMTRACK_H