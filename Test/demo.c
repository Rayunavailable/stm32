#include "demo.h"

int16_t data_buffer[1024];

int main(void) 
{
    uint16_t *ptr = get_data_cache();
    for (uint16_t i = 0; i < 1024; i++) {
        *(ptr++) = i;
    }
    get_data_cache()[0] = 0xFFFF;
    memcpy(data_buffer, get_data_cache(), 2048);
    return 1;
}