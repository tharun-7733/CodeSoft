#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int m;
    srand(time(0));
    int guess = rand() % 10 + 1;
    cout<<"Guess the number: "<<endl;

    while(cin >> m){
        if(m > guess){
            cout<<"You was way off!!\nCome on Enter again: ";
        }else if(m < guess){
            cout<<"Guessed too low\nCome on Enter again: ";
        }else{
            cout<<"Hurray got it right!!!";
            break;
        }
    }
}




