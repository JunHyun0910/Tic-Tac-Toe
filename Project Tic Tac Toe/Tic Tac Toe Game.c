#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char Player = 'X';
const char Computer = 'O';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

int main() {
    
int game = 1;
    //Diplay Game Title
    printf("Welcome To Tic Tac Toe Game\n\n");
    
    char winner = ' ';
    char response;
    
    do{
    printf("   Game %d\n",game);
    winner = ' ';
    response = ' ';
    
    resetBoard();
    
    while(winner == ' ' && checkFreeSpaces() != 0){
    printBoard();
    
    playerMove();
    winner = checkWinner();
    if(winner != ' '||checkFreeSpaces() == 0){
    break;   
    }
    
    computerMove();
    winner = checkWinner();
    if(winner != ' '||checkFreeSpaces() == 0){
    break; 
    }}
    
    printBoard();
    printWinner(winner);  
    printf("Yes or No (Y/N): ");
    scanf(" %c",&response);
    response = toupper(response);
    printf("\n");
    if(response == 'Y')
    {game++;}
    }while(response == 'Y');
    printf("\n:3 Thanks For Playing...");
    
    return 0;
}

void resetBoard(){
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
        board[i][j] = ' ';    
        }
    }
}
void printBoard(){
    printf(" %c | %c | %c ",board[0][0],board[0][1],board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ",board[1][0],board[1][1],board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ",board[2][0],board[2][1],board[2][2]);
    printf("\n");
}
int checkFreeSpaces(){
    int freeSpaces = 9;
    
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            if(board[i][j] != ' '){
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}
void playerMove(){
    
    int x = 0;
    int y = 0;
do{
    printf("Enter row #(1-3):");
    scanf("%d",&x);
    x--;
    
    printf("Enter column #(1-3):");
    scanf("%d",&y);
    y--;
    
    if(board[x][y] != ' '){
        printf("Invalid Move...\n\n");
    }
    else{
        board[x][y] = Player;
        break;
    }
}while(board[x][y] != ' ');

}
void computerMove(){
    //creates a seed based on current time
    srand(time(0));
    int x,y;

    if(checkFreeSpaces() > 0){
        do{
        x = rand() % 3; y = rand() % 3;    
        }while(board[x][y] != ' ');//if not empty
        board[x][y] = Computer;
    }
    else{ //no winner
        printWinner(' ');
    }
}
char checkWinner(){
    //check rows
    for(int i = 0;i < 3;i++){
    if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
    {return board[i][0];}
    }
    //check columns
    for(int i = 0;i < 3;i++){
    if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
    {return board[0][i];}
    }
    //check diagonals 
    //(\)
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {return board[0][0];}
    //(/)
    if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {return board[0][2];}
    
    return ' ';
}
void printWinner(char winner){
    if(winner == Player){
        printf(">:3 Congrats You Win!...Do you wish to play again?\n");
    }
    else if(winner == Computer){
        printf(":3 You Lose...Do you wish to play again?\n");
    }
    else{
        printf(":3 Tie...Do you wish to play Again?\n");
    }
}

