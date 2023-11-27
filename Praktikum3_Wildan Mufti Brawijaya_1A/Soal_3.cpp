//Menghitung luas
#include <iostream>

using namespace std;

int main()
{
    int bentuk;
    float luas, panjang, lebar, tinggi, alas;

    cout << "Bentuk yang tersedia : " << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Tulis nomor dari bentuk yang mau kamu hitung luasnya : ";
    cin >> bentuk;

    //switch yang berisi rumus bentuk di atas
    switch (bentuk) {
        //persegi
    case 1:
        cout << "Tulis panjang sisinya : ";
        cin >> panjang;
        luas = panjang * panjang;
        cout << "Luas Perseginya adalah : "<< luas << endl;;
        break;
    case 2:
        cout << "Tulis panjangnya : ";
        cin >> panjang;
        cout << "Tulis lebarnya : ";
        cin >> lebar;
        luas = panjang * lebar;
        cout << "Luas Persegi panjangnya adalah : " << luas << endl;
        break;
    case 3:
        cout << "Tulis alasnya : ";
        cin >> alas;
        cout << "Tulis tingginya : ";
        cin >> tinggi;
        luas = 0.5 * alas * tinggi;
        cout << "Luas Segitiganya adalah : " << luas << endl;
        break;
    default:
        cout << "Nomor tidak valid" << endl;
    }

    return 0;
}
