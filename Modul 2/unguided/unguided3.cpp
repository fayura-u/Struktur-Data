#include <iostream>
using namespace std;

int min(int angka[], int ukuran) {
    int nilaimin = angka[0];

    for (int i = 1; i < ukuran; i++) {
        if (angka[i] < nilaimin) {
            nilaimin = angka[i];
        }
    }

    return nilaimin;
}

int maks(int angka[], int ukuran) {
    int nilaimaks = angka[0];

    for (int i = 1; i < ukuran; i++) {
        if (angka[i] > nilaimaks) {
            nilaimaks = angka[i];
        }
    }

    return nilaimaks;
}

int main() {
    int angka[10];
    int pilihan;

    cout << "Masukkan 10 angka: ";
    for (int i = 0; i < 10; i++) {
        cin >> angka[i];
    }

    cout << "\nMenu:" << endl;
    cout << "1. Cari Nilai Minimum" << endl;
    cout << "2. Cari Nilai Maksimum" << endl;
    cout << "3. Hitung Rata rata" << endl;
    cout << "Masukkan pilihan Anda: ";
    
    cin >> pilihan;

    switch (pilihan) {
        case 1: {
            int nilaiMin = min(angka, 10);
            cout << "Nilai Minimum: " << nilaiMin << endl;
            break;
        }
        case 2: {
            int nilaiMaks = maks(angka, 10);
            cout << "Nilai Maksimum: " << nilaiMaks << endl;
            break;
        }
case 3: {
            float jumlah = 0;
            for (int i = 0; i < 10; i++) {
                jumlah += angka[i];
            }
            float rerata = jumlah / 10;
            cout << "Rata-Rata: " << rerata << endl;
            break;
        }
        default:
            cout << "gagal!" << endl;
    }

    return 0;
}