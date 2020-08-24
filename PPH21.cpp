#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <ctime>
using namespace std;
												  //========================================================//
												  // PENDEKLARASIAN DARI FUNGSI - FUNGSI UNTUK SISTEM LOGIN //
												  //========================================================//
class databaseID
{
	protected:
	int ID[100];
	int Passlogin;
	int Pass[100],Pass2[100],i;
	string Name[100];
	int IDadmin;
	char Pass_admin;
};
											//===================================================================//
											// PENDEKLARASIAN DARI FUNGSI - FUNGSI UNTUK SISTEM PAJAK PENGHASILAN//
											//===================================================================//
class PajakPenghasilan21
{
	protected:
	int PB, PKN, gaji_tahun, jkk, jk, biaya_jabatan,tj,tahun;
	float pajak;
	double thrr,thr1;
	int tehr;
	double gajitahun;
	string nama; 
	string  tgl;
	char NPWP;
	int idEmployee;
	string status;
	long int gajibulan,Bruto, tunjangan, hari_tua, pensiun, Netto,kerja,st;
	long int tk0[100],k[100],tk,k0,status_naik, pph, pkps, pph_bulan,tg,selisih;
	char pause;
	int wadah, wadah1,wadah2,wadah3, perbulan,st1,st2,st3,st4,nol=0 ,total_1,total_2,total_3,total_4;
	int i=1;
};

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

											//========================================================================||
											//					LOGIN PROGRAM dalam Class Login_register			  ||
											//========================================================================||
class Login_register : public databaseID
{
	public:
	int IDlogin;
	//LOGIN IDPass
	void Display_Login()
	{
		system("CLS");
		cout<<"|========================================================|"<<endl;
		cout<<"|                   HALAMAN AWAL LOGIN                   |"<<endl;
		cout<<"|========================================================|"<<endl;
		cout<<"| ID        : ";
		cin>>IDlogin;
		cout<<"| Password  : ";
		cin>>Passlogin;
		cout<<endl;
		for(int i=0;i<100;i++)
		{
			if(ID[i]==IDlogin&&Pass[i]==Passlogin)
			{
				cout<<" Login Berhasil! \n";
				cout<<" ID   : "<<ID[i]<<endl;
				cout<<" Nama : "<<Name[i]<<endl;
				break;
			}
			if(ID[i]!=IDlogin||Pass[i]!=Passlogin)
			{
				cout<<" ID Tidak DItemukan\n";
				exit(0);
				break;
			}
			
		}
		
	}
	void Login_admin()
	{
		cout<<"|========================================================|"<<endl;
		cout<<"|             SYSTEM ADMIN PERHITUNGAN PAJAK             |"<<endl;
		cout<<"|========================================================|"<<endl;
		cout<<" ID Admin : ";
		cin>>IDadmin;
		//cout<<" Password : ";
		//cin>>Pass_admin;
		
		if(IDadmin = 199910)
		{	
				cout<<" Login Admin Berhasil \n";		
			
		}
		if(IDadmin!= 199910)
		{
			cout<<" Tidak Bisa Ditemukan ";
			exit(0);
		}
	}
	//TAMPILAN BAWAH
	void End_Display()
	{
		cout<<"|=========================================|\n";
		cout<<"|=========================================|\n";
		cout<<"|=========================================|\n";	
	}
	

	//REGISTRASI USER
	void  Display_Register()
	{		 	
		system("CLS");
		
		cout<<"|========================================================|"<<endl;
		cout<<"|           SYSTEM REGISTER PERHITUNGAN PAJAK            |"<<endl;
		cout<<"|========================================================|"<<endl;
		
		for(int i=0;i<100;i++)
		{
			
			cout<<"| Buat ID (nomor)     : ";
			cin>>ID[i];
			cout<<"| buat Password       : ";
			cin>>Pass[i];
			cout<<"| Nama                : ";
			cin>>Name[i];
			break;
		}
		
		
	}
	//TAMPILKAN HEADER NAMA DAN ID USER
	void Display_Header()
	{
		cout<<"|========================================================|"<<endl;
		for(int i=1; i<=1;i++)
		{
			cout<<"|  "<<Name[i];
			cout<<"|  "<<ID[i];
		}
		cout<<"|========================================================|"<<endl;
	}

};

										//========================================================================||
										//			PROGRAM Hitung PPH dalam Class PajakPenghasilan21		      ||
										//========================================================================||

