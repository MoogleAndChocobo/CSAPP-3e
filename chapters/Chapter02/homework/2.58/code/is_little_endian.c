#include <stdio.h>

typedef unsigned char* byte_pointer;

int is_little_endian(void)
{
    int x = 255;
    byte_pointer start = (byte_pointer)&x;
    return !(start[0] == 255);
}

int main()
{
    printf("%d\n", is_little_endian());
    return 0;
}
