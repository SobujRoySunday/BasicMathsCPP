#include <bits/stdc++.h>
using namespace std;

int main(){
    int orginialNum;
    cout<<"Enter your Number: ";
    cin>>orginialNum;
    cout<<endl;
    int number=0;
    while(orginialNum > 0){
        int lastDigit = orginialNum%10;
        number = (number*10) + lastDigit;
        orginialNum = orginialNum/10;
    }
    cout<<"Reversed Number is: "<<number;
}
