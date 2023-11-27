#include <iostream>

using namespace std;


int main()
{
    int nilai;
    int nilaiTerbesar;
    int index;
    int jmlhArry;

    //input elemen array
    cout << "Tuliskan berapa elemen array yang anda inginkan : "; cin >> jmlhArry; cout << endl;

    //mengisi array dengan nilai
    int array[jmlhArry];
    for (int i = 0; i < jmlhArry; i++){
            cout << "Tuliskan nilai pada indeks ke "<< i << " : ";
            cin >> nilai;
            array[i] = nilai;
            cout << endl;
    }

    //mencari nilai tertinggi dan indeksnya
    for (int j = 0; j < jmlhArry; j++){
            if (nilaiTerbesar < array[j]){
                nilaiTerbesar = array[j];
                index = j;
            }
    }

    //output
    cout << "Nilai tertinggi terdapat pada : " << nilaiTerbesar << endl;
    cout << "Di indeks ke " << index;
    return 0;
}

