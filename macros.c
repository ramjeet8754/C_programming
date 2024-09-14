#include <stdio.h>


#define setbit(num,pos) num |(1<<pos)
#define clearbit(num,pos) num &(~(1<<pos))
#define togglebit(num,pos) num ^(1<<pos)
#define getbit(num,pos) num ^(1<<pos)

int main()
{
    int num,pos;
    printf("Enter any number:  Enter any position:");
    scanf("%d %d",&num,&pos);
    printf("%d\n",setbit(num,pos));
    printf("%d\n",clearbit(num,pos));
    printf("%d\n",togglebit(num,pos));
    printf("%d\n",getbit(num,pos));

    // printf("%d\n",setbit(10,2));
    // printf("%d\n",clearbit(10,2));
    // printf("%d\n",togglebit(10,2));
    // printf("%d\n",getbit(10,2));
    return 0;
}