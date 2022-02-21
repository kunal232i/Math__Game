#include<iostream>
#include <conio.h>
#include "includes/Add.h"
#include "includes/Sub.h"
#include "includes/Multi.h"
#include "includes/Div.h"
#include "includes/power.h"
#include "includes/ArmstrongNum.h"
#include "includes/FibonacciSeries.h"
#include "includes/Factorial.h"
using namespace std;

void math ();
void normal()
{
    p:
    system("cls");
    int choice;
    cout<<"\n===================== level 1 =====================";
    cout<<"\n 1. add";
    cout<<"\n 2. sub";
    cout<<"\n 3. multi";
    cout<<"\n 4. div";
    cout<<"\n 5. Power";
    cout<<endl<<" 6. go back";
    cout<<"\n\n Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        add(1);
        break;

        case 2:
        sub(1);
        break;

        case 3:
        multi(1);
        break;

        case 4:
        div(1);
        break;

        case 5:
        power(1);
        break;

        case 6:
        math();

        default:
        cout<<" invalid number please try again";

    }
    getch();
    goto p;
}

void medium()
{
    p:
    system("cls");
    int choice;
    cout<<"\n===================== level 2 =====================";
    cout<<"\n 1. add";
    cout<<"\n 2. sub";
    cout<<"\n 3. multi";
    cout<<"\n 4. div";
    cout<<"\n 5. Power";
    cout<<endl<<" 6. go back";
    cout<<"\n\n Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        add(2);
        break;
    
        case 2:
        sub(2);
        break;

        case 3:
        multi(2);
        break;

        case 4:
        div(2);
        break;

        case 5:
        power(2);
        break;

        case 6:
        math();

        default:
        cout<<" invalid number please try again";

    }
    getch();
    goto p;
}
void complex()
{
    p:
    system("cls");
    int choice;
    cout<<"\n===================== level 3 =====================";
    cout<<"\n 1. add";
    cout<<"\n 2. sub";
    cout<<"\n 3. multi";
    cout<<"\n 4. div";
    cout<<"\n 5. Power";
    cout<<endl<<" 6. go back";
    cout<<"\n\n Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        add(3);
        break;

        case 2:
        sub(3);
        break;

        case 3:
        multi(3);
        break;
        
        case 4:
        div(3);
        break;

        case 5:
        power(3);
        break;

        case 6:
        math();


        default:
        cout<<" invalid number please try again";
        
    }
    getch();
    goto p;
}

void Extra()
{
    p:
    system("cls");
    int choice;
    cout<<"\n===================== Explore Math =====================";
    cout<<"\n 1. Armstrong Number";
    cout<<"\n 2. Fibonaccie series";
    cout<<"\n 3. Factorial ";
    cout<<endl<<" 4. go back";
    cout<<"\n\n Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        AN();
        break;

        case 2:
        FS();
        break;
        
        case 3:
        Fact();
        break;

        case 4:
        math();


        default:
        cout<<" invalid number please try again";
        
    }
    getch();
    goto p;
}
void math()
{
    p:
    system("cls");
    int choice;
    cout<<"\n===================== Math Game =====================";
    cout<<"\n 1.level 1";
    cout<<"\n 2.level 2";
    cout<<"\n 3.level 3";
    cout<<"\n 4.Explore Math";
    cout<<"\n 5.exit";
    cout<<"\n\n Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        normal();
        break;

        case 2:
        medium();
        break;

        case 3:
        complex();
        break;

        case 4:
        Extra();
        break;

        case 5:
        cout<<"\n================ THANK YOU COME AGAIN ================"<<endl;
        exit(0);

        default:
        cout<<" invalid number please try again ";

    }
    getch();
    goto p;
}



int main()
{
    math();
}