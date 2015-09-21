#ifndef SEKOLAH_H_INCLUDED
#define SEKOLAH_H_INCLUDED

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

#define nil NULL
#define info(p) (p)-> info
#define next(p) (p)-> next
#define first(l) ((l).first)

using namespace std;

typedef struct infotype{
    int no_induk;
    char nama[30];
    char kelas[10];
    int tahun_lahir;
    char alamat [30];
};

typedef struct elmlist *address;

typedef struct elmlist {
    infotype info;
    address next;
};

typedef struct list{
    address first;
};

void createnewlist(list *l);
void deallocate(address p);
address allocate(infotype x);
void insertfirst(list *l, address p);
void insertlast(list *l, address p);
void insertafter(list *l, address p, address prec);
void deletefirst(list *l, address p);
void deletelast(list *l, address p);
void deleteafter(list *l, address *p, address prec);
void data_pelajar(infotype *x);
void view (list *l);
address searchElement1(list *l, int a);

#endif // SEKOLAH_H_INCLUDED
