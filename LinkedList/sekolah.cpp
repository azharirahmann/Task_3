void deallocate(address p){
    free (p);
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

