/* Structure containing union containing Structure*/

#include <stdio.h>

/*defining a structure and naming the structure as test_1*/
typedef struct
    {
        int test_1_var_1;
        int test_1_var_2;
    } test_1;

/*defining a structure and naming the structure as test_2*/
typedef struct
    {
        int test_2_var_1;
        int test_2_var_2;
    } test_2;

/*defining a structure which contains an union which contains the structure test_1 and test_2 and naming the structure as test_struct*/
typedef struct
{
    int test_struct_var_1;
    
    int test_struct_var_2;
    
    union test_3
    {
        test_1 var_1;          /*structure variable is decleared of type test_1*/
        test_2 var_2;          /*structure variable is decleared of type test_2*/        
    } var_3;                   /*union variable is decleared var_3*/
} test_struct;                 

int main()
{

    test_struct var_test = { 10, 20, {.var_2 = {30,40}}};        /*declearing structure variable of test_struct and initiating the values, considering the "var_2" union member*/
    test_struct * ptr_1 = &var_test;                             /*declearing a structure pointer of test_struct and pointing towards the test_struct variable var_test*/
    test_2 * ptr_2 = &var_test.var_3.var_2;                      /*declearing a structure pointer of test_2 and pointing towards the union member of var_2 which is a member of test_struct variable var_test*/

    printf("%d\n",ptr_1->var_3.var_2.test_2_var_1);              /*prining the variable test_2_var_1 variable using the structure pointer ptr_1 which is a member of structure test_2 vhivh is a member of union var_3 which is a member of structure test_struct*/
    printf("%d",ptr_2->test_2_var_2);                            /*prining the variable test_2_var_2 variable using the structure pointer ptr_2 which is a member of structure test_2 vhivh is a member of union var_3 which is a member of structure test_struct*/

    return 0;
}
