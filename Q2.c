#include<stdio.h>

int main(){
    int subject;
    int arr[3];
    int sum=0;
    int i;
    float percentage;
    printf("\n\nEnter the marks for 3 subjects: \n");
    for(i=0;i<3;i++){
        printf("Subject %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    i=0;
    while(i<3){
        sum=sum+arr[i];
        i++;
    }
    percentage=sum*100/300;
    if(percentage>=90&&percentage<=100){
        printf("\nYou obtained Grade A with %.1%f! Eligible for Division Placement!\n",percentage);
    }
    else if(percentage>=80&&percentage<90){
        printf("\nYou obtained Grade B with %.1%f ! Eligible for Division Placement!\n",percentage);
    }
    else if(percentage>=70&&percentage<80){
        printf("\nYou obtained Grade C with %.1%f ! Eligible for Division Placement!\n",percentage);
    }
    else if(percentage>=60&&percentage<70){
        printf("\nYou obtained Grade D with %.1%f ! Eligible for Division Placement!\n",percentage);
    }
    else {
        printf("\nYou obtained Grade E with %.1%f, you failed! Not eligible for Division Placement!\n",percentage);
    }
    return 0;
}