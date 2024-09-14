#include <stdio.h>
#include <string.h>



struct emp
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct emp s,*ptr;
    
    
    ptr=&s;
    s.id=21;
   
    printf("%d\n",ptr->id);

    strcpy(s.name,"ramjeet");
    printf("%s\n",ptr->name);

    s.salary=40000;
    printf("%f",ptr->salary);
}