#include <iostream>

using namespace std;

int main()
{
    int firstValue = 10;
    int secondValue = 8;

    //Menukar nilai variabel dengan temp (variabel tambahan)

    int temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;

    //Output penukaran variabel dengan temp (variabel tambahan)

    cout << "First Value : " << firstValue << endl;
    cout << "Second Value : " << secondValue << endl;

    int nilaiPertama = 10;
    int nilaiKedua = 8;

    //Menukar nilai variabel tanpa temp (variabel tambahan)

    nilaiPertama = nilaiPertama + nilaiKedua;
    nilaiKedua = nilaiPertama - nilaiKedua;
    nilaiPertama = nilaiPertama - nilaiKedua;

    //Output penukaran variabel tanpa temp (variabel tambahan)

    cout << "Nilai Pertama : " << nilaiPertama << endl;
    cout << "Nilai Kedua : " << nilaiKedua << endl;

    int N, M;

    cout << "bebek punya Pak Tatang : ";
    cin >> N;

    cout << "diberi kepada temannya : ";
    cin  >> M;

    int jumlah_ekor_bebek_yang_diberikan = N / M;
    int sisa_bebek = N % M;

    cout << "jumlah bebek yang harus diberikan kepada masing-masing temannya : " << jumlah_ekor_bebek_yang_diberikan << endl;
    cout << "jumlah sisanya : " << sisa_bebek <<  endl;


    return 0;
}
