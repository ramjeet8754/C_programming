//its divided by 1 and itself.
#include <stdio.h>

int main()
{
    int num,c=0;
    printf("Enter any number : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            c++;
        }
        
    }
    if(c==2){
        printf("prime number");
    }
    else{
        printf("not prime number");
    }
    
    return 0;

}