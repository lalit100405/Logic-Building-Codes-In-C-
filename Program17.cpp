#include<iostream>
using namespace std;
void display(int ivalue)
{
    if(ivalue<0)
    {
        cout<<"Please Enter Positive (+) Number Kindly"<<endl;
        return;
    }
    int icnt = 0;
    for(icnt = 2;icnt<=ivalue;icnt = icnt+2)
    {
        cout<<icnt<<endl;
    }
}
int main()
{
    int ivalue = 0;
    cout<<"Enter Number Of Your Choice"<<endl;
    cin>>ivalue;

    display(ivalue);

    return 0;
}