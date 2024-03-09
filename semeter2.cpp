#include <iostream>
using namespace std;
// // main program 
// main()
// {
//     char op;
//     float num1, num2;
//     cin >> op;
//     cin >> num1 >> num2;
//     switch (op)
//     {
//     case '+':
//         cout << num1 + num2;
//         break;
//     case '-':
//         cout << num1 - num2;
//         break;
//     case '*':
//         cout << num1 * num2;
//         break;
//     case '/':
//         cout << num1 / num2;
//         break;
    
//     default:
//         cout << "errorrr operator salah ";
    
//     }
//     return 0;

// }


////// STRUK


// #include <stdio.h>

// // struct

// struct Mahasiswa {
//     const char * name;
//     const char * address;
//     int age;

// };

// int main(){
//     // menggunakan struk 
//     struct Mahasiswa mhs1, mhs2;
//     // mengisi struk 
//     mhs1.name = "Dian";
//     mhs1.address = "Mataram";
//     mhs1.age = 22;
//     mhs2.name = "bambang";
//     mhs2.address = "surabaya";
//     mhs2.age = 23;

//     // mencetak isi struct 

//     printf("## Mahasiswa 1 ## \n");
//     printf("Nama: %s\n", mhs1.name);
//     printf("Alamat : %s\n, mhs1.address");
//     printf("Umur : %d\n", mhs2.age);
//     printf("## MAhasiswa 2 ## \n");
//     printf("Nama: %s\n", mhs2.name);
//     printf("Alamat : %s\n, mhs2.address");
//     printf("Umur : %d\n", mhs2.age);
    
// }


// int main() {
//     int nilai[5];
//     nilai[0] = 23;
//     nilai[1] = 50;
//     nilai[2] = 34;
//     nilai[3] = 78;
//     nilai[4] = 90;

//     /// mencetak array 

//     cout << "isi array pertama :" << nilai[0] << endl;
//     cout << "isi array kedua :" << nilai[1] << endl;
//     cout << "isi array ketiga :" << nilai[2] << endl;
//     cout << "isi array keempat :" << nilai[3] << endl;
//     cout << "isi array kelima :" << nilai[4] << endl;
//     return 0;
    
    
    
// }


int main() {

double panjang;
cout << "masukkan nominal panjang : ";
cin >> panjang;
double lebar;
cout << "masukkan nominal lebar : ";
cin >> lebar;


double luas_persegi_panjang(panjang * lebar);

    cout << "luas persegi panjang adalah sebesar " << luas_persegi_panjang << "cm" << endl;
    cout << "terimakasih sudah bercoding ";


    return 0;
}