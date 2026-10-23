#include <iostream>
#include <string>
using namespace std;

class GameEntry
{ // a game score entry
public:
  GameEntry(const string &n = "", int s = 0); // constructor
  string getName() const;                     // get player name
  int getScore() const;                       // get score
private:
  string name; // player’s name
  int score;   // player’s score
};

GameEntry::GameEntry(const string &n, int s) // constructor
    : name(n), score(s)
{
}
// accessors
string GameEntry::getName() const
{
  return name;
}

int GameEntry::getScore() const
{
  return score;
}

class Scores
{
public:
  Scores(int maxEnt = 10);
  ~Scores();
  void add(const GameEntry &e);
  GameEntry remove(int i);

private:
  int maxEntries;
  int numEntries;
  GameEntry *entries;
};

Scores::Scores(int maxEnt)
{
  maxEntries = maxEnt;
  entries = new GameEntry[maxEntries];
  numEntries = 0;
}

Scores::~Scores()
{
  delete[] entries;
}

void Scores::add(const GameEntry &e)
{
  int newScore = e.getScore();
  if (numEntries == maxEntries)
  {
    if (newScore <= entries[maxEntries - 1].getScore())
      return;
  }
  else
    numEntries++;
  int i = numEntries - 2;
  while (i >= 0 && newScore > entries[i].getScore())
  {
    entries[i + 1] = entries[i];
    i--;
  }
  entries[i + 1] = e;
}

GameEntry Scores::remove(int i)
{
  if ((i < 0) || (i >= numEntries))
  {
    std::cout << "Invalid Index" << "\n";
  };
  GameEntry e = entries[i]; // save the removed object
  for (int j = i + 1; j < numEntries; j++)
    entries[j - 1] = entries[j]; // shift entries left
  numEntries--;                  // one fewer entry
  return e;                      // return the removed object
}


void insertionSort(char *A, int n)
  {
    for (int i = 1; i < n; i++)
    {
      char cur = A[i];
      int j = i - 1;
      while ((j >= 0) && (A[j] > cur))
      {
        A[j + 1] = A[j];
        j--;
      }
      A[j + 1] = cur;
    }
  }

int main()
{

 Scores leaderboard(5);

 GameEntry p1("Rohan", 150);
 GameEntry p2("Satinder", 500);
 GameEntry p3("Yuvraj Singh", 200);

 leaderboard.add(p1);
 leaderboard.add(p2);
 leaderboard.add(p3);

 std::cout << "==== Player Added ====" << "\n";

 GameEntry removed = leaderboard.remove(0);
 std::cout << "Removed top player: " << removed.getName() << " with score: " << removed.getScore() << "\n";

  GameEntry nextTop = leaderboard.remove(0);
  std::cout << "New top player after shift: " << nextTop.getName() << " with score: " << nextTop.getScore() << "\n";

  char charArray[] = {'E', 'C', 'B', 'A', 'D'};
  int n = 5;

  std::cout << "\n--- Testing Insertion Sort ---" << "\n";
  std::cout << "Original Array: ";
  for(int i=0; i<n; i++) std::cout << charArray[i] << " ";
  std::cout << "\n";

  insertionSort(charArray, n);

  std::cout << "Sorted Array:   ";
  for(int i=0; i<n; i++) std::cout << charArray[i] << " ";
  std::cout << "\n";

  std::cout << "Hello!" << "\n";
  return 0;
}