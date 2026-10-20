#include <iostream>


class GamePlayer {
  private:
    enum { ArraySize = 5};

  public:
    int scores[ArraySize];

    void display() {
      scores[0] = 10;
      scores[1] = 20;
      scores[2] = 30;
      scores[3] = 40;
      scores[4] = 50;

      for (int i = 0; i < ArraySize; i++) {
        std::cout << "Score " << i << " is: " << scores[i] << std::endl;
      }
    }
};



int main () {

  GamePlayer g;
  g.display();
  

  return 0;
}