#include <stdio.h>

//declaration of function
int add(int a, int b);

int sub(int a ,int b);

int main()
{
//int a,b;
int x=30,y=40;
int val=add(x,y);
printf("%d\n",val);

int val2=sub(x,y);
printf("%d\n",val2);
return 0;
}


//function defination
int add(int a ,int b)
{
   //int z=a+b;
    return a+b;

}

int sub(int a ,int b)
{
    int c=a-b;
    return c;
}