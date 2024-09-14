#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    switch(num )
    {
        case 10:
        printf("number is equal to 10");
       // printf("woha! I am in love ");
        break;
        case 3:
        printf("Good afternoon");
        break;
        case 7:
        printf("good Evening");
        break;
        case 9:
        printf("good night");
        break;

        default :
        printf("what is good in morning");

    }
}