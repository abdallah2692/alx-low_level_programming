#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - changr the value to 98
*/
void reset_to_98(int *n)
{
    int *pdig;
    *n = 98;
    pdig = &(*n);
    printf("%d", *pdig);
}
