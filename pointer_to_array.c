#include <stdio.h>

int main()
{
    //declare of pointer to array(array pointer)
   // int *ptr [5]={3,4,5,6,7,8};

    int array[5]={45,44,46,47,48};
    int *ptr;
    ptr=array;
    printf("%d\n",ptr[0]);
}