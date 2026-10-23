#include <cstdlib>  //system definations
#include <iostream> // i/o definations

const int X = 1, O = -1, Empty = 0; // posible marks
int board[3][3];                    // playing board
int currentPlayer;                  // current player (x and 0)

void clearBoard() // clear the board
{
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      board[i][j] = Empty; // every cell is empty
  currentPlayer = X;       // plaer X starts
}

void putMark(int i, int j) // mark row i column j
{
  board[i][j] = currentPlayer;    // mark with current player
  currentPlayer = -currentPlayer; // switch players
}

bool isWin(int mark) // is mark the winner ?
{
  int win = 3 * mark;                                           // +3 for X and -3 for 0
  return ((board[0][0] + board[0][1] + board[0][2] == win)      // row 0
          || (board[1][0] + board[1][1] + board[1][2] == win)   // row 1
          || (board[2][0] + board[2][1] + board[2][2] == win)   // row 2
          || (board[0][0] + board[1][0] + board[2][0] == win)   // column 0
          || (board[0][1] + board[1][1] + board[2][1] == win)   // column 1
          || (board[0][2] + board[1][2] + board[2][2] == win)   // column 2
          || (board[0][0] + board[1][1] + board[2][2] == win)   // diagonal
          || (board[2][0] + board[1][1] + board[0][2] == win)); // diagonal
}

int getWinner()
{
  if (isWin(X))
    return X;
  else if (isWin(O))
    return O;
  else
    return Empty;
}

void printBoard()
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      switch (board[i][j])
      {
      case X:
        std::cout << "X";
        break;
      case O:
        std::cout << "O";
        break;
      case Empty:
        std::cout << " ";
        break;
      }
      if (j < 2)
        std::cout << " | ";
    }
    if (i < 2)
      std::cout << "\n-+-+-\n";
  }
}

int main()
{
  clearBoard();
  putMark(0, 0);
  putMark(1, 1);
  putMark(0, 1);
  putMark(0, 2);
  putMark(2, 0);
  putMark(1, 2);
  putMark(2, 2);
  putMark(2, 1);
  putMark(1, 0);

  printBoard();

  int winner = getWinner();
  if (winner != Empty)
    std::cout << " " << (winner == X ? 'X' : 'O') << " wins" << std::endl;
  else
    std::cout << " Tie" << std::endl;
  return 0;
}