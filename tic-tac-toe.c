#include <stdio.h>

void print_board(char board[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (board[i][j]) {
        printf("%c", board[i][j]);
      } else {
        printf(" ");
      }

      if (j != 2) {
        printf(" | ", board[i][j]);
      }
    }

    printf("\n");
    if (i != 2) {
      printf("---------\n");
    }
  }
}

char check_winning_state(char board[3][3]) {
  for (int i = 0; i < 3; i++) {
    if (board[i][0] != 0 && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
      return board[i][0];
    }
  }

  for (int i = 0; i < 3; i++) {
    if (board[0][i] != 0 && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
      return board[i][0];
    }
  }

  if (board[0][0] != 0 && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
    return board[0][0];
  }

  if (board[2][0] != 0 && board[2][0] == board[1][1] && board[1][1] == board[0][2]) {
    return board[2][0];
  }

  return 0;
}

int check_draw_state(char board[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (board[i][j] == 0) {
        return 0;
      }
    }
  }

  return 1;
}

int main() {
  // X, O, 0
  char board[3][3] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  char current_player = 'x';

  while (1) {
    int x_cord = 0;
    int y_cord = 0;

    printf("\n");
    print_board(board);
    printf("Potez za %c (0-2 0-2): ", current_player);
    scanf("%d %d", &x_cord, &y_cord);

    if (x_cord < 0 || x_cord > 2 || y_cord < 0 || y_cord > 2) {
      continue;
    }

    if (board[y_cord][x_cord] != 0) {
      continue;
    }

    board[y_cord][x_cord] = current_player;
    current_player = current_player == 'x' ? 'o' : 'x';

    char winner = check_winning_state(board);
    if (winner != 0) {
      printf("Kraj, %c je pobednik!\n", winner);
      break;
    }

    if (check_draw_state(board)) {
      printf("Kraj, igra je izjednacena...\n");
      break;
    }
  }

  return 0;
}