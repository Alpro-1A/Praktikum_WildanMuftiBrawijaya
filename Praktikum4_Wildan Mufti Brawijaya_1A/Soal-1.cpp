#include <iostream>

using namespace std;

int main()
{
    int batas;
    int jmlhGanjil = 0;
    int jmlhGenap = 0;
    int jmlhPrima = 0;
    int faktorGanjil = 0;
    int faktorGenap = 0;
    int faktorPrima = 0;

    cout << "Program Bilangan, Genap, dan Prima." << endl;

    //memasukkan batas yang diinginkan
    cout << "Tentukan batas akhir : ";
    cin >> batas;

    //proses mencari bilangan ganjil
    cout << "Bilangan Ganjil : ";
    for (int i = 0; i <= batas; i++)
    {
        if ( i % 2 != 0)
        {
            cout << i << " ";
            jmlhGanjil += i;;
        }
    }
    cout << endl;

    //Proses Mencari bilangan Genap
    cout << "Bilangan Genap : ";
    for (int i = 0; i <= batas; i += 2)
    {
        cout << i << " ";
        jmlhGenap += i;
    }
    cout << endl;

    //Proses Mencari Bilangan Prima
    cout << "Bilangan Prima : ";
    for (int i = 2; i <= batas; i++)
    {
        int j;
        for (j = 2; j * j <= i && i % j != 0; j++)
        {
        }
        if (j * j > i)
        {
            cout << i << " ";
            jmlhPrima += i;
        }
    }
    cout << endl;

    //Menampilkan jumlah dari masing-masing bilangan
    cout << "Jumlah bilangan Ganjil : " << jmlhGanjil << endl;
    cout << "Jumlah bilangan Genap : " << jmlhGenap << endl;
    cout << "Jumlah bilangan Prima : " << jmlhPrima << endl;

    //Menentukan faktor dari masing-masing bilangan
    //Bilangan Ganjil
    cout << "Faktor dari penjumlahan bilangan Ganjil : ";
    for (int i = 1; i <= jmlhGanjil; i++) {
    if (jmlhGanjil % i == 0){
        cout << i << " ";
        }
    }
    cout << endl;

    //Bilangan Genap
    cout << "Faktor dari penjumlahan bilangan Genap : ";
    for (int i = 1; i <= jmlhGenap; i++) {
    if (jmlhGenap % i == 0) {
        cout << i << " ";
    }
}
        cout << endl;

    //Bilangan Prima
     cout << "Faktor dari penjumlahan bilangan prima : ";
    for (int i = 1; i <= jmlhPrima; i++) {
    if (jmlhPrima % i == 0) {
        cout << i << " ";
    }
    }
   return 0;
}
