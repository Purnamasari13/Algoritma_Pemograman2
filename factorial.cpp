#include <iostream>

using namespace std;

int faktorial(int n){
    if(n == 0){
        return 1;
    } else{
        return n * faktorial(n-1);
    }
}

int main(){
    int n;

    cout << "Masukkan angka : ";
    cin >> n;

    cout << "Faktorial dari " << n << " adalah " << faktorial(n);

    return 0;
}
