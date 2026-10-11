
#include <iostream>
#include "mahasiswa.h"

using namespace std;

int main() {
    List L;
    Mahasiswa M;

    createList(L);

    cout << "Pembuatan List" << endl;
    cout << "Apakah list kosong? "
         << (isEmpty(L) ? "Ya" : "Tidak") << endl;

    // Elemen 1: insertFirst
    cout << "\nPembuatan elemen 1" << endl;
    cout << "Masukkan nama: ";
    cin.getline(M.nama, 30);
    cout << "Masukkan NIM: ";
    cin.getline(M.nim, 20);

    address p = alokasi(M);
    if (p != Nil) {
        insertFirst(L, p);
    }

    // Elemen 2: insertFirst
    cout << "\nElemen 2 - Insert First" << endl;
    cout << "Masukkan nama: ";
    cin.getline(M.nama, 30);
    cout << "Masukkan NIM: ";
    cin.getline(M.nim, 20);

    address q = alokasi(M);
    if (q != Nil) {
        insertFirst(L, q);
    }

    // Elemen 3: insertLast
    cout << "\nElemen 3 - Insert Last" << endl;
    cout << "Masukkan nama: ";
    cin.getline(M.nama, 30);
    cout << "Masukkan NIM: ";
    cin.getline(M.nim, 20);

    address z = alokasi(M);
    if (z != Nil) {
        insertLast(L, z);
    }

    // Elemen 4: insertAfter elemen pertama
    cout << "\nElemen 4 - Insert After" << endl;
    cout << "Masukkan nama: ";
    cin.getline(M.nama, 30);
    cout << "Masukkan NIM: ";
    cin.getline(M.nim, 20);

    address y = alokasi(M);
    if (y != Nil) {
        insertAfter(L, L.first, y);
    }

    // Menampilkan hasil
    cout << "\n--- Hasil List ---" << endl;
    printInfo(L);

    cout << "Jumlah mahasiswa: " << nbList(L) << endl;
    cout << "Apakah list kosong? "
         << (isEmpty(L) ? "Ya" : "Tidak") << endl;

    // Menghapus seluruh elemen dengan aman
    while (!isEmpty(L)) {
        address temp = L.first;
        L.first = L.first->next;
        dealokasi(temp);
    }

    return 0;
}
