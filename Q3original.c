#include<stdio.h>
#include<stdlib.h>

int acc_no;
int acc_pass;
const int myAccountNo=110011;
const int myPassword=123;
const char acc_name[20]="Paul Obeng Yeboah";
int myBalance=1000;

void deposit();
void balance();
void account();
int main(){
    int opt;
    while(1){
        printf("\n---------MYBANK----------\n");
        printf("\nSelect an Option from below: \n");
        printf("\n1. Deposit");
        printf("\n2. Balance Enquiry");
        printf("\n3. Account Details");
        printf("\n4. Exit");
        printf("\n\nYour Option: ");
        scanf("%d",&opt);
        switch(opt){
            case 1:
                deposit();
                break;
            case 2:
                balance();
                break;
            case 3:
                account();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid Option!!");
                break;
        }
    }
}

void deposit(){
    int amount;
    char name[20];
    int opt;
    int balance=0;
    printf("\n****************** DEPOSIT *******************\n\n");
    printf("Enter destination Account Number: ");
    scanf("%d",&acc_no);
    printf("\nEnter name of depositor: ");
    scanf("%s",&name);
    printf("\nEnter amount: ");
    scanf("%d",&amount);
    printf("\nConfirm deposit ? Enter 1 for yes or 2 for no: ");
    scanf("%d",&opt);
    if(opt==1){
        if(acc_no==myAccountNo){
            myBalance=myBalance+amount;
            printf("\nDeposit Successful, Current Balance: %d\n",myBalance);
            printf("\nYour Receipt:\n");
            printf("1.Account Number: %d\n",acc_no);
            printf("2.Account Name: %s\n",name);
            printf("3.Current Balance: INR %d\n",myBalance);

        }
        else{
            balance=balance+amount;
            printf("\nDeposit Successful, Current Balance: %d\n",balance);
            printf("Your Receipt:\n");
            printf("1.Account Number: %d\n",acc_no);
            printf("2.Account Name: %s\n",name);
            printf("3.Current Balance: INR %d\n",balance);
        }
        
    }
    else if(opt==2){
            printf("\nDeposit Cancelled !!\n" );
            exit(0);
        }
    else{
            printf("Incorrect input!");
            exit(0);    
        }
}

void balance(){
    printf("\n****************** BALANCE *******************\n\n");
    printf("Enter your Account Number: ");
    scanf("%d",&acc_no);
    printf("Enter your password: ");
    scanf("%d",&acc_pass);
    if(acc_no==myAccountNo && acc_pass==myPassword){
        printf("\nYour Current Balance is : INR %d\n\n",myBalance);
    }else{
        printf("Incorrect Account Number or Password!!");
        exit(0);
    }
}


void account(){
    printf("\n****************** ACCOUNT DETAILS *******************\n\n");
    printf("Enter your Account Number: ");
    scanf("%d",&acc_no);
    printf("Enter your password: ");
    scanf("%d",&acc_pass);
    if(acc_no==myAccountNo && acc_pass==myPassword){
        printf("\n**** YOUR ACCOUNT DETAILS ***\n");
        printf("1.Account Number: %d\n",acc_no);
        printf("2.Account Name: %s\n",acc_name);
        printf("3.Current Balance: INR %d\n",myBalance);      
    }else{
        printf("Incorrect Account Number or Password!!");
        exit(0);
    }
}