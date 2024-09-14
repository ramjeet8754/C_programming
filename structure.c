#include <stdio.h>
#include <string.h>

struct emp{
    int id;
    char name[20];
    float salary;
};

int main()
{
    struct emp s;

    s.id=21;
    printf("%d\n",s.id);

    strcpy(s.name,"ram");
    printf("%s\n",s.name);

    s.salary= 40000;
    printf("%f\n",s.salary);
}