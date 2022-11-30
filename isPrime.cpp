#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number){
    bool flag = 0;
    for(int i = 2;i <= sqrt(number);i++){
        if(number%i == 0) return false;
    }
    return true;
}

int main(){
    int number;
    cout<<"Enter your number: ";
    cin>>number;
    if(isPrime(number)) cout<<"It's a Prime Number";
    else cout<<"It's not a Prime Number";
    return 0;
}