#include "depend.h"

uint16_t data_cache[1024];

uint16_t *get_data_cache(void)
{
    return data_cache;
}