
#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED

#define Nil nullptr

struct Mahasiswa {
    char nama[30];
    char nim[20];
};

typedef Mahasiswa infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
};

struct List {
    address first;
};

address alokasi(infotype M);
bool isEmpty(List L);
void createList(List &L);
void dealokasi(address &p);

void insertFirst(List &L, address p);
void insertLast(List &L, address p);
void insertAfter(List &L, address prec, address p);

void printInfo(List L);
int nbList(List L);

#endif
