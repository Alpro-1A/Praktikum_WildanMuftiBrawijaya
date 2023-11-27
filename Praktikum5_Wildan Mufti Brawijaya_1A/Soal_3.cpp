#include <iostream>

using namespace std;

    void fibonacci(int jmlh){
     int x = 0, y = 1, rumus;

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
    }

int main()
{
    int jmlh;

    cout << "Program Deret Fibonacci" << endl;

//Masukkan jumlah deret angka yang diinginkan
    cout << "Masukkan angka yang diinginkan : ";
    cin >> jmlh;
    cout << endl;

    //memanggil function
    fibonacci(jmlh);

    return 0;
}
