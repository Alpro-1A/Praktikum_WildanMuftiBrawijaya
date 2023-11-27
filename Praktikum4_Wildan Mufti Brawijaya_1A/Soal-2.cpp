#include <iostream>

using namespace std;

int main()
{
    int Tinggi;

    //Memasukkan tinggi segitiga
    cout << "Masukkan Tinggi Segitiga: ";
    cin >> Tinggi;
    for (int i = 1; i <= Tinggi; i++) {

        //Proses membuat jarak pada sebelah kiri setiap baris
   for (int j = 1; j <= Tinggi - i; j++) {
            cout << " ";
        }

        //Proses membuat bintang pada baris yang telah berjarak
         for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
         }
    cout << endl;
    }
    return 0;
}
