//Nathanael Kim CPSC 223 Assignment 1
//Program: TicTacToe
//Since no booleans exist in C, all 'boolean' functions are int functions and 1 = true while 0 = false

#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

const char SPACE = ' ';//declaring all the constants
const char PLAYER = 'x';
const char COMPUTER = 'o';

#define ROWS 3
#define COLUMNS 3

void printBoard(char board[ROWS][COLUMNS]) {//function that prints the board whenever called
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j >= 0 && j < 2) {
                printf(" | ");//spacer
            }
        }
        printf("\n");
        if (i >= 0 && i < 2) {
            printf(" - + - + - \n");//spacer
        }
    }
}


//Next two functions check input


void SetPlayerMove(char board[ROWS][COLUMNS]) {//menu for the player. function also checks for invalid spots
    int rowInput, columnInput;
    do {
        printf("Please choose a row between 0 and 2: ");

        scanf_s("%d", &rowInput);//input

        printf("Please choose a column between 0 and 2: ");

        while ((getchar()) != '\n');//clear buffer

        scanf_s("%d", &columnInput);//input

        if (board[rowInput][columnInput] == PLAYER || board[rowInput][columnInput] == COMPUTER) {//checks for invalid moves
            printf("Please choose a valid space \n");
        }
        else {
            printf("You have choosen the space %d %d \n", rowInput, columnInput);
        }
    } while (board[rowInput][columnInput] == PLAYER || board[rowInput][columnInput] == COMPUTER);//sets player move
    board[rowInput][columnInput] = PLAYER;
}

void SetComputerMove(char board[ROWS][COLUMNS]) {//sets computer move. function also checks for invalid spots
    int compChoiceRow = rand() % 3;
    int compChoiceColumn = rand() % 3;
    do {
        compChoiceRow = rand() % 3;//random number between 0 and 2
        compChoiceColumn = rand() % 3;//random number between 0 and 2
        if (board[compChoiceRow][compChoiceColumn] == PLAYER || board[compChoiceRow][compChoiceColumn] == COMPUTER) {//checks for invalid moves
        }
    } while (board[compChoiceRow][compChoiceColumn] == PLAYER || board[compChoiceRow][compChoiceColumn] == COMPUTER);//sets computer move
    board[compChoiceRow][compChoiceColumn] = COMPUTER;
}


//Next three functions check win conditions


int CheckRows(char board[ROWS][COLUMNS], char piece) {//function that checks if a row is completed (as in a win)
    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == piece) {
                count++;
            }
        }
        if (count == 3) {
            return 1;//true
        }
        count = 0;
    }
    return 0;//false
}

int CheckColumns(char board[ROWS][COLUMNS], char piece) {//function that checks if a column is completed (as in a win)
    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[j][i] == piece) {
                count++;
            }
        }
        if (count == 3) {
            return 1;//true
        }
        count = 0;
    }
    return 0;//false
}

int CheckDiagonals(char board[ROWS][COLUMNS], char piece) {//function that checks if a diagonal is completed (as in a win)
    int count = 0;
    if (board[0][0] == piece && board[1][1] == piece && board[2][2] == piece) {
        return 1;//true
    }
    else if (board[2][0] == piece && board[1][1] == piece && board[0][2] == piece) {
        return 1;//true
    }
    else {
        return 0;//false
    }
}


//Next three functions checks endgame conditions


int IsWinner(char board[ROWS][COLUMNS], char piece) {//checks is a player has won
    if (CheckRows(board, piece) == 1 || CheckColumns(board, piece) == 1 || CheckDiagonals(board, piece) == 1) {
        return 1;//true
    }
    else {
        return 0;//false
    }
}

int IsBoardfull(char board[ROWS][COLUMNS]) {//checks if the board is full creating a tie
    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == PLAYER || board[i][j] == COMPUTER) {
                count++;
            }
        }
    }
    if (count == 9) {
        return 1;//true
    }
    else {
        return 0;//false
    }
}

int DetermineBoardState(char board[ROWS][COLUMNS]) {//if one of the ending conditions is met than this function checks who it is
    if (IsWinner(board, PLAYER) == 1) {//if true
        return 1;
        //return PLAYER_WINS;
    }
    else if (IsWinner(board, COMPUTER) == 1) {//else if true
        return 2;
        //return COMPUTER_WINS;
    }
    else if (IsBoardfull(board) == 1) {//else if true
        return 3;
        //return DRAW;
    }
    else {
        return 0;
        //return GAME_UNFINISHED;
    }
}


int main() {//main function, loops the print and player moves until an ending condition is met

    srand(time(0));//resets seed for rand() function

    char board[ROWS][COLUMNS];//creates the board

    for (int i = 0; i < ROWS; i++) {//fills board with empty space
        for (int j = 0; j < COLUMNS; j++) {
            board[i][j] = SPACE;
        }
    }
    do {//loops print and input functions until an endgame conditions is met
        printBoard(board);
        SetPlayerMove(board);
        SetComputerMove(board);
    } while (DetermineBoardState(board) == 0);

    //print final statement
    //int endgame = DetermineBoardState(board);
    /*
        if (endgame == 1) {
        printf("The Player Wins!");
    }else if (endgame == 2) {
        printf("The Computer Wins!");
    }else if(endgame == 3) {
        printf("Its a Cats Game!");
    }
    */

    printf("Its a Cats Game!");
    return 0;
}
