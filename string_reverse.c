#include <stdio.h>

int main()
{

char ch[50]="ramjeet";
int len=0;
for(int i=0;ch[i]!='\0';i++)
len++;
for(int i=0;i<len/2;i++)
{
    int temp=ch[len-i-1];
    ch[len-i-1]=ch[i];
    ch[i]=temp;

}
printf("%s",ch);


}