#include <iostream>
using namespace std;

int main (){

    int max = 10;
    int n[max];
    cout << "masukkan array\n";
    for (int i=0; i<max; i++){

        cout << "angka ke " << i+1 << ":";
        cin  >> n[i];
    }
    cout << "\ndata array: \n";
    for (int i=0; i<max; i++){
        cout << n[i] ;
    }
    cout << "\nnomor genap: \n";
    for (int i=0; i<max; i++){

        if (n[i] %2 == 0){
            cout << n[i] << ",";
        }
    }
    cout << "\nnomor ganjil: \n";
    for (int i=0; i<max; i++)
    {
        if (n[i]%2 == 1)
        {
            cout << n[i]<< ",";
        }
    }

}
