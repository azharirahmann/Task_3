address allocate(infotype x){
    address p=(address)malloc(sizeof(elmlist));
    info(p)=x;
    next(p)=nil;
    return p;
}

void data_pelajar(infotype *x){
    infotype a;
    cout << "Nomor induk : ";
    cin >> a.no_induk;
    cout << "Nama siswa : ";
    cin >> a.nama;
    cout << "Kelas : ";
    cin >> a.kelas;
    cout << "Tahun Lahir : ";
    cin >> a.tahun_lahir;
    cout << "Alamat : ";
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
