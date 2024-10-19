#include <iostream>
#include <map>
#include <string>
#include <ctime>
using namespace std;
int cpu_move;
void result(int player_move, int cpu_move, bool i) {
  if ((player_move > cpu_move) && player_move != 2 && cpu_move != 2) {
    cout << "you win " << endl;
  } else if ((cpu_move > player_move) && cpu_move != 2 && cpu_move != 2  ){
    cout << "you loss" << endl;

  } else if (player_move == 2 || cpu_move == 2) {
    
      if ((player_move == 1 && cpu_move == 2) || (player_move == 2&& cpu_move == 0)){
      cout << "you loss" << endl;
    }else if (player_move == cpu_move) {
    cout << "draw" << endl;
     i = 1;
    }else{
      cout << "you win" << endl;
    }

  }
  }

void cpu() {
  srand(time(0));
  cpu_move = rand() % 3;
}
int main() {
start:
  bool i = 0;
  map<string, int> play_moves;
  play_moves = {{"rock", 0}, {"paper", 1}, {"sicssors", 2}};
  cout << "\nchoose your move rock paper or sicssors:-\n ";
  string player_move;
  cin >> player_move;
  cpu();
  if (cpu_move == 0) {
    cout << "computer choose rock" << endl;

  } else if (cpu_move == 1) {
    cout << "computer choose paper" << endl;

  } else {
    cout << "computer choose sicssors" << endl;
  }
  result(play_moves[player_move], cpu_move, i);
  if (i ==0) 
  {
    
  }else if (i==1)
    {
        goto start;
     }
  return 0;
}