class Hitung_pph : public PajakPenghasilan21
{
	public:
	void judul()
	{
		gotoxy(32,1);
		cout<<"|========================================================|"<<endl;
		gotoxy(32,2);
		cout<<"|                SYSTEM PERHITUNGAN PAJAK                |"<<endl;
		gotoxy(32,3);
		cout<<"|========================================================|"<<endl;	
	}
	
	void menuCRUD(){
		system("CLS");
		cout<<"|================(MENU PAJAK PENGHASILAN.21)=============|"<<endl;
		cout<<"|     [1]. MASUKKAN DATA PAJAK :                         |\n";
		cout<<"|     [2]. HASIL(OUTPUT)       :                         |\n";
		cout<<"|     [3]. EDIT DATA           :                         |\n";
		cout<<"|     [4]. KELUAR/EXIT         :                         |\n";
		cout<<"|========================================================|\n"<<endl;
		cout<<"                      MASUKKAN PILIHAN :                  \n";
	}
	


	void updateData(){
		system("CLS");
		cout<<"|==================[EDIT DATA KARYAWAN]===============|"<<endl;
		cout<<"|              [ID] : NASUKKAN ID KARYAWAN            |"<<endl;
		cin>>idEmployee;
		updateDataWithID(idEmployee);
 	}
 	
 	void updateDataWithID(int id){
 		cout<<"|  NAMA                    :                               \n";
		cin>>nama;
 		cout<<"|  LAMA BEKERJA(BULAN)     :                               \n";
 		cin>>kerja;
 		cout<<"|  PENGHASILAN PERBULAN    :                               \n";
 		cin>>gajibulan;
 		cout<<"|  TUNJANGAN               :                               \n";
 		cin>>tunjangan;
 		cout<<"|  MEMPUNYAI NPWP? [Y]/[N] :                               \n";
 		cin>>NPWP;
 		cout<<"|  TANGGUNGAN              :                               \n";
 		cin>>tg;
 		cout<<"|  STASTUS PERKAWINAN [SUDAH MENIKAH(Y)/BELUM MENIKAH(N)] :\n";
 		cin>>status;
	 }
	
	void penutup()
	{
		cout<<"|================================================|"<<endl;
		cout<<"|================================================|"<<endl;
		cout<<"|================================================|"<<endl;
	
	}

	void lanjut()
	{
		cout<<"\n\n";
		cout<<"Ingin Melanjutkan Program Ini (Y/N) ?";
		cin>>pause;	
	}
	
	void admin_PPH()     
	{
		cout<<" Perubahan biaya TK/0 pada tahun : ";
		cin>>tahun;
		int x=0;
		int past=2016+x;
		
		selisih = tahun-past;
		for(int i=0; i<selisih;i++)
		{
			cout<<" Masukan Perubahan Biaya Status TK"<<"/"<<i<<": ";
			cin>>tk;
			for(int i=0;i<4;i++)
			{
				
				tk0[i]=tk+(4500000*i);
			//	cout<<" Masukan Perubahan Biaya Status K"<<"/"<<i<<": ";
			//	cin>>k[i];
				k[i]=tk+(4500000*(i+1));
			}
		}
		
		x=past+selisih;
	}
	
