#include <iostream>

using namespace std;

int main()
{
    int x = 0, y = 1, jmlh, hasil, rumus;

    cout << "Program Deret Fibonacci" << endl;

    //Masukkan jumlah deret angka yang diinginkan
    cout << "Masukkan angka yang diinginkan : ";
    cin >> jmlh;
    cout << endl;

    //Tampilan akhir nantinya
    cout << "Berikut deret Fibonacci dari jumlah tersebut : ";

    //Proses pencarian deret Fibonacci
    for (int i = 1; i <= jmlh; ++i) {
    cout << x << " ";
    rumus = x + y;
    x = y;
    y = rumus;
    }
    cout << endl;

    return 0;
}
