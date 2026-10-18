#include "Singlylist.h"

void createList(List &L) {
    First(L) = Nil;
}

address alokasi(infotype x) {
    address P = new ElmList;
    if (P != Nil) {
        info(P) = x;
        next(P) = Nil;
    }
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = Nil;
}

void printInfo(List L) {
    address P = First(L);
    while (P != Nil) {
        cout << info(P) << " ";
        P = next(P);
    }
    cout << endl;
}

void insertFirst(List &L, address P) {
    next(P) = First(L);
    First(L) = P;
}

address findElm(List L, infotype x) {
    address P = First(L);
    while (P != Nil) {
        if (info(P) == x) {
            return P; 
        }
        P = next(P);
    }
    return Nil; 
}

int sumInfo(List L) {
    int total = 0;
    address P = First(L);
    while (P != Nil) {
        total += info(P);
        P = next(P);
    }
    return total;
}