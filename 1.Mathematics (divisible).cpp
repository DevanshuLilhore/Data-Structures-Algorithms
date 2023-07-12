#include <iostream>
using namespace std;
void CheakDivisible(int n1,int n2)
{
    cout<<endl<<n1<<" Divisible by "<<n2;
    if(n1%n2==0)
        cout<<" Yes";
    else
        cout<<" No";
}
int main()
{
    int n1,n2;
    cout<<"Enter a number : ";
    cin>>n1;
    cout<<"Enter number cheak divisible :";
    cin>>n2;
    CheakDivisible(n1,n2);
    return 0;
}
