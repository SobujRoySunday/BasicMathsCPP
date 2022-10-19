#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cout<<"Enter your number: ";
    cin>>number;
    cout<<endl;
    bool flag = 0;
    for(int i = 2;i<sqrt(number);i++){
        if(number%i == 0){
            cout<<"It's a non-prime number :(";
            flag = 1;
            break;
        }
    }
    if(flag == 0) cout<<"It's a Prime number :)";
}