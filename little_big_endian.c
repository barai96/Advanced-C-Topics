#include<stdio.h>

int main()
{
  int a = 0x1234;
  char *ptr = (char *)&a;                 //typecasting adress of a variable into character pointer
  if (*ptr == 0x34)                       //chechking the character byte is the lsb byte or not
    printf("Little endian machine");
  else
    printf("Big Endian Machine");
  return 0;
}
