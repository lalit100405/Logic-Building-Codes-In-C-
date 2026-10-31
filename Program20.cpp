#include<iostream>
using namespace std;

int summation(int Value1)
{
    int sum = 0;
    int icnt = 0;
    for(icnt = 1;icnt<=Value1;icnt++)
    {
        sum = sum+icnt;
    }
     return sum;
    
 
}
int main()
{
    int iValue = 0;
    int Result = 0;
    cout<<"Enter Number Of Your Choice"<<endl;
    cin>>iValue;

   Result = summation(iValue);
   cout<<Result;

    return 0;
}