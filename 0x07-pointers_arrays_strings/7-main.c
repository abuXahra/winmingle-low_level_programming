#include "main.h"
#include <stdio.h>

/*
 * Author: Isah Abdulumin
 * Program: WinMingle Community Training
 * Desription: Print 8x8 chessboard from char board[8][8]..
 * */

int main(void)
{
    char board[8][8] = {
    	{'r','k','b','q','k','r'},
	{'p','p','p','p','p','p'},	
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{'P','P','P','P','P','P'},
	{'R','K','B','Q','K','R'}

    };

    print_chessboard(board);

    return 0;

}
