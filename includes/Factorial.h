#include<iostream>
using namespace std;

void Fact()
{
    int n,ans=1;
    cout<<"\n Enter the number for factorial : ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        ans*=i;
    }
    cout<<endl;
    cout<<n<<"! = "<<ans<<endl;
}