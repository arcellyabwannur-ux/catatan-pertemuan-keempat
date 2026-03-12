#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    system ("cls");
    // Laboratorium Ilmu komputer

    // goto a;
    // b :
    // cout << " Ilmu ";
    // goto c;

    // a :
    // cout << "Laboratorium";
    // goto b;

    // c :
    // cout << "Komputer";

    // //Label :
    // goto Label;

    int a = 1;

    x :
    cout << a << endl;
    a++; // 1 increment (+1) = 2

    if ( a <= 10 )
    {
        goto x;
    }
}