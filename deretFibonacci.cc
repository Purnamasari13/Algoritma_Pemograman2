#include <iostream>

using namespace std;

int fibonacci(int number){
    if(number == 0 || number == 1){
        return 1;
    }else{
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}

int main(){
    int number;

    cout << "Masukkan suku yang ingin ditampilkan : ";
    cin >> number;

    for(int i = 0; i < number; ++number)
        cout << "Deret fibonacci suku ke-" << number << " adalah " << fibonacci(number);

     return 0;
}
