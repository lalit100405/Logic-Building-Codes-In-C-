#include<iostream>
using namespace std;
void addition(int iValue1,int iValue2)
{
    int iResult = 0;
    iResult = iValue1 + iValue2;
    cout<<iResult<<endl;

}
int main()
{
    int iFirstNumber = 0;
    int iSecNumber = 0;

    cout<<"Enter first number"<<endl;
    cin>>iFirstNumber;

    cout<<"Enter second number"<<endl;
    cin>>iSecNumber;

    addition(iFirstNumber,iSecNumber);

    return 0;


}