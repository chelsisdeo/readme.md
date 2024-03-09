#include <iostream>
using namespace std;
// // Fungsi(1) untuk menghitung luas persegi panjang
// float luas_persegi_panjang(float panjang, float lebar) {
//     return panjang * lebar;
// }
// // Fungsi(2) untuk menghitung luas segitiga
// float luas_segitiga(float alas, float tinggi) {
//     return 0.5 * alas * tinggi;
// }
// int main() {
//     float panjang;
//     cout << "Masukkan nilai panjang: ";
//     cin >> panjang;
//     float lebar;
//     cout << "Masukkan nilai lebar: ";
//     cin >> lebar;

//     // Memanggil fungsi untuk menghitung luas persegi panjang
//     float luaspj = luas_persegi_panjang(panjang, lebar);

//     cout << "Luas persegi panjang adalah " << luaspj << endl;

//     float alas_segitiga;
//     cout << "Masukkan nilai alas segitiga: ";
//     cin >> alas_segitiga;

//     float tinggi_segitiga;
//     cout << "Masukkan nilai tinggi segitiga: ";
//     cin >> tinggi_segitiga;

//     // Memanggil fungsi untuk menghitung luas segitiga
//     float luassegitiga = luas_segitiga(alas_segitiga, tinggi_segitiga);

//     cout << "Luas segitiga adalah " << luassegitiga << endl;

//     cout << "Terimakasih sudah menggunakan program ini semoga harimu senin terus" << endl;

//     return 0;
// }



// #include <stdio.h>
// //Struct
// struct Mahasiswa
// {
// const char *name;
// const char *address;
// int age;
// };
// int main()
// {
// // menggunakan struct
// struct Mahasiswa mhs1, mhs2;
// // mengisi nilai ke struct
// mhs1.name = "Dian";
// mhs1.address = "Mataram";
// mhs1.age = 22;
// mhs2.name = "Bambang";
// mhs2.address = "Surabaya";
// mhs2.age = 23;
// // mencetak isi struct
// printf("## Mahasiswa 1 ##\n");
// printf("Nama: %s\n", mhs1.name);
// printf("Alamat: %s\n", mhs1.address);
// printf("Umur: %d\n", mhs1.age);
// printf("## Mahasiswa 2 ##\n");
// printf("Nama: %s\n", mhs2.name);
// printf("Alamat: %s\n", mhs2.address);
// printf("Umur: %d\n", mhs2.age);
// return 0;
// }


#include <map>

int main() {
    // Membuat map untuk menyimpan nilai mahasiswa
    map<string, int> nilai;

    // Menambahkan nilai mahasiswa ke dalam map
    nilai["rizky"] = 85;
    nilai["santoso"] = 70;
    nilai["shiba inu"] = 90;

    // untuk Menampilkan nilai mahasiswa
    cout << "Nilai Mahasiswa: " << endl;
    for (const auto& pair : nilai) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Menambahkan nilai mahasiswa lainnya
    nilai["bimbim"] = 95;
    nilai["mamang"] = 80;

    // untul Mengakses nilai mahasiswa
    string nama;
    cout << "\nMasukkan nama mahasiswa: ";
    cin >> nama;

    if (nilai.find(nama) != nilai.end()) {
        cout << "Nilai " << nama << ": " << nilai[nama] << endl;
    } else {
        cout << "Mahasiswa dengan nama " << nama << " tidak ditemukan." << endl;
    }

    return 0;
}


