#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));


    int B1 = rand()% 54 + 1;
    int B2 = rand()% 54 + 1;
    while (B2==B1)
    {
        B2 = rand()% 54 +1;
    }

    int B3 = rand ()% 54 +1;
    while (B3 == B2 || B3 == B1)
    {
       B3 = rand()% 54 + 1;
    }

    int B4 = rand ()% 54 +1;
    while (B4== B3 || B4 == B2 || B4==B1)
    {
       B4 = rand()% 54 + 1;
    }

    int B5 = rand ()% 54 +1;
    while (B5 == B4 || B5== B3 || B5 == B2 || B5==B1 )
    {
       B5 = rand()% 54 + 1;
    }

    int B6 = rand ()% 54 +1;
    while (B6 == B5 || B6 == B4|| B6== B3 || B6 == B2 || B6==B1 )
    {
       B6 = rand()% 54 + 1;
    }

    cout <<"Here is your Texas Lotto quick pick: "<< endl;
    cout << B1 <<" "<< B2 <<" "<< B3 <<" "<< B4 <<" "<< B4 <<" "<< B5 <<" "<< B6 <<endl;

    int text= rand()% 6 +1;

        if (text ==1)
            cout<<"Good luck young buckaroo!"<< endl;
        if (text==2)
            cout<<"May the Texas Gods(Bar-B-Q) bless your favors!"<< endl;
        if (text==3)
            cout<<"Wish you the best!"<<endl;
        if (text==4)
            cout<<"GOOOOOOOooooood luck!"<< endl;
        if (text==5)
            cout<<"We wish y'all the best luck!"<< endl;
        if (text==6)
            cout<<"I'm rooting for you pal!"<< endl;


    /*int r = rand() % 3 + 1;

    if(r==1)
        cout << "You're great";
    if (r==2)
        cout << "You're amazing";
    if (r==3)
        cout << "You're beautiful";*/


}
