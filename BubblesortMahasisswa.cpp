#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Alamat {
    string namaJalan;
    string noRumah;
    string RT;
    string RW;
    string Desa;

    Alamat(string namaJalan, string noRumah, string RT, string RW, string Desa) {
        this->namaJalan = namaJalan;
        this->noRumah = noRumah;
        this->RT = RT;
        this->RW = RW;
        this->Desa = Desa;
    }
};

class BubblesortMahasiswa {
public:
    string NIM;
    string Nama;
    Alamat alamat;
    string Prodi;

    BubblesortMahasiswa(string NIM, string Nama, Alamat alamat, string Prodi) : alamat(alamat) {
        this->NIM = NIM;
        this->Nama = Nama;
        this->Prodi = Prodi;
    }

    static void bubbleSort(vector<BubblesortMahasiswa>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < (n - i); j++) {
                if (arr[j - 1].NIM > arr[j].NIM) {
                    swap(arr[j - 1], arr[j]);
                }
            }
        }
    }
};

int main() {
    int jumlah;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah;
    cin.ignore();

    vector<BubblesortMahasiswa> mahasiswas;
    mahasiswas.reserve(jumlah);

    for (int i = 0; i < jumlah; i++) {
        cout << "\nMahasiswa ke-" << (i+1) << endl;

        string NIM, Nama, namaJalan, noRumah, RT, RW, Desa, Prodi;
        cout << "NIM            : "; getline(cin, NIM);
        cout << "Nama           : "; getline(cin, Nama);
        cout << "Alamat" << endl;
        cout << "  - Nama Jalan : "; getline(cin, namaJalan);
        cout << "  - No Rumah   : "; getline(cin, noRumah);
        cout << "  - RT         : "; getline(cin, RT);
        cout << "  - RW         : "; getline(cin, RW);
        cout << "  - Desa       : "; getline(cin, Desa);
        cout << "Prodi          : "; getline(cin, Prodi);

        Alamat alamat(namaJalan, noRumah, RT, RW, Desa);
        mahasiswas.emplace_back(NIM, Nama, alamat, Prodi);
    }

    cout << "\nSebelum Pengurutan:" << endl;
    for (const auto& m : mahasiswas) {
        cout << "NIM            : " << m.NIM << endl;
        cout << "Nama           : " << m.Nama << endl;
        cout << "Alamat         : Jalan " << m.alamat.namaJalan << " No." << m.alamat.noRumah << ", RT " << m.alamat.RT << " / RW " << m.alamat.RW << ", Desa " << m.alamat.Desa << endl;
        cout << "Prodi          : " << m.Prodi << endl;
        cout << "\n";
    }

    BubblesortMahasiswa::bubbleSort(mahasiswas);

    cout << "\nSetelah Pengurutan:" << endl;
    for (const auto& m : mahasiswas) {
        cout << "NIM            : " << m.NIM << endl;
        cout << "Nama           : " << m.Nama << endl;
        cout << "Alamat         : Jalan " << m.alamat.namaJalan << " No." << m.alamat.noRumah << ", RT " << m.alamat.RT << " / RW " << m.alamat.RW << ", Desa " << m.alamat.Desa << endl;
        cout << "Prodi          : " << m.Prodi << endl;
        cout << "\n";
    }

    return 0;
}
