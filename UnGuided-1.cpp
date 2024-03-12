#include <iostream>
using namespace std;

float kelilingkaran (float jari){
    return 3.14*2*jari;
}
float luas_lingkaran (float jari) {
    return 3.14*jari*jari;
}

int main (){
    cout << "2311102322 Fadhel Yussie Ramadhan" << endl;
    float r;
    cout << "masukkan jari jari: ";
    cin >> r;
    cout << "keliling: " << kelilingkaran(r) << endl;
    cout << "luas: " << luas_lingkaran(r) << endl;

}