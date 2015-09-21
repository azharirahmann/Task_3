void createnewlist(list *l){
    first(*l)=nil;
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
