
#include <iostream>
#include <new>
#include "mahasiswa.h"

using namespace std;

address alokasi(infotype M) {
    address p = new (nothrow) elmList;

    if (p != Nil) {
        p->info = M;
        p->next = Nil;
    }

    return p;
}

bool isEmpty(List L) {
    return L.first == Nil;
}

void createList(List &L) {
    L.first = Nil;
}

void dealokasi(address &p) {
    delete p;
    p = Nil;
}

void insertFirst(List &L, address p) {
    if (p == Nil) {
        return;
    }

    p->next = L.first;
    L.first = p;
}

void insertLast(List &L, address p) {
    if (p == Nil) {
        return;
    }

    p->next = Nil;

    if (isEmpty(L)) {
        L.first = p;
    } else {
        address q = L.first;

        while (q->next != Nil) {
            q = q->next;
        }

        q->next = p;
    }
}

void insertAfter(List &L, address prec, address p) {
    if (prec == Nil || p == Nil) {
        return;
    }

    p->next = prec->next;
    prec->next = p;
}

void printInfo(List L) {
    address p = L.first;

    while (p != Nil) {
        cout << "Nama: " << p->info.nama
             << ", NIM: " << p->info.nim << endl;

        p = p->next;
    }
}

int nbList(List L) {
    int count = 0;
    address p = L.first;

    while (p != Nil) {
        count++;
        p = p->next;
    }

    return count;
}
