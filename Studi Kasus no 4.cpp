#include <iostream>
using namespace std;

int main()
{
    int batas;
    int jumlahGanjil;
    int jumlahGenap;

    cout << "Bilangan Ganjil: ";
    cin >> batas;

    for(int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            }
    }
    cout << endl;
    cout << "Bilangan Genap: ";
    cin >> batas;

    for(int i = 1; i <= batas; i++) {
        if(i % 2 == 0) {
            cout << i << " ";
            }
    }
    cout<<endl;

    return 0;
}
