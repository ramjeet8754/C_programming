#include<stdio.h>

int main()
{
     int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("%d\n",array[1][2]);

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            printf("%d\n",array[i][j]);
        }
    }
}
    // int array[5]={20,30,55,40,50};
    // printf("%d %d\n",array[4],array[3]);
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d %d\n",i,array[i]);
    // }
    // //modify
    // array[2]=100;
    // printf("modify array :\n");

    //  printf("%d\n",array[2]);
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d %d\n",i,array[i]);
    // }



   
