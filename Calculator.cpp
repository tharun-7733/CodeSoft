#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> digit;
    string input;
    cout<<"Enter the numbers "<<endl;
    while(true){
        cin>>input;
        if(input == "stop") break;
        
        digit.push_back(stoi(input));
    }
    cout<<"Enter the Operator + - * /"<<endl;
    char symbol;
    cin>>symbol;
    
    switch(symbol){
        case '+':{
            int sum = 0;
            for(int i : digit){
                sum += i;
            }
            cout<<"The addition of numbers is -> "<<sum<<endl;
            break;
        }
        case '-':{
            int sub = digit[0];
            for(int i = 1;i < digit.size();i++){
                sub -= digit[i];
            }
            cout<<"The subtraction of numbers is -> "<<sub<<endl;
            break;
        }
        case '*':{
            int multiply = 1;
            // int temp = digit;
            bool zero = false;
            for(int i : digit){
                if(i != 0) 
                {
                    multiply *= i;
                    zero = true;
                }
            }
            if(!zero) multiply = 0;
            cout<<"The multiplication of numbers is -> "<<multiply<<endl;
            break;
        }
        case '/':{
            if(digit.size() < 2){
                cout<<"The number of values should be greater than 2"<<endl;
                return 0;
            } 
            cout<<"Enter the first number "<<endl;
            double result = digit[0];

            for(int i = 1;i < digit.size();i++){
                if(digit[i] == 0) {
                    cout<<"Zero division error"<<endl;
                    return 0;
                }
                result/=digit[i];
            }
            cout<<"Final calculation -> "<<result<<endl;
            break;
        }
        default:
        cout<<"Inavlid Operator"<<endl;
    }
    return 0;
}