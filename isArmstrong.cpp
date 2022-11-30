#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int originalNumber){
    int number=originalNumber;
    int compare = 0;
    while(number > 0){
        int lastDigit = number%10;
        compare = compare + lastDigit*lastDigit*lastDigit;
        number = number/10;
    }
    if(compare == originalNumber) return true;
    else return false;
}

int main(){
    int originalNumber;
    cout<<"Enter your number: ";
    cin>>originalNumber;
    if(isArmstrong(originalNumber)) cout<<"It's an Armstrong Number";
    else cout<<"It's not an Armstrong Number";
    return 0;
}