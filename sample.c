#include <stdio.h>

int main()
{
    int marks;
    printf("Enter any marks :");
    scanf("%d",&marks);
    if(marks >90 && marks <=100 )
    {
        printf("Congrates ! you scored grade A");
    }
    else if(marks>80 && marks <=90)
    {
        printf("Good ! you scored grade B");
    }
    else if(marks>70 && marks <=80)
    {
        printf("you scored c+");
    }
    else if(marks >50 && marks <=70)
    {
        printf("you scored is grade c");
    }
    else {
        printf("sorry ! you failed ");
    }
}
