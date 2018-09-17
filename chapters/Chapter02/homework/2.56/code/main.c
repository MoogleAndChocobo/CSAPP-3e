#include <stdio.h>

int main()
{
    int a = 213123;
    float b = 34.6;
    int *pa = &a;

    show_int(a);
    show_float(b);
    show_pointer(pa);
    return 0;
}
