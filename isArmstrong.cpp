#include <bits/stdc++.h>
using namespace std;

int main(){
    int originalNumber;
    cout<<"Enter your number: ";
    cin>>originalNumber;
    cout<<endl;
    int number=originalNumber;
    int compare = 0;
    while(number > 0){
        int lastDigit = number%10;
        compare = compare + lastDigit*lastDigit*lastDigit;
        number = number/10;
    }
    if(compare == originalNumber) cout<<"It's an Armstrong number";
    else cout<<"It's not an Armstrong number";
}