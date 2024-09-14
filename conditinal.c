#include <stdio.h>
int main()
{
    int marks; //enum week day;
    printf("Enter any marks:");
    scanf("%d",&marks);
    if(marks>90 && marks<=100)
    {
       printf("Congrates! you scored grade is A+"); 
    }
    else if(marks >80 && marks <=90)
    {
        printf("good ! you scored grade is A");
    }
    else if(marks >60 && marks <=80)
    {
        printf("you scored grade is B");
    }
    else if(marks >40 && marks <=60)
    {
        printf("you scored grade is C");
    }
    else{
        printf("Sorry ! you failed");
    }
        
    
}