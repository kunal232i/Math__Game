#include<iostream>
using namespace std;

void FS()
{
    int n, a = 0, b = 1, c;
    cout<<"\n Enter the Number : ";
    cin>>n;

    cout<<"\n Fibonacci Series are "<<endl;
    cout<<a <<" " << b <<" ";

    for(int i=2; i<n; i++)
    {
        c = a + b;
        a = b;
        b = c;

        cout<<c<<" ";
    }
    cout << endl;
}

