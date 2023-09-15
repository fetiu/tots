#include "tots.h"

#include <search.h>

struct tots {
    struct hsearch_data htab;
};

tots *tots_make(size_t n)
{
}

void *tots_hash(tots *t, char *k, void *v)
{
}

void *tots_pick(tots *t, char *k)
{
}

void *tots_drop(tots *t, char *k)
{
}

void tots_trash(tots *t)
{
}

