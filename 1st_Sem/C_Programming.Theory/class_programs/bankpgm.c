#include<stdio.h>
int main(){
    int accountno=200;
    int choice;
    int accno;
    float balance=500;
    int deposit,withdraw;
    printf("\n------Welcome to My Bank------\n");

    do
    {
    printf("1.Deposite\n");
    printf("2.Withdraw\n");
    printf("3.Account View\n");
    printf("4.Exit\n");

    printf("Enter your Option");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("Enter account number:");
        scanf("%d",&accno);
        
        if(accno==accountno)
        {
            printf("Vaild Account\n");
            printf("Enter deposit amount:");
            scanf("%f",&deposit);

            if(deposit>0)
            {
                balance=balance+deposit;
                printf("Account Update..\n");
                printf("current balance:%.2f\n",balance);
            }
            else
            {
                printf("Invaild deposit amount\n");
            }
        }
            else
            {
                printf("Invaild Account\n");
            }
            break;

        case 2:
        printf("Enter account number:");
        scanf("%d",&accno);

        if(accno==accountno)
        {
            printf("Vaild Account\n");
            printf("Enter the amount:");
            scanf("%f",&withdraw);

            if(withdraw<=0)
            {
                printf("Invaild amount\n");
            }
            else if(withdraw>balance)
            {
              printf("Insufficient balance\n");
            }
            else
            {
                balance=balance-withdraw;
                printf("Withdraw successful\n");
                printf("current account balance:%.2\n",balance);
             }
            }
            else
            {
                printf("Invaild Account\n");
            }
            break;
            
            case 3:
             printf("\nAccount  Number:%d\n",accountno);
             printf("Balance:%.2f\n",balance);
             break;

             case 4:
             printf("\nThank you for using My Bank!\n");
             break;

             default:
             printf("Invaild option\n");
        }
    }while(choice!=4);

    return 0;
}

    