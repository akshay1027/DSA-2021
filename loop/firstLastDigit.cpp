#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, lastNumber, firstNumber, digitCount=0;
    cin>>num;

    lastNumber = num % 10;

    for(int i=num; num>0; i--)
    {
        firstNumber = num % 10;
        num = num / 10;
        digitCount++;
    }

    cout<<"First Digit = "<<firstNumber<<endl;
    cout<<"Last Digit = "<<lastNumber<<endl;
    cout<<"Digits Count = "<<digitCount<<endl;

    return 0;
}