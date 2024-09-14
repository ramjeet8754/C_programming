#include <stdio.h>

#define swap(a,b) a^=b^=a^=b

int main()
{
    int a=20;
    int b=25;

    printf(" Before swapping : %d %d \n",a,b);
    swap(a,b);
     printf(" after swapping : %d %d\n ",a,b);
}