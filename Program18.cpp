#include<iostream>
using namespace std;
void summation()
{
    int sum = 0;
    int icnt = 0;

    for(icnt = 1;icnt<=6;icnt = icnt++)
    {
        sum = sum + icnt;
    }
    cout<<sum<<endl;
}
int main()
{
    summation();
    return 0;
}