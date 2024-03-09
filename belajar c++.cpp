# include <iostream>
using namespace std;

// latian nge print(cout) 


// int main() {
//     cout << "hallo" << endl;
//     cout << "salam kenal,nama gua" << endl << endl << endl ;
//     cout << "munib gantenf sedunia";
//     return 0;
// }

// TIPE DATA 

// int main() {
//     int umur = 123;
//     double tinggi_badan = 1200.5;
//     cout <<"umur gua adalah " << umur << endl;
//     cout << "tinggi badan aku " << tinggi_badan;
//     return 0;
// }



// int main() {
//     const int umur = 19;
//     const double berat_badan = 79.2;
//     cout << "hi umur gua " << umur << endl;
//     cout << "namun berat badan gua " << berat_badan;
// }


// operasi aritmatika 

// int main() {
//     int x = 7;
//     int y = 6;
//     int z = x + y;

//     cout << "nilai penjumlahan " << x <<" di tambah dengan " << y << " adalah " << z;
// }


// int perkalian(int x, int y) {
//     return x * y;
    
// }

// void log(int result) {
//     cout << "hasil nya dalah " << result << endl;

// }

// int main() {
//     int kali1 = perkalian(6,7);
//     int kali2 = perkalian(4,7);
//     log(kali1);
//     log (kali2);
// }


// if,elif pararel 


// int main() {
//     int rapot = 91;

//     if(rapot < 59) {
//         cout << "anda kurang beruntung";
//     }else if (rapot < 60) {
//         cout << "anda perlu belajar lagi";
//     }else if (rapot > 90) {
//         cout << " anda anak einstein ";
//     }else {
//         cout << "mantap";
//     }
//     return 0;
// }


// #include <iostream> 
// using namespace std;

// void log(int result) {
//     cout << "tahun kelahiran anda adalah " << result << endl;
// }

// int main() {
//     int tahun_lahir {};
//     cout << "masukkan tahun kelahiran :  ";
//     cin >> tahun_lahir;
    
//     log(tahun_lahir);

//     return 0;
// }


// int main () {
//     cout << " aku akan menjadi lebih bersinar di semester ini" << endl;
//     cout << " dan juga aku akan mendapatkan keuntungan finansial" << endl;
//     cout << " kita bungkam mulut orang yang menvemoh kita" << endl;
//     cout << " oke gas! oke gas !";
//     return 0;

// }

// int main() 
// {

// int y;
// cout << "masukkan nominal y : ";
// cin >> y;
// int x;
// cout << "masukkan nominal x : ";
// cin >> x;


// int krypto(y * x);

//     cout << "hasil perkalian dari yang anda mau sebesar " << krypto << endl;
//     cout << "terimakasih sudah bercoding ";


//     return 0;
// }

// short, int , long ==> bilangan bulat 
// float, double ==> bilangan pecahan 
// char => karakter 
// bool => logika benar atau salah 
// string => untuk variabel tau kata-kata

/*
aku mau mandi tak tuntuang
*/





// int main() {
    
//     long listin = 23234;
//     short angka = 837;

//     double koma = 0.9887987;

//     cout << listin << endl;
//     cout << angka << endl;
//     cout << koma << endl;

//     return 0;

// }

#include <iostream>

using namespace std;

// Fungsi untuk menghitung luas persegi panjang
float hitung_luas_persegi_panjang(float panjang, float lebar) {
    float luas = panjang * lebar;
    return luas;
}

int main() {
    float panjang, lebar;

    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;

    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;

    float luas = hitung_luas_persegi_panjang(panjang, lebar);

    cout << "Luas persegi panjang adalah: " << luas << endl;

    return 0;
}



