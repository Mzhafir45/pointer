#include <iostream>
using namespace std;

int main() {
    int *ptr;
    int nilai = 94;

    ptr = &nilai;

    cout << "Nilai yang disimpan : " << *ptr << endl;
    cout << "Alamat : " << ptr << endl;

    return 0;
}

