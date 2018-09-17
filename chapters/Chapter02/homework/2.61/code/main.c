#include <stdio.h>

int int_shifts_are_arithmetic(void)
{
	int x = ((-3)>>1); 
	return (x == -2);
}

int main()
{
	printf("%d\n", int_shifts_are_arithmetic());
	return 0;
} 
