#include <iostream>
using namespace std;

string winrlose(char p1, char p2){
   if(p1 == p2) return "its a TIE";
   else if((p1 == 'R' && p2 == 'S') || (p1 == 'S' && p2 == 'P') || (p1 == 'P' && p2 == 'R')) return "PLAYER 1 WINS";
   else return "PLAYER 2 WINS";
}

string c_to_string(char moved){
    switch(moved){
        case 'R': return "Rock";
        case 'P': return "Paper";
        case 'S': return "Scissors";
    }
}
int main(){
    char p1, p2;;
    cout << "ROCK , PAPER , SCISSOR  GAME" << endl;
    cout << endl;
    cout << "Player 1, enter your move (R for Rock, P for Paper, S for Scissors):" << endl;
    cout << endl;
    cin >> p1;
    cout << "Player 2, enter your move (R for Rock, P for Paper, S for Scissors):" << endl;
    cout << endl;
    cin >> p2;
    p1=toupper(p1);
    p2=toupper(p2);
    if((p1!='R' && p1!='P' && p1!='S') || (p2!='R' && p2!='P' && p2!='S')){
        cout << "Invalid input. Please enter R for Rock, P for Paper, or S for Scissors." << endl;
        return 0;
    }
    cout << "player 1 : choosed  " << c_to_string(p1) << endl;
    cout << "player 2 : choosed  " << c_to_string(p2) << endl; 

    string result = winrlose(p1, p2);
    cout << result << endl;
    return 0;
}