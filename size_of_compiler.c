#include<stdio.h>

int main()
{
printf("The size of compiler is %ld bits", sizeof(int *) *8);     //size of pointer 16 bit system = 2 byte; 32 byte system = 4 byte; 64 bit system = 8 byte

return 0;
}
