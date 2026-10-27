#include<iostream>
using namespace std;
void summation(int ivalue)
{
    int sum = 0;
    int icnt = 0;

    for(icnt = 1;icnt<=ivalue;icnt++)
    {
        sum = sum + icnt;
    }
    cout<<sum<<endl;
}
int main()
{
    int ivalue = 0;
    cout<<"Enter Ending Number Of Your Choice"<<endl;
    cin>>ivalue;

    summation(ivalue);
    return 0;
}