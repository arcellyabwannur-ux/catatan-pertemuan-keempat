#include <iostream>
using namespace std;

int main()
{
    // Perulangan untuk jumlah baris
    for(int i = 1; i <= 7; i++)
    {
        // Perulangan untuk mencetak bintang
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Pindah ke baris berikutnya
        cout << endl;
    }
}