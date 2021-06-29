#include <time.h>
#include <stdio.h>
#include <windows.h>
int main(int argc, char const *argv[])
{
    int pin = 1234, choice, count = 0, enterPin;
    float balance = 5000.000, amount = 1;
    time_t now;
    time(&now);
    printf("\n");
    printf("\t\t\t\t\t        ==================== *Welcome to our ATM* ====================\n");

    while(enterPin != pin){
        printf("%5s",  "Enter the pin please : ");
        scanf("%d", &enterPin);
        if(enterPin != pin){
            Beep(610, 500);
            printf("Access denied...\n");
        }
        count++;
        if(count == 3 && enterPin != pin){
            exit(0);
        }
    }
    printf("Access Granted...");
    while(1){
        printf("\n\n\n\t\t\t\t\t                            %s", ctime(&now));
        printf("\n\t\t\t\t\t       ====================*Available Transactions*====================");
        printf("\n\t\t\t* * * * * *");
        printf("\n\t\t\t1.Withdrawl");
        printf("\n\t\t\t* * * * * *");
        printf("\n\t\t\t2.Deposite");
        printf("\n\t\t\t* * * * * *");
        printf("\n\t\t\t3.Balance");
        printf("\n\t\t\t* * * * * *");
        printf("\n\t\t\tEnter [0] to exit");
        printf("\n\t\t\t* * * * * *");
        printf("\nEntrer your choice : ");
        scanf("%d", &choice);
        switch(choice){
            case 0:
                printf("\n\n\tGoodBye....\n");
                exit(0);
                break;
            case 1:
                printf("\tEnter the amount : ");
                scanf("%f", &amount);
                if (amount > balance){
                    printf("\tnot enough balance");
                    amount = 1;
                    exit(0);
                } else{
                    balance -= amount;
                    printf("\tTransaction completed successfully...\n");
                    printf("\tYou have a total of %.2f $ in your account...\n", balance);
                }
                break;
            case 2:
                printf("\tEnter amount : ");
                scanf("%f", &amount);
                if (amount <= 0){
                    printf("\tPlease Enter a valid amount....");
                    amount = 1;
                    exit(0);
                } else{
                    balance += amount;
                    printf("\n\tDeposite granted successfully, you have total amount of %.2f $...\n", balance);
                }
                break;
            case 3:
                printf("\tYou have %.2f $ in your account\n", balance);
                break;
        }
    }
    return 0;
}