#include <iostream>
using namespace std;

double tinggi;
double berat;
double bmi;

int main()
{
    cout << "Masukkan berat badan Anda (kg): ";
    cin >> berat;

    int tinggi_cm;
    cout << "Masukkan tinggi badan Anda (cm): ";
    cin >> tinggi_cm;

    tinggi = tinggi_cm / 100.0;

    bmi = berat / (tinggi * tinggi);


    int bmi_int = static_cast<int>(bmi);
    cout << endl << "BMI Anda adalah: " << bmi_int << " Kg" << endl;

    if (bmi < 18.4)
    {
        cout << "Anda berada dalam kriteria: (Berat Badan Kurang)." << endl;
    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        cout << "Anda berada dalam kriteria: (Berat Badan Ideal)." << endl;
    }
    else if (bmi >= 25 && bmi < 29.9)
    {
        cout << "Anda berada dalam kriteria: (Berat Badan Lebih)." << endl;
    }
    else if (bmi >= 30 && bmi < 39.9)
    {
        cout << "Anda berada dalam kriteria (Gemuk)." << endl;
    }
    else
    {
        cout << "Anda berada dalam Kriteria (Sangat Gemuk)." << endl;
    }

    return 0;
}

