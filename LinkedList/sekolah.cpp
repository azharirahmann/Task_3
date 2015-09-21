//M. Azhari Rahman (1301144116)
// Bagian : search, insertafter, deleteafter, menu

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

void insertafter(list *l, address p, address prec){
    address q;
    infotype x;
    int cari;
    q=first(*l);
    if (first(*l)==nil){
        cout << "Data tidak ada \n";
        cout << "Kembali ke Menu Utama. . .\n";
    }
    else{
        cout << "Input setelah data : ";
        cin >> cari;
        while (info(q).no_induk != cari){
            q=next(q);
        }
        if (info(q).no_induk == nil){
            cout << endl;
            cout << "Nomor induk tidak ditemukan \n";
            cout << "Kembali ke menu utama. . . \n";
        }
        else{
            data_pelajar(&x);
            p=allocate(x);
            next(p)=next(q);
            next(q)=p;
            cout << endl;
            cout << "Insert Data Sukses ! \n";
            cout << "Kembali ke Menu Utama. . .";
        }
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
        while (info(prec).no_induk != hps){
            prec=next(prec);
        }
        if (info(prec).no_induk == nil){
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
