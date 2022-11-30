#include <bits/stdc++.h>
using namespace std;

int main(){
    int number1, number2, answer;
    cout<<"Enter two numbers: ";
    cin>>number1>>number2;

    for(int i = 1;i <= min(number1, number2);i++){
        if(number1 % i == 0 && number2 % i == 0) answer=i;
    }
    cout<<"GCD of this two numbers is:"<<answer;
    return 0;
}