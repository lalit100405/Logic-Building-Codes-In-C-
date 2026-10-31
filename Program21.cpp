#include<iostream>
using namespace std;

int summation(int Value1)
{
    int sum = 0;
    int icnt = 0;
    for(icnt = 2;icnt<=Value1;icnt = icnt +2)
    {
        sum = sum+icnt;
        
    }
    return sum;
  
 
}
int main()
{
    int iValue = 0;
    int result = 0;
    cout<<"Enter Number Of Your Choice"<<endl;
    cin>>iValue;

  result = summation(iValue);
  cout<<result<<endl;

    return 0;
}
