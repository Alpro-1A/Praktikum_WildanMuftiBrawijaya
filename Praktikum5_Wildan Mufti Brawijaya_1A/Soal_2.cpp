#include <iostream>

using namespace std;

    void StarTriangle (int Tinggi){
    for (int i = 1; i <= Tinggi; i++) {

    //function membuat jarak pada sebelah kiri setiap baris
    for (int j = 1; j <= Tinggi - i; j++) {
            cout << " ";
        }
    //function membuat bintang pada baris yang telah berjarak
         for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
         }
    cout << endl;
    }
}

int main()
{
    int Tinggi;
   //Memasukkan tinggi segitiga
    cout << "Masukkan Tinggi Segitiga: ";
    cin >> Tinggi;

    //memanggil function
    StarTriangle(Tinggi);

    return 0;
}
