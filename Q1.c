#include<stdio.h>
int main(){
    int arr[5];
    int sum;
    int diff;
    printf("Enter five integers: \n");
    for(int i=0;i<5;i++){
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    sum=arr[0]+arr[4];
    diff=arr[4]-arr[0];
    if(sum>50){
        printf("welcome\n");
    }
    else if(diff>10){
        printf("hello\n");
    }
    else{
        printf("Hi\n");
    }
    return 0;
}