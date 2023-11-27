//Program Evaluasi Nilai Score
#include <iostream>

using namespace std;

int main()
{
    int score;

    cout << "Tulis nilai kamu : ";
    cin >> score;

    if (score >=90) {
        cout << "Selamat! Anda mendapatkan nilai A." << endl; //Predikat untuk score 90 ke atas
    } else if (score >=80) {
        cout << "Anda mendapatkan nilai B." << endl; // Predikat untuk score 80 hingga 89
    } else if (score >=70) {
        cout << "Anda mendapatkan nilai C." << endl; // Predikat untuk score 70 hingga 79
    } else if (score >=60) {
        cout << "Anda mendapatkan nilai D." << endl; // Predikat untuk score 60 hingga 69
    } else if (score <60) {
        cout << "Anda mendapatkan nilai E." << endl; // predikat untuk score di bawah 60
    }
    return 0;
}
