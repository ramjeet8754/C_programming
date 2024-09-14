#include <stdio.h>
#include <string.h>

//funcation declaration 
//int add(int a, int b);
//funcation pointer delcalration 
//int (*ptr)(int a, int b);

//#define swap_nibble(num) (num &0xf0)>>4 | (num&0x0f)<<4


/*#define SETBIT(num, pos) num | (1<<pos)
#define clearbit(num,pos) num&(~(1<<pos))
#define toggle(num,pos) num^(1<<pos)
#define get(num,pos) num&(1<<pos) */
int main()
{

// structure 
struct emp{
    char name[50];
    int id;
    float salary;
};

struct emp s1;

struct emp *ptr;
ptr=&s1;

ptr->id=21;
//s1.id=22;
printf("%d\n",ptr->id);

strcpy(s1.name,"advik");
printf("%s \n",s1.name);

s1.id=31;
printf("%d",s1.id);



    /*
//int a=40,b=22;
int x=23,y=22;
    //funcation 
   int val=add(x,y);//calling funcaiton 
   printf("%d\n",val);

//funcaiton pointer calling

  ptr=&add;
//ptr(int a,int b);
int val2=ptr(x,y);
printf("%d \n",val2);*/


/*
//array reverse
int array[5]={1,2,3,4,5};
for(int i=5;i>0;i--)
{
    printf("%d \t",array[5]);
}*/

/*
//assceding or sort number:-

int arr[5]={55,34,33,23,66};

for(int i =0;i<5;i++)
{
    for(int j=i+1;j<5;j++){
        if(arr[i]>arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
for(int i=0;i<5;i++)
{
printf("%d \t",arr[i]);
}*/



/*
// reverse string:-

char ch[50]="Advik ronak";
int len=0;
for(int i=0;ch[i]!='\0';i++){
    len++;
}
for(int i=0;i<len/2;i++){
    int temp = ch[len-i-1];
    ch[len-i-1]=ch[i];
    ch[i]=temp;
}
    printf("%s",ch);
*/



/*
//palindrome numner:-

char ch[]="ramjeet";
int flag=0,len=0;
for(int i=0;ch[i]!='\0';i++)
    len++;

for(int i=0;i<len/2;i++){
    
    if(ch[i]!=ch[len-i-1])
    {
        flag=1;
        break;
    }

}
if(flag=1){
    printf("palindrome");
}
else{
    printf("not palindrome");
}*/


/*
//armstrong number 153:
int num=153,rem=0,arm;
int temp=num;


while (num!=0)
{
 rem=num%10;
 arm=arm+(rem*rem*rem);
 num=num%10;
    
}
if(temp=arm)
{
printf("armstrong");
}
else{
    printf("not armstrong");
}*/


    /*
    //fibonacci series:-

    int num;
    int a=0,b=1,c;
    printf("Enter any number:");
    scanf("%d",&num);
    printf("%d %d",a,b);

    for(int i=2;i<=num;i++)
    {
        int c=a+b;
        a=b;
        b=c;
        printf("%d\t",c); 
    } */
   


    //prime number:-
    /*int num,c=0;
    printf("Enter any number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(num%i==0)
        {
            c++;
        }
    }
    if(c==2){
        printf("prime");
    }
    else
    {
        printf("not prime");
    }*/

//count 1 to 100:-
    /*int i=0;
    while(100-i++)
    printf("%d",i);*/

//factorial number:-
/*int fact=1;
for(int i=1;i<=5;i++)
{
     fact=fact*i;
    
}
printf("%d\t",fact);*/

//10 table multiplication:-
/*int num=10;

for(int i=1;i<=10;i++)
{
int val=num*i;
printf("%d \t",val);
} */
    //int arr[5]={5,4,3,2,1};


//Macro printf ans swapping_nibble:-

//int x=30;
//printf("%d\n",x);
//int num=0x54;
//printf("%x",swap_nibble(num));
/*printf("Enter any number: Enter any position");
scanf("%d %d",&num,&pos);
printf("%d \n",SETBIT(num, pos));
printf("%d\n",clearbit(num,pos));
printf("%d\n",toggle(num,pos));
printf("%d\n",get(num,pos)); */


}
/*
//funcation defination 
int add(int a, int b)
{
    int c=a+b;
    return c;
}*/