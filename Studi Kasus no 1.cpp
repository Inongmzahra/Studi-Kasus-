#include <iostream>
using namespace std;

int main (){

    float absen, tugas, uts, uas, nilai_akhir;
    char nilai_huruf;
    string nama, npm;

    cout << "\n--Program Menghitung Nilai Akhir Mahasiswa--\n" << endl;
    cout << "Nama: ";
    cin >> nama;
    cout << "NPM: ";
    cin >> npm;
    cout << "Nilai Absen: ";
    cin >> absen;
    cout << "Nilai Tugas: ";
    cin >> tugas;
    cout << "Nilai UTS: ";
    cin >> uts;
    cout << "Nilai UAS: ";
    cin >> uas;
    cout << endl;

    nilai_akhir = ((absen*0.1)+(tugas*0.2)+(uts*0.3)+(uas*0.4));

    if (nilai_akhir >= 85 && nilai_akhir <= 100){
        nilai_huruf = 'A';
    } else if (nilai_akhir >= 80 && nilai_akhir <= 85){
        nilai_huruf = 'B';
    } else if (nilai_akhir >= 75 && nilai_akhir <= 80){
        nilai_huruf = 'C';
    } else if (nilai_akhir >= 70 && nilai_akhir <= 75){
        nilai_huruf = 'D';
    } else if (nilai_akhir <= 70){
        nilai_huruf = 'E';
    }

    cout << "Nama: " << nama << endl;
    cout << "NPM: " << npm << endl;
    cout << "Nilai Absen: " << absen << endl;
    cout << "Nilai Tugas: " << tugas << endl;
    cout << "Nilai UTS: " << uts << endl;
    cout << "Nilai UAS: " << uas << endl;
    cout << "Nilai_Akhir: " << nilai_akhir << endl;
    cout << "Nilai_Huruf: " << nilai_huruf << endl;

    return 0;

}
