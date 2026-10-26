#include<iostream>
using namespace std;
int addition(int iFirstNumber,int iSecNumber)
{
    return iFirstNumber+iSecNumber;
}
int main()
{
    int iFirstNumber = 0;
    int iSecNumber = 0;
    int iResult = 0;

    cout<<"Enter first number"<<endl;
    cin>>iFirstNumber;

    cout<<"Enter second number"<<endl;
    cin>>iSecNumber;

    iResult = addition(iFirstNumber,iSecNumber);
    cout<<iResult<<endl;
    
    return 0;
}