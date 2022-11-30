#include <bits/stdc++.h>
using namespace std;

int reverseNum(int originalNumber){
    int number=0;
    while(originalNumber > 0){
        int lastDigit = originalNumber%10;
        number = (number*10) + lastDigit;
        originalNumber /= 10;
    }
    return number;
}

int main(){
    int originalNumber;
    cout<<"Enter the number: ";
    cin>>originalNumber;
    if(originalNumber == reverseNum(originalNumber)) cout<<"It's a Palindrome";
    else cout<<"It's not a Palindrome";
    return 0;
}