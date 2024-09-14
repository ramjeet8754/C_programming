#include <stdio.h>

int main()

{

int a=0,b=1,c,num;

printf("enter any number:");
scanf("%d",&num);
printf("%d\n %d\n",a,b);
for(int i=2;i<num;i++)
{
   c=a+b;
    a=b;
    b=c;
    printf("%d\n",c);
}
//printf("%d\n",c);

}