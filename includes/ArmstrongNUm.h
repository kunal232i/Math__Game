#include<iostream>
#include<math.h>
using namespace std;

void AN()
{
    int n;
    cout<<"\n Eneter the Number to check: ";
    cin>>n;

    int sum=0;
    int Originaln=n;

    while(n>0)
    {
        int lasdigit=n%10;
        sum+=pow(lasdigit,3);
        n=n/10;
    }
    if(sum==Originaln)
    {
        cout<<" Armstrong number "<<endl;
    }
    else
    {
        cout<<" Not Armstrong number "<<endl;
    }
}

