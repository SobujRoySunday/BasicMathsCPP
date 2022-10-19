#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number){
    for(int i = 2;i<number;i++){
        if(number%i == 0) return 0;
    }
    return 1;
}

int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    for(int i = a;i<b;i++){
        if(isPrime(i)) cout<<"\n"<<i;
    }
}
