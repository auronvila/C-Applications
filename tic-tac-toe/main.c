#include <stdio.h>

void draw_board(char board[]) {
    printf("\n");
    printf(" %c | %c | %c \n", board[0], board[1], board[2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[3], board[4], board[5]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[6], board[7], board[8]);
    printf("\n");
}

int check_winner(char board[]) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i*3] == board[i*3 + 1] && board[i*3 + 1] == board[i*3 + 2])
            return 1;
    }
    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[i] == board[i + 3] && board[i + 3] == board[i + 6])
            return 1;
    }
    // Check diagonals
    if ((board[0] == board[4] && board[4] == board[8]) ||
        (board[2] == board[4] && board[4] == board[6]))
        return 1;

    return 0;
}

int main() {
    printf("Welcome to the Tic Tac Toe game made in C\n");
    int player1Val, player2Val, currentPlayer;
    char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int moves = 0;

    draw_board(board);

    while (1) {
        if (moves % 2 == 0) {
            currentPlayer = 1;
            printf("Player 1's turn (X): ");
            scanf("%d", &player1Val);
            if (board[player1Val - 1] == 'X' || board[player1Val - 1] == 'O') {
                printf("Invalid move! Try again.\n");
                continue;
            }
            board[player1Val - 1] = 'X';
        } else {
            currentPlayer = 2;
            printf("Player 2's turn (O): ");
            scanf("%d", &player2Val);
            if (board[player2Val - 1] == 'X' || board[player2Val - 1] == 'O') {
                printf("Invalid move! Try again.\n");
                continue;
            }
            board[player2Val - 1] = 'O';
        }

        draw_board(board);
        moves++;

        if (check_winner(board)) {
            printf("Player %d wins!\n", currentPlayer);
            break;
        } else if (moves == 9) {
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}
