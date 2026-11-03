#include<iostream>
#include<stdbool.h>
using namespace std;

bool checkEven(int Value1)
{
   if((Value1%9)==0)
   {
    return true;
   } 
   else
   {
    return false;
   }
}
int main()
{
    int iValue = 0;
    bool bResult = false;

    cout<<"Enter Number Of Your Choice"<<endl;
    cin>>iValue;

    bResult = checkEven(iValue);
    
    if(bResult == true)
    {
        cout<<"Your Number Is Divisible By 9"<<endl;
    }
    else
    {
        cout<<"Your Number Is Not Divisible By 9"<<endl;
    }

    return 0;
}