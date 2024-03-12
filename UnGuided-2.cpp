#include <iostream>
using namespace std;

struct mahastruct {
    string nama;
    int umur;
};

class mahaclass {
    private:
    string nama;
    int umur;

    public:
    mahaclass(string nm, int um) {
        nama = nm;
        umur = um;
    }
    void tampilkandata (){
        cout << "<<Opsi Class>>\n" << endl;
        cout << "Nama: " << nama << endl;
        cout << "umur: " << umur << endl;
    }
};

int main () {

    mahastruct mhstruct;
    mhstruct.nama = "2311102322 fadhel yussie ramadhan";
    mhstruct.umur = 18;
    cout << "<<Opsi Struct>>\n" << endl;
    cout << "nama: " << mhstruct.nama << endl;
    cout << "umur: " << mhstruct.umur <<"\n"<< endl;
    
    mahaclass mhclass("fadhel", 18);
    mhclass.tampilkandata();

    return 0;
}