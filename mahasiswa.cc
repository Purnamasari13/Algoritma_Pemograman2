#include <iostream>

using namespace std;

struct dataMahasiswa
{
    string nama,alamat,prodi;
    int nim,tanggal_lahir;
};

int main(){
    dataMahasiswa data;

    cout << "Nama            : ";
    cin >> data.nama;

    cout << "NIM             : ";
    cin >> data.nim;

    cout << "Tanggal lahir   : ";
    cin >> data.tanggal_lahir;

    cout << "Alamat          : ";
    cin >> data.alamat;

    cout << "Program studi   : ";
    cin >> data.prodi;

    cout << endl;

    cout << "Nama            : " << data.nama << endl;
    cout << "NIM             : " << data.nim << endl;;
    cout << "Tanggal lahir   : " << data.tanggal_lahir << endl;;
    cout << "Alamat          : " << data.alamat << endl;;
    cout << "Program studi   : " << data.prodi << endl;;

    return 0;
}