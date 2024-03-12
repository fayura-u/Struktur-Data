//array adalah sekumpulan data yang disimpan ber urutan, mrmpunyai ukuran saat deklarasi dan jumlah elemennya tidak dapat diubah
//map adalah sekumpulan data berupa pembagian dengan tipe yang berbeda dan jumlah elemennya dapat diubah.
#include <iostream>
#include <map>
using namespace std;

int main () {
    map<int,string> NIK;

    NIK[231112233]= "bawang merah";
    NIK[231112345]= "bawang putih";
    NIK[231234567]= "meriam bellina";

    cout << "Mahasiswa cumlaude tahun ajaran 2000: \n";
    cout << "1. "<<NIK[231112233]<< endl;
    cout << "2. "<<NIK[231112345]<< endl;
    cout << "3. "<<NIK[231234567]<< endl;

    return 0;
}
