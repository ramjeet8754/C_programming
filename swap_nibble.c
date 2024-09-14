#include <stdio.h>

#define swap_nibble(num) (num&0xf0)>>4 | (num&0x0f)<<4

int main()
{
    int num=0x45;
    printf("%x",swap_nibble(num));
}