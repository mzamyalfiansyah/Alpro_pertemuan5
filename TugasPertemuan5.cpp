#include <iostream>
using namespace std;

double pokok(int jamKerja) {
    const double gajiPerJam = 7500;
    if (jamKerja <= 8) {
        return gajiPerJam * jamKerja;
    } else {
        return gajiPerJam * 8;
    }
}


double lembur(int jamKerja) {
    const double gajiLemburPerJam = 7500 * 1.5;
    if (jamKerja > 8) {
        return gajiLemburPerJam * (jamKerja - 8);
    }
    return 0;
}


double makan(int jamKerja) {
    if (jamKerja >= 9) {
        return 10000;
    }
    return 0;
}


double transport(int jamKerja) {
    if (jamKerja >= 10) {
        return 13000;
    }
    return 0;
}


void tampilkanUang(double jumlah) {
    cout << "Rp " << (int)jumlah << ".";
    int desimal = (jumlah - (int)jumlah) * 100;
    if (desimal < 10) {
        cout << "0";
    }
    cout << desimal << endl;
}

int main() {

    string nip, nama;
    int jamKerja;

    cout << "Masukkan NIP karyawan: ";
    cin >> nip;
    cout << "Masukkan nama karyawan: ";
    cin.ignore();
    getline(cin, nama);
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;

    double gajiPokok = pokok(jamKerja);
    double gajiLembur = lembur(jamKerja);
    double uangMakan = makan(jamKerja);
    double uangTransport = transport(jamKerja);


    cout << "\n--- Rincian Gaji Karyawan ---" << endl;
    cout << "NIP: " << nip << endl;
    cout << "Nama: " << nama << endl;
    cout << "Gaji Pokok: "; tampilkanUang(gajiPokok);
    cout << "Lembur: "; tampilkanUang(gajiLembur);
    cout << "Uang Makan: "; tampilkanUang(uangMakan);
    cout << "Transport: "; tampilkanUang(uangTransport);
    cout << "Total Gaji: "; tampilkanUang(gajiPokok + gajiLembur + uangMakan + uangTransport);

    return 0;
}
