//M. Azhari Rahman (1301144116)
// Bagian : search, insertafter, deleteafter, menu
// Last edit : Insertafter dan Deleteafter

#include"sekolah.h"

void createnewlist(list *l){
    first(*l)=nil;
}

void deallocate(address p){
    free (p);
}

address allocate(infotype x){
    address p=(address)malloc(sizeof(elmlist));
    info(p)=x;
    next(p)=nil;
    return p;
}

void insertfirst(list *l, address p){
    infotype x;
    data_pelajar(&x);
    p=allocate(x);
    if (first(*l)==nil){
        first(*l)=p;
        next(first(*l))=nil;
    }
    else{
        next(p)=first(*l);
        first(*l)=p;
    }
}

void insertlast(list *l, address p){
    address q;
    infotype x;
    q=first(*l);
    data_pelajar(&x);
    p=allocate(x);
    if (first(*l)==nil){
        first(*l)=p;
        next(first(*l))=nil;
    }
    else{
        while(next(q)!=nil){
        q=next(q);
        }
        next(q)=p;
    }
}

void insertafter(list *l, address p, address prec){
    infotype x;
    int cari;
    prec=first(*l);
    if (first(*l)==nil){
        cout << "Data tidak ada \n";
        cout << "Kembali ke Menu Utama. . .\n";
    }
    else{
        cout << "Input setelah nomor induk : ";
        cin >> cari;
        while (next(prec) != nil){
            if (info(prec).no_induk == cari){
                break;
            }
            prec=next(prec);
        }
        if (next(prec) == nil){
            if (info(prec).no_induk == cari){
                data_pelajar(&x);
                p=allocate(x);
                next(p)=next(prec);
                next(prec)=p;
                cout << endl;
                cout << "Insert Data Sukses ! \n";
                cout << "Kembali ke Menu Utama. . .";
            }
            else{
            cout << endl;
            cout << "Nomor induk tidak ditemukan \n";
            cout << "Kembali ke menu utama. . . \n";
            }
        }
        else{
            data_pelajar(&x);
            p=allocate(x);
            next(p)=next(prec);
            next(prec)=p;
            cout << endl;
            cout << "Insert Data Sukses ! \n";
            cout << "Kembali ke Menu Utama. . .";
        }
    }
}

void deletefirst(list *l, address p){
    if (first(*l)==nil){
        cout << "Data tidak ada \n";
        cout << "Kembali ke Menu Utama. . .";
    }
    else if (next(first(*l))==nil){
        first(*l)=nil;
        deallocate(first(*l));
        cout << "Delete Data Sukses ! \n";
        cout << "Kembali ke Menu Utama. . .";
    }
    else{
        p=first(*l);
        first(*l)=next(p);
        next(p)=nil;
        deallocate(p);
        cout << "Delete Data Sukses ! \n";
        cout << "Kembali ke Menu Utama. . .";
    }
}

void deletelast(list *l, address p){
    address q;
    q=first(*l);
    if (first(*l)==nil){
        cout << "Data tidak ada";
    }
    else if(next(first(*l))==nil){
        first(*l)=nil;
        deallocate(first(*l));
        cout << "Delete Data Sukses ! \n";
        cout << "Kembali ke Menu Utama. . .";
    }
    else{
        while (next(next(q))!=nil){
            q=next(q);
        }
        p=next(q);
        next(q)=nil;
        deallocate(p);
        cout << "Delete Data Sukses ! \n";
        cout << "Kembali ke Menu Utama. . .";
    }
}

void deleteafter(list *l, address *p, address prec){
    int hps;
    char pil;
    if (first(*l)==nil){
        cout << "Data tidak ada";
    }
    else if(next(first(*l))==nil){
        cout << "Data yang ada hanya 1, apakah data ingin dihapus (Y/N) : ";
        cin >> pil;
        if (pil=='Y'){
            first(*l)=nil;
            deallocate(first(*l));
            cout << "Delete Data Sukses ! \n";
        }
        else{
            cout << "Kembali ke menu utama . . .";
        }
    }
    else{
        prec=first(*l);
        cout << "Hapus setelah data : ";
        cin >> hps;
        while (next(prec) != nil){
            if (info(prec).no_induk == hps){
                break;
            }
            prec=next(prec);
        }
        
        if (next(prec)==nil){
            cout << endl;
            cout << "Data yang Ingin Dihapus Tidak Ada \n";
            cout << "Kembali ke Menu Utama. . .";
        }
        else if (info(prec).no_induk != hps){
            cout << endl;
            cout << "Nomor induk tidak ditemukan \n";
            cout << "Kembali ke menu utama. . . \n";
        }
        else{
            *p=next(prec);
            next(prec)=next(*p);
            next(*p)=nil;
            deallocate(*p);
            cout << endl;
            cout << "Delete Data Sukses ! \n";
            cout << "Kembali ke Menu Utama. . .";
        }
    }
}

void data_pelajar(infotype *x){
    infotype a;
    cout << "Nomor induk : ";
    cin >> a.no_induk;
    cout << "Nama siswa  : ";
    cin >> a.nama;
    cout << "Kelas       : ";
    cin >> a.kelas;
    cout << "Tahun Lahir : ";
    cin >> a.tahun_lahir;
    cout << "Alamat      : ";
    cin >> a.alamat;
    cout << endl;
    *x=a;
}

void view (list *l){
    address p;
    if (first(*l)==nil){
        cout << "Data tidak ada";
    }
    else{
        p=first(*l);
        do{
            cout << "Nomor induk : " << info(p).no_induk << endl;
            cout << "Nama siswa  : " << info(p).nama << endl;
            cout << "Kelas       : " << info(p).kelas << endl;
            cout << "Tahun Lahir : " << info(p).tahun_lahir << endl;
            cout << "Alamat      : " << info(p).alamat << endl << endl;
            p=next(p);
        }while(p!=nil);
    }
}

address searchElement1(list *l, int a){
    address p;
    p=first(*l);
    while (p!=nil){
        if (info(p).no_induk==a){
            return p;
        }
        p=next(p);
    }
    return nil;
}

/*void searchElement2(list *l, int a){
    address p;
    bool ketemu;
    ketemu=true;
    p=first(*l);
    while (info(p).no_induk!=a){
        p=next(p);
        if (next(p)==nil){
            ketemu=false;
            break;
        }
    }
    if (ketemu==true){
        cout << "Nomor induk ditemukan " << endl;
        cout << "Nomor induk : " << info(p).no_induk << endl;
        cout << "Nama siswa  : " << info(p).nama << endl;
        cout << "Kelas       : " << info(p).kelas << endl;
        cout << "Tahun Lahir : " << info(p).tahun_lahir << endl;
        cout << "Alamat      : " << info(p).alamat << endl << endl;
    }
    else{
        cout << "Nomor induk tidak ditemukan " << endl;
    }
}*/



