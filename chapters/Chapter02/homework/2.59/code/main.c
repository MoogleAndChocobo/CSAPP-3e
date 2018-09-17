#include <stdio.h>

typedef unsigned char* byte_pointer;

int low(int x)
{
	byte_pointer start = (byte_pointer)&x;
	return start[0];
}

int main()
{
	int x = 0x89ABCDEF;
	int y = 0x76543210;
	
	int z = low(x) + (y - low(y));
	printf("%X\n", z);
	
	
	
	return 0;
}
