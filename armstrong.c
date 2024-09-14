#include <stdio.h>
//1cube3 and 5cube3 and 3cube3=after multiplication result shoud be same as a number.
int main()
{
    int num=153;
    int rem=0,arm;
    int temp=num;

    while(num!=0)
    {
        rem=num%10;
        arm=arm+(rem*rem*rem);
        num=num/10;
    }
    if(temp=arm)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }

}