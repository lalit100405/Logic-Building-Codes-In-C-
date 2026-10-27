#include<iostream>
using namespace std;
int display(int ivalue)
{
    int icnt = 0;
    for(icnt = 1;icnt<=ivalue;icnt++)
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