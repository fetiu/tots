#pragma once

#include <stddef.h>

typedef struct tots tots;

tots *tots_make(size_t n);
void *tots_hash(tots *t, char *k, void *v);
void *tots_pick(tots *t, char *k);
void *tots_drop(tots *t, char *k);
void tots_clean(tots *t);
