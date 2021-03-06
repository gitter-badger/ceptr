/**
 * @file spec_utils.h
 * @copyright Copyright (C) 2013-2015, The MetaCurrency Project (Eric Harris-Braun, Arthur Brock, et. al).  This file is part of the Ceptr platform and is released under the terms of the license contained in the file LICENSE (GPLv3).
 * @ingroup tests
 */

#ifndef _CEPTR_TEST_UTILS_H
#define _CEPTR_TEST_UTILS_H

#include "../src/ceptr.h"

void wjson(Defs *d,T *t,char *n,int i);
void dump2json(Defs *d,T *t,char *n);
T *makeDelta(Symbol sym,int *path,T *t,int count);
void visdump(Defs *defs,T *x);

#define startVisdump(n) G_visdump_fn = n;G_visdump_count = 1;
#define endVisdump() G_visdump_count = 0;

char *G_visdump_fn;
int G_visdump_count;

#endif
