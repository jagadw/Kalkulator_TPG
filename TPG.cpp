#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main () {
    int tb_ayah;
    int tb_ibu;
    int tpg_laki_min;
    int tpg_laki_max;
    int tpg_perempuan_min;
    int tpg_perempuan_max;
    char ulang;

    do {
    cout << endl << "KALKULATOR TINGGI POTENSI GENETIK" <<endl;
    cout << "<===============================>" <<endl;
    cout << "Masukan tinggi ayah :";
    cin >> tb_ayah;
    cout << "Masukan tinggi ibu :";
    cin >> tb_ibu;
    cout << "<===============================>" <<endl;
    cout << endl << endl;

    tpg_laki_min = (tb_ayah + tb_ibu + 13) / 2 - 5;
    tpg_laki_max = (tb_ayah + tb_ibu + 13) / 2 + 5;
    tpg_perempuan_min = (tb_ayah + tb_ibu - 13) / 2 - 5;
    tpg_perempuan_max = (tb_ayah + tb_ibu - 13) / 2 + 5;

    cout << "<===============================>" <<endl;
    cout << "Potensi tinggi anak laki-laki :"<<tpg_laki_min<<" - "<<tpg_laki_max<<" cm"<<endl;
    cout << "Potensi tinggi anak perempuan :"<<tpg_perempuan_min<<" - "<<tpg_perempuan_max<<" cm"<<endl;
    cout << "<===============================>" <<endl<<endl;
    cout << "Hitung lagi? (Y/T): ";
    cin >> ulang;
    } while(ulang=='Y'||ulang=='y');
    cin.ignore();
    cout << "Tekan ENTER untuk KELUAR!" <<endl;

    getchar();
    return 0;
}