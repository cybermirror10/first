#include<stdio.h>

int main(){

    int arr[4];
    printf("write the 1st value: ");
    scanf("%d",&arr[0]);

    printf("Write the 2nd value: ");
    scanf("%d",&arr[1]);

    printf("Write the 3rd value:  ");
    scanf("%d",&arr[2]);

    printf("write the 4th value:  ");
    scanf("%d",&arr[3]);

    if(arr[0]==arr[1] && arr[0]==arr[2] && arr[0]=arr[3]){

        printf("True");
    }else if(arr[1]==arr[2] && arr[1]==arr[3]){

        printf("True");
    }else if(arr[2]==arr[3]){

        printf("True");
    }else{

        printf("False");
    }
        return 0;
    }
