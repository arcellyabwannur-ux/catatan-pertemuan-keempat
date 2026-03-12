#include <iostream>
using namespace std;

int main()
{
    for(int i = 7; i >= 1; i--) // jumlah baris dari 7 ke 1
    {
        for(int j = 1; j <= i; j++) // jumlah bintang tiap baris
        {
            cout << "*";
        }
        cout << endl;
    }
}