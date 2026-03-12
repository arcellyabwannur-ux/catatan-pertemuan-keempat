#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 7; i++) // jumlah baris
    {
        for(int s = 1; s <= 7 - i; s++) // spasi
        {
            cout << " ";
        }

        for(int j = 1; j <= i; j++) // bintang
        {
            cout << "*";
        }

        cout << endl;
    }
}