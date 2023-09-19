#include "main.h"
#include <stdio.h>

void reset_to_98(int *n)
{
    int *pdig;
    *n = 98;
    pdig = &(*n);
    printf("%d", *pdig);
}