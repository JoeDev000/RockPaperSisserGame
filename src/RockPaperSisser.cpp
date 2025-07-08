#include <iostream>
#include <cstdlib>
using namespace std;

struct stStatues {
short rounds, wins, loses, draws, choice, oppenent;
};

int readNumberInRange(int from, int to) {
int num;
bool wrongInput = 0;
	do{
    if (wrongInput) 
      cout << "\nInvalid Input (from " << from << " to " << to << " only)\n";
		cout << "Choose a Number (" << from << " to " << to << ") : ";
		cin >> num;
    wrongInput = 1;
	} while (num < from || num > to);
return num;
}

short readChoice() {
short choice;
  cout << "\nChoose a Number: \n[1] Stone\n[2] Paper\n[3] Scissors\nYour Choice: ";
  choice = readNumberInRange(1, 3);
return choice;
}

int randomNumber(int from, int to) {
return rand() % (to - from + 1) + from;
}

short gameLogic(short choice, short oppenent) {
//[1]Stone     [2]Paper    [3]Scissors
  if ((choice == 1 && oppenent == 3) || (choice == 2 && oppenent == 1) || (choice == 3 && oppenent == 2))
    return 1;
  if ((choice == 3 && oppenent == 1) || (choice == 1 && oppenent == 2) || (choice == 2 && oppenent == 3))
    return 0;
  if ((choice == 1 && oppenent == 1) || (choice == 2 && oppenent == 2) || (choice == 3 && oppenent == 3))
    return -1;
  return 0;
}

void printRoundsStatues(stStatues &statues) {
short result;
string choices[3] {"Stone", "Paper", "Scissors"};
  statues.rounds = readNumberInRange(1, 10);

  for (int i = 0; i < statues.rounds; i++) {
    system("color 07");
    statues.choice = readChoice();
    statues.oppenent = randomNumber(1, 3);
    result = gameLogic(statues.choice, statues.oppenent);

    cout << "\n============ Round [" << i + 1 << "] ============\n";
    cout << "Player 1 choice: " << choices[statues.choice - 1] << endl;
    cout << "Computer choice: " << choices[statues.oppenent - 1] << endl;
    if (result == 1) {
      cout << "Round Winner: [Player1]" << endl;
      system("color 20");
      statues.wins ++;
    }
    else if (result == 0) {
      cout << "Round Winner: [Player2]" << endl;
      system("color 40");
      statues.loses ++;
    }
    else {
      cout << "Round Winner: [No Winenr, Tie]" << endl;
      system("color 60");
      statues.draws ++;
    }
    cout << "===================================\n";
    cout << "Press Any Key To Play The Nexr Round...";
    system("pause>0");
  }
}

void gemeResults(stStatues statues) {
  cout << "\n\t\t\t-----------------------------------\n";
  cout << "\t\t\t              Game Over             ";
  cout << "\n\t\t\t-----------------------------------\n";
  cout << "\t\t\tGame Rounds        : " << statues.rounds << endl;
  cout << "\t\t\tPlayer 1 Won Times : " << statues.wins << endl;
  cout << "\t\t\tComputer Won Times : " << statues.loses << endl;
  cout << "\t\t\tDraw times         : " << statues.draws << endl;
  if (statues.wins > statues.loses) {
    cout << "\t\t\tFinal Winner       : Player 1\n";
    system("color 20");
  }
  else if (statues.wins < statues.loses) {
    cout << "\t\t\tFinal Winner       : Computer\n";
    system("color 40");
  }
  else {
    cout << "\t\t\tFinal Winner       : No Winner";
    system("color 60");
  }
  cout << "\n\t\t\t-----------------------------------\n";
}

bool playAgain() {
bool playAgain;
  cout << "Play Again?\n[1] YES\n[0] NO" << endl;
  playAgain = readNumberInRange(0, 1);
  system("cls");
  system("color 07");
return playAgain;
}

int main() {
srand((unsigned)time(NULL));
stStatues statues;
  do{
    statues.wins = statues.loses = statues.draws = 0;
    printRoundsStatues(statues);
    gemeResults(statues);
  } while(playAgain());
return 0;
}