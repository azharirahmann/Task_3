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

void deallocate(address p);
void deletelast(list *l, address p);
void insertlast(list *l, address p);

#endif // SEKOLAH_H_INCLUDED