	void input()
	{
		cout<<"| Nama				        : ";
		cin>>nama;
		cout<<"| ID Karyawan		        : ";
		cin>>idEmployee;
		cout<<"| Lama bekerja (Bulan)       : ";
		cin>>kerja;
		cout<<"| Penghasilan Perbulan		: ";
		cin>>gajibulan;	
		cout<<"| Status	Kawin (K) / Lajang (L) )	: ";
		cin>>status;
		cout<<"| Tunjangan			        : ";
		cin>>tunjangan;
		cout<<"| NPWP (Y) / NON NPWP (N)    : ";
		cin>>NPWP;
		cout<<"| Tanggungan                 : ";
		cin>>tg;



		
		
	//======================================|
	//             RUMUS BRUTO              |
	//======================================|
	jkk = gajibulan*0.24/100;
	jk = gajibulan*0.3/100;
	Bruto = gajibulan + jkk + jk + tunjangan;
	
	
	//======================================|
	//             RUMUS THR                |
	//======================================|	
	if(kerja>0 && kerja<12)
	{
	    thr1 = gajibulan + tunjangan;
		thrr = kerja/1.2;
		tehr = (thrr * thr1)*0.1;
	}
	else if(kerja>=12){
		thr1 = gajibulan + tunjangan;
		tehr = 1 * thr1;
	}

	//======================================|
	//             RUMUS NETTO              |
	//======================================|
	
	biaya_jabatan = Bruto*5/100;
	hari_tua = gajibulan*2/100;
	pensiun = gajibulan*1/100;
	Netto = biaya_jabatan + hari_tua + pensiun;
	
	
	
	
	//======================================|
	//         PENDAPATAN PERTAHUN          |
	//======================================|
	
	gajitahun = Bruto - Netto;
	gajitahun = gajitahun*12;
	if(status=="L")
	{
		gajitahun=gajitahun-tk-(4500000*tg);
	}
	if(status=="K")
	{
		gajitahun=gajitahun-k[0]-(4500000*tg);
	}
	

	
	//======================================|
	//      PENGHASILAN KENA PAJAK          |
	//======================================|
	
	if(gajitahun>0 &&gajitahun < 50000000)
	{
		wadah = 50000000-gajitahun;
			
			st1 = gajitahun*5/100;
			total_1=st1;
		st2=0;
		st3=0;
		st4=0;
		
	}
	
	else if(gajitahun > 50000001 && gajitahun<250000000)
	{
		wadah = gajitahun-50000000;
		st1 = 50000000*5/100;
		total_1=st1;
		
	
		st2 = wadah*(15/100);
		total_2=st2;
		
		st3=0;
		st4=0;
	}
	else if(gajitahun > 250000000 && gajitahun <500000000)
	{
		wadah = gajitahun-50000000;
		st1 = 50000000*5/100;
		total_1=st1;
		
		st2 = 200000000*15/100;
		total_2=st2;
		wadah1 = 200000000-wadah;
		
	
		st3 = wadah1*25/100;
		total_3=st3;
		st4=0;
	}
	else if(gajitahun > 500000000)
	{
		wadah = gajitahun-50000000;
		st1 = 50000000*5/100;
		total_1=st1;
		
		
		st2 = 200000000*15/100;
		total_1=st1;
		wadah1 = 200000000-wadah;
		
		
		st3 = 250000000*15/100;
		total_3=st3;
		wadah2 = 250000000-wadah1;
	
		
		st4 = wadah2*30/100;
		total_4=st4;
	}
	
	pph=st1+st2+st3+st4;
	
	if(NPWP='Y')
	{
		
   		pph_bulan=pph/12;
	}
	
	if(NPWP='N')
	{
		pph_bulan=pph/12;
		pph_bulan=pph_bulan*1.2;
	}
}
void output()
	{
		system("CLS");
		time_t now=time(0);
		char* dt=ctime(&now);
		
		cout<<"								Tanggal :"<<dt<<" "<<endl;
		cout<<"|          DATA PPH 21                        |";
		cout<<"| Nama                      :"<<nama<<" "<<endl;
		cout<<"| Gaji                      :"<<gajibulan<<" "<<endl;
		cout<<"| Status                    :"<<status<<" "<<endl;
		cout<<"| Jaminan Keselamatan Kerja :"<<jkk<<endl;
		cout<<"| Jaminan Kematian          :"<<jk<<endl;
		cout<<"| Bruto                     :"<<Bruto<<endl;
		cout<<endl;
		cout<<"| Biaya Jabatan             : "<<biaya_jabatan<<endl;
		cout<<"| Iuran Jaminan Hari Tua    : "<<hari_tua<<endl;
		cout<<"| Jaminan Pensiun           : "<<pensiun<<endl;
		cout<<"| Netto                     : "<<Netto<<endl;
		cout<<"| THR                       : "<<tehr<<endl;
		cout<<"| PPH (Setahun): "<<pph<<endl;
		cout<<"| PPH (Sebulan): "<<pph_bulan<<endl;
		cout<<"\n\n";	
		cout<<"\n";
	
	}
	void exceldatauser(){
			ofstream datauser;
			datauser.open("hasil.csv",ios_base::app);
		time_t now=time(0);
		char* dt=ctime(&now);
		datauser<<"								Tanggal : , "<<dt<<" "<<endl;
		datauser<<"|          DATA PAJAK PENGHASILAN      |"<<endl;
		datauser<<"| Nama                      :"<<nama<<" "<<endl;
		datauser<<"| Gaji                      :"<<gajibulan<<" "<<endl;
		datauser<<"| Status                    :"<<status<<" "<<endl;
		datauser<<"| Jaminan Keselamatan Kerja :"<<jkk<<endl;
		datauser<<"| Jaminan Kematian          :"<<jk<<endl;
		datauser<<"| Bruto                     :"<<Bruto<<endl;
		datauser<<endl;
		datauser<<"| Biaya Jabatan             : "<<biaya_jabatan<<endl;
		datauser<<"| Iuran Jaminan Hari Tua    : "<<hari_tua<<endl;
		datauser<<"| Jaminan Pensiun           : "<<pensiun<<endl;
		datauser<<"| Netto                     : "<<Netto<<endl;
		datauser<<"| THR                       : "<<tehr<<endl;
		datauser<<"| PPH (Setahun): "<<pph<<endl;
		datauser<<"| PPH (Sebulan): "<<pph_bulan<<endl;
		datauser<<"\n\n";	
		datauser<<"\n";
		datauser.close();
	}
	
