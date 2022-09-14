#include <stdio.h>

int main()
{
    int a;
    printf("Enter number: \n");
    scanf("%d",&a);
    char *p = (char *)&a;
    
    for (int i =0;i<sizeof(int);i++,p++)
    {
        printf("0x%x\t",*p);
    }
    return 0;
}
