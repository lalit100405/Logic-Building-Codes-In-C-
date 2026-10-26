#include<iostream>
using namespace std;
int addition(int iFirstNumber,int iSecNumber)
{
    return iFirstNumber+iSecNumber;
}
/**********************************************************
 * //Funciton Name : addition
 * //Description : It is used to perform addition of two numbers given by user
 * //Input : Integer,Integer
 * //Output : Integer
 * //26/10/2026
 * //Programer : Lalit Ramkrushna Bari
 * ********************************************************/
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