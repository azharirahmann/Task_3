#include "sekolah.h"

int main(){
    list l;
    infotype x;
    address p,q;
    int pil,cari;
    string lagi;
    lagi="Y";
    createnewlist(&l);

    while (lagi=="Y"){
        system("cls");
        cout << "1. Insert first" << endl;
        cout << "2. Insert after" << endl;
        cout << "3. Insert last" << endl;
        cout << "4. Delete first" << endl;
        cout << "5. Delete after" << endl;
        cout << "6. Delete last" << endl;
        cout << "7. View data" << endl;
        cout << "8. Search data " << endl;
        cout << "9. Exit" << endl;
        cout << endl;
        cout << "Masukkan pilihan anda : ";
        cin >> pil;

        switch (pil){
        case 1: system("cls");
                cout << "INSERT FIRST \n \n";
                insertfirst(&l,p);
                cout << endl;
                cout << "Insert Data Sukses ! \n";
                cout << "Kembali Ke Menu Utama. . .";
                getch();
                break;

        case 2: system("cls");
                cout << "INSERT AFTER \n \n";
                insertafter(&l,p,q);
                cout << endl;
                getch();
                break;

        case 3: system("cls");
                cout << "INSERT LAST \n \n";
                insertlast(&l,p);
                cout << endl;
                cout << "Insert Data Sukses ! \n";
                cout << "Kembali ke Menu Utama. . .";
                getch();
                break;

        case 4: system("cls");
                cout << "DELETE FIRST \n \n";
                deletefirst(&l,p);
                cout << endl;
                getch();
                break;

        case 5: system("cls");
                cout << "DELETE AFTER \n \n";
                view(&l);
                deleteafter(&l,&p,q);
                cout << endl;
                getch();
                break;

        case 6: system("cls");
                cout << "DELETE LAST \n \n";
                deletelast(&l,p);
                cout << endl;
                getch();
                break;

        case 7: system("cls");
                cout << "VIEW DATA \n \n";
                view(&l);
                getch();
                break;

        case 8: system("cls");
                cout << "SEARCH DATA \n \n";
                cout << "Masukkan Nomor Induk yang Ingin Dicari : ";
                cin >> cari;
                if (searchElement1(&l,cari)==nil){
                    cout << endl;
                    cout << "Nomor Induk yang Dicari Tidak Ditemukan";
                    cout << endl;
                    cout << "Kembali ke Menu Utama. . . \n ";
                }
                else{
                    cout << "Nomor Induk yang Dicari Ditemukan \n \n";
                    cout << "Data Siswa yang Dicari : \n";
                    p=searchElement1(&l,cari);
                    cout << "Nomor induk : " << info(p).no_induk << endl;
                    cout << "Nama siswa  : " << info(p).nama << endl;
                    cout << "Kelas       : " << info(p).kelas << endl;
                    cout << "Tahun Lahir : " << info(p).tahun_lahir << endl;
                    cout << "Alamat      : " << info(p).alamat << endl << endl;
                    cout << "Kembali ke Menu Utama. . . \n ";
                }
                getch();
                break;

        case 9: lagi="N";
                break;

        default:lagi="Y";
                break;
        }

    }
    cout << "Terima Kasih ";
    getch();
    return 0;
}
