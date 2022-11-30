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
    int number;
    cout<<"Enter your Number: ";
    cin>>number;
    cout<<"Reversed Number is: "<<reverseNum(number);
    return 0;
}