#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//prototypes
void level1(void);
void level2(void);
void level3(void);
void level4(void);
void good(void);
void bad(void);

int main(void){
    int choice;
    printf("Please choose a level from 1 to 4 : ");
    scanf("%d", &choice);
    if (choice == 1){
        level1();
    } else if(choice == 2){
        level2();
    } else if(choice == 3){
        level3();
    } else if(choice == 4){
        level4();
    } 
    return 0;
}

// level 1
void level1(void){
    srand(time(NULL));
    int counter, RA = 0;
    for(counter = 0; counter < 10; ++counter){
        int first = rand() % 10;
        int second = rand() % 10;
        int correct = first * second;
        int answer;
        printf("\nWhat is %d by %d ?  ", first, second);
        scanf("%d", &answer);
        if (answer == correct){
            RA++;
            good();
            // end of switch statment
        } //end of if
        else{
        bad();
        // end of else's switch
        } // end of else
    } // end of for
    int Rprecent = ((RA / 10) * 100);
    if (Rprecent >= 75){
        printf("Congratulations, you are ready to go to the next level!\n");
        printf("Welcome to level 2\n");
        level2();
    } else if(Rprecent < 75) {
        printf("Please ask your teacher for extra help.\n");
    } 
} // end of function defnition

// level 2
void level2(void){
    srand(time(NULL));
    int lower = 11, upper = 99;
    int counter, RA = 0;
    for(counter = 0; counter < 10; ++counter){
        int first = (rand() % (upper - lower + 1) + lower);
        int second = (rand() % (upper - lower + 1) + lower);
        int correct = first * second;
        int answer;
        printf("\nWhat is %d by %d ?  ", first, second);
        scanf("%d", &answer);
        if (answer == correct){
            RA++;
            good();
            // end of switch statment
        } //end of if
        else{
            bad();// end of else's switch
        } // end of else
    } // end of for
    int Rprecent = ((RA / 10) * 100);
    if (Rprecent >= 75){
        printf("Congratulations, you are ready to go to the next level!\n");
        printf("Welcome to level 3\n");
        level3();
    } else if(Rprecent < 75) {
        printf("Please ask your teacher for extra help.\n");
    } 
} // end of function defnition

//level 3
void level3(void){
    srand(time(NULL));
    int lower = 100, upper = 999;
    int counter, RA = 0;
    for(counter = 0; counter < 10; ++counter){
        int first = (rand() % (upper - lower + 1) + lower);
        int second = (rand() % (upper - lower + 1) + lower);
        int correct = first * second;
        int answer;
        printf("\nWhat is %d by %d ?  ", first, second);
        scanf("%d", &answer);
        if (answer == correct){
            RA++;
            good();
            // end of switch statment
        } //end of if
        else{
            bad(); // end of else's switch
        } // end of else
    } // end of for
    int Rprecent = ((RA / 10) * 100);
    if (Rprecent >= 75){
        printf("Congratulations, you are ready to go to the next level!\n");
        printf("Welcome to level 4\n");
        level4();
    } else if(Rprecent < 75) {
        printf("Please ask your teacher for extra help.\n");
    } 
} // end of function defnition

//level 4
void level4(void){
    srand(time(NULL));
    int lower = 1000, upper = 9999;
    int counter, RA = 0;
    for(counter = 0; counter < 10; ++counter){
        int first = (rand() % (upper - lower + 1) + lower);
        int second = (rand() % (upper - lower + 1) + lower);
        int correct = first * second;
        int answer;
        printf("\nWhat is %d by %d ?  ", first, second);
        scanf("%d", &answer);
        if (answer == correct){
            RA++;
            good();
            // end of switch statment
        } //end of if
        else{
            bad(); // end of else's switch
        } // end of else
    } // end of for
    int Rprecent = ((RA / 10) * 100);
    if (Rprecent >= 75){
        printf("Congratulations, you are ready to go to the next level!\n");
    } else if(Rprecent < 75) {
        printf("Please ask your teacher for extra help.\n");
    } 
} // end of function defnition

void good(void){
    int right = rand() % 4;
    switch(right){
        case 0:
            printf("Very good!\n");
        break;
        case 1 :
            printf("Excellent!\n");
        break;
        case 2:
            printf("Nice work!\n");
        break;
        case 3:
            printf("Keep up the good work!\n");
        break;
    }
}

void bad(void){
    int wrong = rand() % 4;
    switch(wrong){
        case 0:
            printf("No.\n");
        break;
        case 1:
            printf("Wrong. Try once more.\n");
        break;
        case 2:
            printf("Don't give up!\n");
        break;
        case 3:
            printf("No. Keep trying.\n");
        break;
    }
}