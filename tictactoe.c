#include <stdio.h>
#include <windows.h>
//#include <term.h>
char box[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void board();
void markB(int choice, char mark);
int checkWin();
int main(int argc, char *argv[])
{
    int player = 1, move, i;
    char mark;
    do{
        board();
        player = (player % 2) ? 1 : 2;
        printf("Player %d turn : ", player);
        scanf("%d", &move);
        mark = (player == 1) ? 'X' : 'O';
        markB(move, mark);
        i = checkWin();
        player++;
    }while(i == -1);
    board();
    if (i == 1){
        printf("\n\n\t\tPlayer %d wins, congrats\n", --player);
    } else {
        printf("\n\n\t\t<----------Draw---------->");
    }
    return 0;
}
void board(){
    //clearerr;
    Sleep(650);
    system("cls"); // clear the screen
    printf("\n\n\t\t\tTic Tac Toe\n");
    printf("\t\tPlayer1 (X) -- Player2 (O)\n");
    printf("\t\t  _________________\n");
    printf("\t\t       |     |    \n");
    printf("\t\t   %c   |  %c  |  %c\n", box[1], box[2], box[3]);
    printf("\t\t  _____|_____|_____\n");
    printf("\t\t       |     |    \n");
    printf("\t\t   %c   |  %c  |  %c\n", box[4], box[5], box[6]);
    printf("\t\t  _____|_____|_____\n");
    printf("\t\t       |     |    \n");
    printf("\t\t   %c   |  %c  |  %c\n", box[7], box[8], box[9]);
    printf("\t\t  _____|_____|_____\n");
}
void markB(int choice, char mark){
    if(choice == 1 && box[1] == '1'){
        box[1] = mark;
    } else if(choice == 2 && box[2] == '2'){
        box[2] = mark;
    } else if(choice == 3 && box[3] == '3'){
        box[3] = mark;
    }  else if(choice == 4 && box[4] == '4'){
        box[4] = mark;
    } else if(choice == 5 && box[5] == '5'){
        box[5] = mark;
    } else if(choice == 6 && box[6] == '6'){
        box[6] = mark;
    } else if(choice == 7 && box[7] == '7'){
        box[7] = mark;
    } else if(choice == 8 && box[8] == '8'){
        box[8] = mark;
    } else if(choice == 9 && box[9] == '9'){
        box[9] = mark;
    } else{
        printf("\n\t\t\tInvalid move\n");
        exit(0);
    }
}
int checkWin(){
    if (box[1] == box[2] && box[2] == 3){
        return 1;
    } else if(box[4] == box[5] && box[5] == box[6]){
        return 1;
    } else if(box[7] == box[8] && box[8] == box[9]){
        return 1;
    }  else if(box[1] == box[4] && box[4] == box[7]){
        return 1;
    } else if(box[2] == box[5] && box[5] == box[8]){
        return 1;
    } else if(box[3] == box[6] && box[6] == box[9]){
        return 1;
    } else if(box[1] == box[5] && box[5] == box[9]){
        return 1;
    } else if(box[3] == box[5] && box[5] == box[7]){
        return 1;
    } else if(box[1] != '1' && box[2] != '2' && box[3] != '3' && box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7] != '7' && box[8] != '8' && box[9] != '9'){
        return 0;
    } else {
        return -1;
    }
}