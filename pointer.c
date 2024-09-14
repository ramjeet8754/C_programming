#include <stdio.h>

int main()
{
    int val=10;
    //int *ptr=&val;
    
    int *ptr;
    ptr=&val;
    printf("%d\n",ptr);

    printf("%d\n",val);
}

//constant pointer
int *const ptr;//its pointing to address which can not modify.
//pointer to constan
const int *ptr;//its pointing to value which can not modfiy once its define.