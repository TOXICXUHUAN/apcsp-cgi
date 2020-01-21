#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void display(int board[5][5]);
void check(int board[5][5]);

int main(int argc, char* argv[]) {
  srand ( time(NULL) );
  if (argc != 3)
  {
    printf("%s : expected 2 args, please enter two integers\n", argv[0]);
    return 1;
  }
  int arg1;
  int found = sscanf(argv[1], "%d", &arg1);
  if (found != 1)
  {
    printf("first arg is not an integer, enter two ints\n");
    return 1;
  }
  int arg2;
  found = sscanf(argv[2], "%d", &arg2);
  if (found != 1)
  {
    printf("second arg is not an integer, enter two ints\n");
    return 1;
  }
  int board[5][5];
  int i, j;
  for(i=0; i<5; i++) {
      for(j=0;j<5;j++) {
         board[i][j] = rand() % 2;
      }
   }
   
  display(board);

  if (board[arg1][arg2] == 1)
  {
    printf("Bullseye, we hit the target");
    board[arg1][arg2] = 0;
  }
  else
  {
    printf("We didn't hit the target.");
  }
  check(board);
}
   void display(int board[5][5])
  {
    int i, j;
    for(i=0; i<5; i++) {
      for(j=0;j<5;j++) {
        printf("%d ", board[i][j]);
          if(j==4){
            printf("\n");
        }
      }
    }
  }
  void check(int board[5][5])
  {
    int i, j;
    int n = 0;
    for(i=0; i<5; i++) {
      for(j=0;j<5;j++) {
        if (board[i][j] == 1)
        {
          n = n + 1;          
          
        }
      }
    }
printf("There are %d enemies left on the battlefield", n);
if (n == 0)
          {
            printf("GAME OVER");
          }
  }
