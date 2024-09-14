#include <stdio.h>

int add(int a , int b);


int main()
{
    int x=30, y=40;
    
    int (*ptr) (int,int);
    ptr=&add;
    int val2=ptr(40,40);
    printf("%d\n",val2);

int val=add(30,40);
printf("%d\n",val);
}

int add(int a ,int b)
{
   int  z=a+b;
    return z;
}