	void writeptkp()
	{
		ofstream file("_PTKP");
		for(int i=0;i<4;i++)
			{
				file<<" TK"<<"/"<<i<<": "<<tk0[i]<<endl;
				
			}
		for(int i=0;i<4;i++)
		{
			file<<" K"<<"/"<<i<<": "<<k[i]<<endl;
		}
	}
	
	void writepkp()
	{
		ofstream myfile("_Pengusaha Kena Pajak");
		myfile<<"0 "<<"50000000 "<<" 0.05";
		myfile<<"50000001 "<<"250000000 "<<" 0.15";
		myfile<<"250000001 "<<"500000000 "<<" 0.25";
		myfile<<" >"<<"500000001 "<<" 0.30";	
	}
	
	void writedatauser()
	{
		ofstream datauser("_Data_Karyawan");
		time_t now=time(0);
		char* dt=ctime(&now);
		datauser<<"								Tanggal :"<<dt<<" "<<endl;
		datauser<<"|          DATA PAJAK PENGHASILAN      |"<<endl;
		datauser<<"| Nama                      :"<<nama<<" "<<endl;
		datauser<<"| Gaji                      :"<<gajibulan<<" "<<endl;
		datauser<<"| Status                    :"<<status<<" "<<endl;
		datauser<<"| Jaminan Keselamatan Kerja :"<<jkk<<endl;
		datauser<<"| Jaminan Kematian          :"<<jk<<endl;
		datauser<<"| Bruto                     :"<<Bruto<<endl;
		datauser<<endl;
		datauser<<"| Biaya Jabatan             : "<<biaya_jabatan<<endl;
		datauser<<"| Iuran Jaminan Hari Tua    : "<<hari_tua<<endl;
		datauser<<"| Jaminan Pensiun           : "<<pensiun<<endl;
		datauser<<"| Netto                     : "<<Netto<<endl;
		datauser<<"| THR                       : "<<tehr<<endl;
		datauser<<"| PPH (Setahun): "<<pph<<endl;
		datauser<<"| PPH (Sebulan): "<<pph_bulan<<endl;
		datauser<<"\n\n";	
		datauser<<"\n";
	}
};

