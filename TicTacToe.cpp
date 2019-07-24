#include <iostream>

/*
 @Name: Tic Tac Toe
 @Author: Hoang Doan
 @Description:
The program will simulate the game of tic tac toe between a human and the computer, The computer will display
a blank tic tac toe board. The Human will be allowed to go first, and select the cell he will like to play in,
afterwards the program will mark the selected spot with an X and the display screen will display the board, the
computer will when then follow by marking the next available spots with an O, and again displaying the board, the
game will continue until there is a clear winner or until all the cells are exhausted. The Program should have its
own game theory, such that the computer will always get a minimum of a draw or win. To summarize, you must
write an unbeatable tic-tac-toe game. The computer will then declare the result of the game. and prompt the user
if he wants another game or if he wants to exit.
*/

//Define const
const char USER_PLAY_SYMBOL = 'X';
const char MACHINE_PLAY_SYMBOL = 'O';
const int HUMAN = 0;
const int MACHINE = 1;
const int SIDE = 3;  //3 rows and 3 column




//Define variables







//Function Prototype
void play();
//Show board tic tac toe
void showBoard();
void showInstructions();
bool checkCrossed(char board[SIDE]);
bool checkColumnCrossed(char board[SIDE]);
bool checkDiagonalCrossedd(char board[SIDE]);
void initialise(char board[][SIDE], int moves[]);







int main()
{
   // std::cout << "Hello World!\n"; 
	play();
}
void showBoard(char board[][SIDE]) {
	printf("\n\n");

	printf("\t\t\t  %c | %c  | %c  \n", board[0][0],
		board[0][1], board[0][2]);
	printf("\t\t\t--------------\n");
	printf("\t\t\t  %c | %c  | %c  \n", board[1][0],
		board[1][1], board[1][2]);
	printf("\t\t\t--------------\n");
	printf("\t\t\t  %c | %c  | %c  \n\n", board[2][0],
		board[2][1], board[2][2]);
}

//This function will int the game play
void initialise(char board[][SIDE], int moves[]) {
	// Initiate the random number generator so that  
   // the same configuration doesn't arises 
	//srand(time(NULL));

	// Initially the board is empty 
	for (int i = 0; i < SIDE; i++)
	{
		for (int j = 0; j < SIDE; j++)
			board[i][j] = ' ';
	}

	// Fill the moves with numbers 
	for (int i = 0; i < SIDE*SIDE; i++)
		moves[i] = i;

	// randomise the moves 
	//rand(moves, moves + SIDE * SIDE);

	return;
}

// A function to show the instructions 
void showInstructions()
{
	printf("\t\t\t  Tic-Tac-Toe\n\n");
	printf("Choose a cell numbered from 1 to 9 as below"
		" and play\n\n");

	printf("\t\t\t  1 | 2  | 3  \n");
	printf("\t\t\t--------------\n");
	printf("\t\t\t  4 | 5  | 6  \n");
	printf("\t\t\t--------------\n");
	printf("\t\t\t  7 | 8  | 9  \n\n");

	printf("-\t-\t-\t-\t-\t-\t-\t-\t-\t-\n\n");

	return;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void play() {
	//A 3 * 3 Tic - Tac - Toe board for playing
	char board[SIDE][SIDE];
	int moves[SIDE*SIDE];
	// Initialise the game 
	initialise(board, moves);
	showInstructions();
}
