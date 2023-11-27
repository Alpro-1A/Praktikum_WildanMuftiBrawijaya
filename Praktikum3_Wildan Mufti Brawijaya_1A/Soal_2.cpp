//Program menentukan angka terbesar
#include <iostream>

using namespace std;

int main()
{
    //input ketiga angka
    int Pertama,Kedua,Ketiga;
    cout << "Tuliskan angka pertama : ";
    cin >> Pertama;
    cout << "Tuliskan angka kedua : ";
    cin >> Kedua;
    cout << "Tuliskan angka ketiga : ";
    cin >> Ketiga;

    //Menentukan angka terbesar
    int Terbesar = Pertama;
    if (Kedua >Terbesar){
        Terbesar = Kedua;
    }
    if (Ketiga >Terbesar) {
        Terbesar = Ketiga;
    }
    cout << "Angka terbesar di antara " << Pertama << ", " << Kedua << ", dan " << Ketiga << " adalah angka " << Terbesar << "." << endl;
    return 0;
}
