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

void createnewlist(list *l);
void insertfirst(list *l, address p);
void deletefirst(list *l, address p);

#endif // SEKOLAH_H_INCLUDED
