#include <iostream>

using namespace std;

//function Bilanan Ganjil dan jumlahnya
    void bilGanjil (int batas, int & jmlhGanjil){
        cout << "Bilangan Ganjil : ";
        for (int i = 0; i <= batas; i++){
                if (i % 2 != 0){
                        cout << i << " ";
                        jmlhGanjil += i;
                }
        }
        cout << endl;
    }

    //function Bilanan Genap dan jumlahnya
     void bilGenap (int batas, int & jmlhGenap){
        cout << "Bilangan Genap : ";
        for (int i = 0; i <= batas; i+= 2){
               cout << i << " ";
               jmlhGenap += i;
        }
        cout << endl;
    }

    //function Bilangan Prima dan jumlahnya
    void bilPrima (int batas, int & jmlhPrima){
        cout << "Bilagan Prima : ";
        for (int i = 2; i <= batas; i++){
                int j;
        for (j = 2; j * j <= i && i % j != 0; j++){
        }

        if (j * j > i){
            cout << i << " ";
            jmlhPrima += i;
        }
        }
        cout << endl;
    }

    // function faktor bilangan ganjil
    void fakGanjil(int jmlhGanjil){
        cout << "Faktor dari penjumlahan bilangan Ganjil : ";
        for (int i = 1; i <= jmlhGanjil; i++){
            if (jmlhGanjil % i == 0){
                cout << i << " ";
            }
        }
    cout << endl;
    }

     // function faktor bilangan genap
    void fakGenap(int jmlhGenap){
        cout << "Faktor dari penjumlahan bilangan Genap : ";
        for (int i = 1; i <= jmlhGenap; i++){
            if (jmlhGenap % i == 0){
                cout << i << " ";
            }
        }
    cout << endl;
    }

    //function faktor bilangan prima
    void fakPrima (int jmlhPrima){
        cout << "Faktor dari penjumlahan bilangan Prima : ";
        for (int i = 1; i <= jmlhPrima; i++){
            if (jmlhPrima % i == 0){
                cout << i << " ";
            }
        }
    cout << endl;
    }



int main()
{
    int batas;
    int jmlhGanjil = 0, jmlhGenap = 0, jmlhPrima = 0;

    cout << "Program Bilangan, Genap, dan Prima.";
    cout << "Tentukan batas akhir : ";
    cin >> batas;

    //memanggil function bilangan dan jumlahnya
    bilGanjil(batas, jmlhGanjil);
    bilGenap(batas, jmlhGenap);
    bilPrima(batas, jmlhPrima);

    cout << "Jumlah Bilangan Ganjil : " << jmlhGanjil << endl;
    cout << "Jumlah Bilangan Genap : " << jmlhGenap << endl;
    cout << "Jumlah Bilangan Prima : " << jmlhPrima << endl;

    //memanggil function faktor bilangan
    fakGanjil(jmlhGanjil);
    fakGenap(jmlhGenap);
    fakPrima(jmlhPrima);

    return 0;
}
