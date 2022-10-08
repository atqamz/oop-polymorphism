/*
Anda ditugaskan menangani class untuk spawn objek Bunga. Anda diberikan constraint oleh programmer Gameplay bahwa class anda harus punya constructor tanpa parameter yang menghasilkan objek bunga berwarna kuning. Setelah itu, anda juga diminta untuk membuat constructor yang bisa menghasilkan bunga berwarna merah, biru, atau hijau sesuai dengan permintaan programmer dari Gameplay. Tulislah kode untuk file header yang akan anda buat.
 */

#include "Bunga.h"
#include <iostream>
#include <string>
using namespace std;

Bunga::Bunga()
{
    SetWarna("kuning");

    cout << "Bunga berwarna kuning telah dipetik." << endl;
}

Bunga::Bunga(string _warna)
{
    SetWarna(_warna);

    cout << "Bunga berwarna " << _warna << "telah dipetik." << endl;
}

string Bunga::GetWarna()
{
    return warna;
}

void Bunga::SetWarna(string _warna)
{
    warna = _warna;
}