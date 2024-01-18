#ifndef GAME_H
#define GAME_H
using namespace std;


class game
{
public:
   game(int);
   ~game();
   void play();

private:
    int MaxNumber=0;
    int PlayerGuess=0;
    int numOfGuesses=0;
    int randomNumber=0;

    void printGameResult();
};

#endif // GAME_H
