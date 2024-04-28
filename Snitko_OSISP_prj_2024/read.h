#ifndef READ_H
#define READ_H

#include "process.h"
#include "threads.h"

int read_processes(Process *processes);
int read_threads(Thread *threads);

#endif /* READ_H */