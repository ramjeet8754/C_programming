#include <stdio.h>

int main()
{
    char name[]="ramjeet";
int flag=0,len=0;
    for(int i=0;name[i]!='\0';i++)
    {
    len++;
}
    for(int i=0;i<=len/2;i++)
    {
        if(name[i]!=name[len-i-1])
        {
            flag=1;
            break;
        }
    }  
    if(flag==1)
    {
        printf(" not palindrome");
        
    }else{
        printf("  palindorme");
    }
    
}