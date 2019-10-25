#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int main ()
{
char lagi;
int nama;
int pilihan;
int jumlah;
int dibayar;
int harga;
int total;
int kode;
awal:
    system("cls");
    cout<<"====================================="<<endl;
    cout<<"+++++++   Keday kopi balog    +++++++"<<endl;
    cout<<"=====Menu==================Harga===="<<endl;
    cout<<"1. kopi hitam					Rp.8000"<<endl;
    cout<<"2. kopi moca					Rp.10000"<<endl;
    cout<<"3. kopi susu					Rp.8000"<<endl;
    cout<<"4. kopi vanila latte				Rp.10000"<<endl;
    cout<<"5. jus nanas					Rp.10000"<<endl;
    cout<<"6. jus alpokat					Rp.12000"<<endl;
    cout<<"7. jus jeruk					Rp.10000"<<endl;
    cout<<endl;



    cout<<"Masukkan Pilihan Anda(1-7) =";
    cin>>kode;

    switch(kode)
    {

    case 1 :
        cout<<"kpi hitam"<<endl;
        harga=8000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"Total harga yaitu ="<<total<<endl;
        cout<<"DIBAYAR =";
        cin>>dibayar;
        cout<<endl;
        cout<<"Kembalian ="<<dibayar-total<<endl;
        break;
    case 2 :
        cout<<"kopi moka"<<endl;
        harga=10000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"Total harga yaitu ="<<total<<endl;
        cout<<"DIBAYAR =";
        cin>>dibayar;
        cout<<endl;
        cout<<"Kembalian ="<<dibayar-total<<endl;
        break;
    case 3 :
        cout<<"kopi susu"<<endl;
        harga=8000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"Total harga yaitu ="<<total<<endl;
        cout<<"DIBAYAR =";
        cin>>dibayar;
        cout<<endl;
        cout<<"Kembalian ="<<dibayar-total<<endl;
        break;
    case 4 :
        cout<<"kopi vanila latte"<<endl;
        harga=10000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"Total harga yaitu ="<<total<<endl;
        cout<<"DIBAYAR =";
        cin>>dibayar;
        cout<<endl;
        cout<<"Kembalian ="<<dibayar-total<<endl;
        break;
    case 5 :
        cout<<"jus nanas"<<endl;
        harga=10000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"Total harga yaitu ="<<total<<endl;
        cout<<"DIBAYAR =";
        cin>>dibayar;
        cout<<endl;
        cout<<"Kembalian ="<<dibayar-total<<endl;
        break;
    case 6 :
        cout<<"jus apukat"<<endl;
        harga=12000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"Total harga yaitu ="<<total<<endl;
        cout<<"DIBAYAR =";
        cin>>dibayar;
        cout<<endl;
        cout<<"Kembalian ="<<dibayar-total<<endl;
        break;
    case 7 :
        cout<<"jus Jeruk"<<endl;
        harga=10000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"Total harga yaitu ="<<total<<endl;
        cout<<"DIBAYAR =";
        cin>>dibayar;
        cout<<endl;
        cout<<"Kembalian ="<<dibayar-total<<endl;
        break;
    default:
    cout<<"Kode tersebut tidak ada dalam menu"<<endl;
    }
    cout<<"Anda Ingin Mengulangi Lagi (Y?N)";
    cin>>lagi;
        if(lagi=='y' || lagi=='Y'){
            goto awal;
        }
        if (lagi=='N' || lagi=='n'){
            goto selesai;
        }
selesai:
    system("cls");
    cout<<"Terima Kasih Kunjungan Anda di Warung Pak Untung"<<endl;

return 0;
}
