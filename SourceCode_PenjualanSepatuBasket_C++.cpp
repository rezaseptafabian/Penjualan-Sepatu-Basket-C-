#include<iostream>
#include <conio.h>

using namespace std;

int lagi, i;
int no,total=0,harga[30],diskon,beli, pilih[30], bayar;

void reza1()
{

	cout<<endl;
	cout<<"		|||| PROGRAM PENJUALAN SEPATU BASKET ZASTORE  ||||				"<<endl;
	cout<<"		   PROMO PEMBELIAN DIATAS 7 JT DAPAT DISKON 10%					"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"				MENU UTAMA				"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout<<"| NO | MERK	|	SEPATU			|	HARGA		|	UKURAN	|	" <<endl;	
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout<<"| 1 |NIKE	| 	AIR JORDAN CONCORD	|	RP.4.800.000	|	42	|"<<endl;
	cout<<"| 2 |ADIDAS	|	ADIDAS ROSE 5 RED	|	RP.1.500.000	|	45	|"<<endl;
	cout<<"| 3 |NIKE	|	LeBRON JAMES 12 Red	|	RP.8.150.000	|	44	|"<<endl;
	cout<<"| 4 |NIKE	|	KEVIN DURANT 5	    	|	RP.1.200.000	|	42	|"<<endl;
	cout<<"| 5 |UA		|	CURRY 5	            	|	RP.4.200.000	|	46	|"<<endl;
	cout<<"| 6 |JORDAN	|	AIR JORDAN 1 RETRO	|	RP.10.000.000	|	43	|"<<endl;

	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout<<"Masukkan Jumlah Item Yang Akan Dibeli = "; cin >> lagi;
	for( i=0; i<=lagi-1; i++)
	{
		cout << "Item ke-" << i+1 << endl;
		cout<<"Masukkan kode Sepatu Yang Di Inginkan =";cin>>pilih[i];
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	}
	cout<<endl;
	for(i=0; i<=lagi-1; i++)
	{
		switch(pilih[i])
		{
		case 1:
		cout<<"Sepatu Yang Dibeli adalah "<<endl;
		cout<<"NIKE AIR JORDAN CONCORD "<<endl;
		cout<<"Ukuran 42"<<endl;
		cout<<"Harga = RP. 4.800.000" <<endl;
		harga[i]=4800000;
		cout<<endl;
		break;
		
		case 2:
		cout<<"Sepatu Yang Dibeli adalah "<<endl;
		cout<<"ADIDAS ROSE 5 RED"<<endl;
		cout<<"Ukuran 45"<<endl;
		cout<<"Harga = RP. 1.500.000 "<<endl;
		harga[i]=1500000;
		cout<<endl;
		
		break;
		case 3:
		cout<<"Sepatu Yang Dibeli adalah "<<endl;
		cout<<"NIKE LEBRON JAMES 12 Red"<<endl;
		cout<<"Ukuran 44"<<endl;
		cout<<"Harga = RP. 8.150.000 "<<endl;
		harga[i]=8150000;
		cout<<endl;
		
		break;
		case 4:
		cout<<"Sepatu Yang Dibeli adalah "<<endl;
		cout<<"NIKE KEVIN DURANT 5"<<endl;
		cout<<"Ukuran 42"<<endl;
		cout<<"Harga = RP. 1.200.000 "<<endl;
		harga[i]=1200000;
		cout<<endl;
		
		break;
		case 5:
		cout<<"Sepatu Yang Dibeli adalah "<<endl;
		cout<<"UNDER ARMOUR CURRY 5"<<endl;
		cout<<"Ukuran 46"<<endl;
		cout<<"Harga = RP. 4.200.000 "<<endl;
		harga[i]=4200000;
		cout<<endl;
		
		break;
		case 6:
		cout<<"Sepatu Yang Dibeli adalah "<<endl;
		cout<<"AIR JORDAN 1 RETRO"<<endl;
		cout<<"Ukuran 43"<<endl;
		cout<<"Harga = RP. 10.000.000 "<<endl;
		harga[i]=10000000;
		cout<<endl;
		
		default:cout<<"	"<<endl;
		break;
		}
	}
	for(i=0; i<=lagi-1; i++)
	{	
		total = total + harga[i];
	}	
		cout<<"Total Belanja = Rp. " << total <<endl;
		cout<<endl;
}

void reza2()

{

		if(total>7000000)
	{
		diskon = total*0.1;
		bayar = total - diskon;
		cout<<endl;
		cout<<	"Selamat Anda Mendapatkan Diskon 10% " <<endl;
		cout<<endl;
		cout << "Jumlah Belanja Anda adalah Rp. " << bayar << endl;
		cout<<endl;
	}
	else
	{
		cout << "Anda Tidak Mendapatkan Diskon !!" << endl;
		cout<<endl;
	}
	
}

int main()
{
	reza1();
	reza2();
	cout<<endl;
	cout<<"Terimakasih Sudah Belanja Sepatu Di Toko Kami"<<endl;
	cout<<endl;
	cin.get();
	
}


