#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
    srand(time(NULL));
    int number = rand() % 1000;
    int choice, counter = 0;
    //printf("---%d---\n\n\n\n", number);
    char yn;
    while(1){
        counter++;
        printf("I have a number between 0 and 1000, can you guess it ?\n");
        printf("Enter a number : ");
        scanf("%d", &choice);
        if (choice == number){
            if (counter < 10){
                printf("Either you know the secret or you got lucky!\n");
            } else if(counter == 10){
                printf("Ahah! You know the secret!\n");
            } else if(counter > 10){
                printf("You should be able to do better!\n");
            }
            printf("Would you like to play again ? (Enter Y for yes or N for No) : ");
            scanf(" %c", &yn);
            if (yn == 'Y' || yn == 'y'){
                return main();
            } else if(yn == 'N' || yn == 'n'){
                break;
            } // end of yes or no else 
        } // end of if the choice is matced
        else if (choice > number){
            printf("too high, try again\n");
        } else if(choice < number){
            printf("too low, try again\n");
        }
    } // end of while
}