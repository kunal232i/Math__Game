
#include<iostream>
using namespace std;


void div(int n)
{
    int a,b,div=0, ans, c=0;
    system("cls");
    if(n == 1)
    {
        for(int i=1; i<=5; i++)
        {
        a=rand()%11;
        b=rand()%11;
        double answer;
        double r= a/b;
        cout << "What is " << a << " / " << b << "?" << endl;
        cout << "Answer: ";
        cin >> answer;

        if(answer == r)
        {
        cout << endl << "Correct!" << endl << endl;
        }
        else
        {
        cout << endl << "Wrong! The right answer was " << a / b<< endl << endl;
        }
        }
    }
        
    else if(n == 2)
    {
        for(int i=1; i<=5; i++)
        {
        a=rand()%16;
        b=rand()%16;
        double answer;
        double r = a/b;
        cout << "What is " << a << " / " << b << "?" << endl;
        cout << "Answer: ";
        cin >> answer;

        if(answer == r)
        {
        cout << endl << "Correct!" << endl << endl;
        }
        else
        {
        cout << endl << "Wrong! The right answer was " << a / b<< endl << endl;
        }
        }
    }
    else
    {
        for(int i=1; i<=5; i++)
        {
        a=rand()%21;
        b=rand()%21;
        double answer;
        double r = a / b;
        cout << "What is " << a << " / " << b << "?" << endl;
        cout << "Answer: ";
        cin >> answer;

        if( answer == r )
        {
        cout << endl << "Correct!" << endl << endl;
        }
        else
        {
        cout << endl << "Wrong! The right answer was " << a /  b<< endl << endl;
        }
        }
    }    
}