int main()
{
	system("color F4");
	Login_register L;
	Hitung_pph pajak;
	start:
	ulang:
	char pause;
	char sign,go,gopph;
	char ditemukan=false;
	char admin;
	int menucrud;
	int pes;
	system("CLS");
	gotoxy(32,1);
	cout<<"|========================================================|"<<endl;
	gotoxy(32,2);
	cout<<"|    NAMA : VINCETIUS TRI NUGROHO KUSWIHARTO LOLONG      |"<<endl;
	gotoxy(32,3);
	cout<<"|    NIM  :               20170801214                    |"<<endl;
	gotoxy(32,4);
	cout<<"|========================================================|"<<endl;
	gotoxy(32,5);
	cout<<"|========================================================|"<<endl;
	gotoxy(32,6);
	cout<<"|           SYSTEM PERHITUNGAN PAJAK  (PPH.21)           |"<<endl;
	gotoxy(32,7);
	cout<<"|========================================================|"<<endl;
	cout<<"\n";
	cout<<"  [ SYSTEM LOGIN USER / ADMIN ]                          \n";
	cout<<"| Login User (U) / Admin (A)  : |                        \n";
	cin>>admin;
	
	if (admin =='U')	{	
		system("CLS");
		gotoxy(45,14);
		cout<<"Ingin Masuk? [Y(ya)/N(Tidak)] \n";
		cin>>sign;
		if(sign="Y"||"y")
		{
			L.Display_Register();
			ditemukan=true;
			cout<<" Pendaftaran Berhasil Dilakukan \n";
			cout<<" Ingin Login ?                  \n";
			cout<<" [Y(Ya)/N(Tidak)]               \n";
			cin>>go;
			if(go=='Y')
			{
				L.Display_Header();
				L.Display_Login();
				
				
				system("CLS");
				gotoxy(32,1);
				cout<<"|======================================================|"<<endl;
				gotoxy(32,2);
				cout<<"|   SELAMAT DATANG DI PROGRAM PAJAK PENGHASILAN NO.21  |"<<endl;
				gotoxy(32,3);
				cout<<"|======================================================|"<<endl;
				cout<<"\n";
				cout<<"|            LOGIN BERHASIL DILAKUKAN            |\n";
				cout<<"|===========                          ===========|"<<endl;
				cout<<" INGIN LANJUT ? (Y(Ya)/N(Tidak))   \n";
				cin>>gopph;
				
				if(gopph="Y"||"y")	
					{
						awal:
						pajak.menuCRUD();
						cin>>menucrud;
						if(menucrud == 1){
							L.Display_Header();
							system("CLS");
							pajak.judul();
							pajak.input();
							pajak.writedatauser();
							pajak.exceldatauser();
							cout<<"\nINGIN KEMBALI KE MENU AWAL?\n";
							cout<<"[1]. Ya\n";
							cout<<"[2]. TIdak\n";
							cout<<"PILIHAN :\n";
							cin>>pes;
							if(pes==1){
								system("CLS");
								goto awal;
							}	
							else if(pes==2){
								system("CLS");
								exit(0);
							}
						}else if(menucrud == 2){
							pajak.output();	
							cout<<"\nINGIN KEMBALI KE MENU AWAL?\n";
							cout<<"[1]. Ya\n";
							cout<<"[2]. TIdak\n";
							cout<<"PILIHAN :\n";
							cin>>pes;
									if(pes==1){
								system("CLS");
								goto awal;
							}	
							else if(pes==2){
								system("CLS");
								exit(0);
							}
						}else if(menucrud == 3){
							pajak.updateData();
							cout<<"\nINGIN KEMBALI KE MENU AWAL?\n";
							cout<<"[1]. Ya\n";
							cout<<"[2]. TIdak\n";
							cout<<"PILIHAN :\n";
							cin>>pes;
									if(pes==1){
								system("CLS");
								goto awal;
							}	
						else if(pes==2){
								system("CLS");
								exit(0);
							}
						}else if(menucrud == 4){
							exit(0);	
						}
						
					}
			}
					
				if(go=='N')
					{
						exit(0);
					}		
		}
	}
	else if(admin == 'A')
	{
		system("CLS");
		
		L.Login_admin();
		{
			system("CLS");
			gotoxy(32,1);
			cout<<"|========================================================|"<<endl;
			gotoxy(32,2);
			cout<<"|             SYSTEM PERHITUNGAN PAJAK ADMIN             |"<<endl;
			gotoxy(32,3);
			cout<<"|                                                        |"<<endl;
			gotoxy(32,4);
			cout<<"| NAMA ADMIN : Vincentius Tri Nugroho Kuswiharto Lolong  |"<<endl;
			gotoxy(32,5);
			cout<<"|========================================================|\n"<<endl;
			pajak.admin_PPH();
			goto start;
		}
	}
	pajak.writeptkp();
	pajak.writepkp();
	pajak.writedatauser();
	cout<<" Ingin Melanjutkan Program Pajak? ";
	cin>>pause;
	if(pause='Y')
	{
		goto start;
	}
	if(pause='N')
	{
		exit(0);
	}		
	getch();
}
