#include<stdio.h>


/*defining a structure of name data consisting of a string of Name, integer of Roll number and  float of marks*/
typedef struct
{
char name[30];
int roll; 
float marks; 
} data;

void enter(data *);                    /*function prototype*/
void display(data *);                  /*function prototype*/

int main()
{
    int n,i; 
    printf("Enter strength \n");        /*entering the length of the array*/
    scanf("%d",&n);
    data s[n];                          /*defining a array of structure of the given length*/
    for (i=0;i<n;i++)                   /*loop untill the end of the structure to enter the details of data, call by referance, passes as the adress of the objects assigned by array*/
    {
    enter(&s[i]);
    }
      
    for (i=0;i<n;i++)                    /*loop untill the end of the structure to show the details of student, call by referance, passes as the adress of the objects assigned by array*/
    {
      display(&s[i]);
    }
    return 0;
}

void enter(data *ptr)                   /*taking the adress of the array of structure to the pointer *ptr to access the structure objects*/
{
  printf("Name\n");
  scanf("%s",ptr->name);                /*dereferancing to thr members of the array of structure using pointer*/
  printf("Roll\n");
  scanf("%d",&ptr->roll);
  printf("Marks\n");
  scanf("%f",&ptr->marks);
}

void display(data *ptr)                 /*taking the adress of the array of structure to the pointer *ptr to access the structure objects*/
{
  printf("Name %s\n",ptr->name);        /*dereferancing to thr members of the array of structure using pointer*/
  printf("Roll %d\n",ptr->roll);
  printf("Marks %f\n",ptr->marks);
}
