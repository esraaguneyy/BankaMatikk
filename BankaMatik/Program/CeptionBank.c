#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>

int giris(char isim[10],int sifre){ // Giri� Fonksiyonu 
	setlocale(LC_ALL, "Turkish"); // T�rk�e dil deste�i sa�lar.
	int girilen_sifre,durum;
	char girilen_isim[10];
	printf("\t\t CeptionBANK\n\n");
	
	printf("Kullan�c� Ad� Giriniz: "); 
	scanf(" %s",&girilen_isim);
	printf("L�tfen �ifre Giriniz: ");
	scanf("%d",&girilen_sifre);
		if(strcmp(isim,girilen_isim)==0 && (girilen_sifre==sifre)){ // Girilen kullan�c� ad� ile �ifre kay�tl� kullan�c� ad� ve �ifre ile e�le�iyor mu diye kontrol eder.
			
		durum=1; 
		system("color 2F"); // Arka plan� ye�il renk yapar.
		printf("\n\nKullan�c� Bilgileri E�lesmi�tir.");
		printf("\nGiri� Ba�arili. \nMen�ye Y�nlendiriliyorsunuz...");
		Sleep(100);
		system("color 0F"); // Arka plan� varsay�lan hale �evirir.
		Sleep(100);
		system("cls"); // CMD Ekran�n� temizler.
}
else{
durum=0;
}
return durum;
}


void servis_disi(){ //Servis D��� Fonksiyonu
	int tekrar;
	
	printf("\t\t  CeptionBANK\n");
	printf("\t\t Teknik Ar�za \n\n");
	printf("Bankam�z teknik ar�za nedeni ile �uanda bu i�lemi yapam�yor.");
	printf("\n\nMen�ye D�nmek ��in 0'a Bas�n�z.");
		
	tekrar_sor: tekrar = getch(); // Men�ye d�nmek istiyor muyuz diye sorar.
	
	switch(tekrar){
		case '0':
			system("cls");
			break;
				
		default:
			goto tekrar_sor; // 0 de�eri girilene kadar tekrar_sor islemi yapt�r�r.
	}
	
}
void cikis(){
	setlocale(LC_ALL, "Turkish");
	printf("��k�� Yap�l�yor. L�tfen Bekleyin.");
	Sleep(200); // Programa delay s�resi ekler. Yani gecikme s�resi.
	system("cls");
	
}

void kredi_hesapla(){
	setlocale(LC_ALL, "Turkish");
	double miktar,taksit,borc,faiz;
	int vade,ay,tekrar;
	
basla:	
	printf("\t\t CeptionBANK\n");
	printf("\n�ekmek �stediginiz Kredi Miktari : ");
	scanf("%d",&miktar);
	
	printf("Vade S�resi Se�iniz\n\n1- 3 Ay - 5.42 Faiz \n2- 6Ay - 5.42 Faiz\n3- 9 Ay - 3.50 Faiz\n4- 12 Ay - 3.10 Faiz");
	vade = getch(); // Klavyeden girilen de�eri yakalar.
	
	switch(vade){
		case '1':
			
		ay=3;
		borc = ((miktar/100)*(5.42*ay))+miktar;
		taksit = borc/ay;
		
		system("cls");
		printf("\t\t CeptionBANK\n");
		printf("\n3 Ayl�k Kredi");
		printf("\n\nAl�nan Miktar = %d TL",miktar);
		printf("\nGeri �denecek Miktar = %d TL",borc);
		printf("\nAyl�k Taksit �creti = %d TL",taksit);
		
		break;
		
		case '2':
			
		ay=6;
		borc = ((miktar/100)*(5.42*ay))+miktar;
		taksit = borc/ay;
		
		system("cls");
		printf("\t\t CeptionBANK\n");
		printf("\n6 Ayl�k Kredi");
		printf("\n\nAl�nan Miktar = %d TL",miktar);
		printf("\nGeri �denecek Miktar = %d TL",borc);
		printf("\nAyl�k Taksit �creti = %d TL",taksit);
		
		break;
		
		case '3':
			
		ay=9;
		borc = ((miktar/100)*(3.50*ay))+miktar;
		taksit = borc/ay;
		
		system("cls");
		printf("\t\t CeptionBANK\n");
		printf("\n9 Ayl�k Kredi");
		printf("\n\nAl�nan Miktar = %d TL",miktar);
		printf("\nGeri �denecek Miktar = %d TL",borc);
		printf("\nAyl�k Taksit �creti = %d TL",taksit);
		
		break;
		
		case '4':
			
		ay=12;
		borc = ((miktar/100)*(3.10*ay))+miktar;
		taksit = borc/ay;
		
		system("cls");
		printf("\t\t CeptionBANK\n");
		printf("\n12 Ayl�k Kredi");
		printf("\n\nAl�nan Miktar = %d TL",miktar);
		printf("\nGeri �denecek Miktar = %d TL",borc);
		printf("\nAyl�k Taksit �creti = %d TL",taksit);
		
		break;
	}
	
tekrar_sor:	printf("\n\nTekrar ��lem Yapmak �ster Misiniz? (E/H)"); // Tekar i�lem yapmak ister misiniz diye sorar.
			tekrar = getch();
	
	switch(tekrar){
		case 'E':
			system("cls");
			goto basla;
			break;
		case 'e':
			system("cls");
			goto basla;
			break;
		case 'H':
			system("cls");
			break;
			
		case 'h':
			system("cls");
			break;
			
		default:
			printf("\n\nHatal� Se�im Yapt�n�z. L�tfen Tekrar Se�im Yap�n�z!");
			goto tekrar_sor;
	}
}

void kullanici_bilgileri(char isim[10],int sifre,int bakiye){
		int tekrar;
		setlocale(LC_ALL, "Turkish");
		
		printf("\t\t CeptionBANK\n");
		printf("\t     Kullan�c� Bilgileri\n\n");
		
		printf("Ad Soyad = Muhammet �zer");
		printf("\nKullan�n�c� Adi = %s",isim);
		printf("\n�ifre = %d",sifre);
		printf("\nVarl�k = %d",bakiye);
		printf("\nHesap Durumu = Aktif");
		printf("\nTek Seferde Para �ekme Limiti = 5000 TL");

		printf("\n\nMen�ye D�nmek ��in 0'a Bas�n�z.");
		
	tekrar_sor: tekrar = getch();
	
	switch(tekrar){
		case '0':
			system("cls");
			break;
				
		default:
			goto tekrar_sor;
	}
}

void bakiye_gor(int bakiye){
		int tekrar;
		setlocale(LC_ALL, "Turkish");
		
		printf("\t\t  CeptionBANK\n");
		printf("\t      Bakiye G�r�nt�leme \n\n");
		printf("Kullan�labilir Bakiye = %d TL",bakiye);
		
		printf("\n\nMen�ye D�nmek ��in 0'a Bas�n�z.");
		
	tekrar_sor: tekrar = getch();
	
	switch(tekrar){
		case '0':
			system("cls");
			break;
				
		default:
			goto tekrar_sor;
	}
}


int para_cek(int bakiye){
		int miktar;
		int tekrar;
		setlocale(LC_ALL, "Turkish");
	paracek:	
		printf("\t\t CeptionBANK\n");
		printf("\t\t Para  Cekme\n\n");
	
		printf("Kullanilabilir Bakiye = %d TL",bakiye);
		printf("\n\n�ekmek �stedi�iniz Tutar = ");
		scanf("%d",&miktar);
		
	if(miktar<=5000){ // �ekmek istenen miktar limitten k���k m� diye kontrol eder.
		if ((bakiye-miktar)>=0){ //�ekmek istenen miktar i�in yeterli bakiyemiz var m� diye kontrol eder.
			bakiye-=miktar; // Bakiyeden �ekilmek istenen miktar ��kar�l�r.
			system("color 2F");
			printf("Para �ekkme Ba�ar�l�\n");
			Sleep(1);
			system("color 0F");
			printf("Yeni Bakiye = %d TL",bakiye);
		
			printf("\n\nMen�ye D�nmek ��in 0'a Bas�n�z.");
		
			tekrar_sor3	: tekrar = getch();
	
			switch(tekrar){
				case '0':
					system("cls");
					break;
				
				default:
					goto tekrar_sor3;
	}
	}
	
	else{
		system("color 4F");
		printf("\nYetersiz Bakiye");
		Sleep(10);
		printf("\nDaha K���k Bir Miktar Giriniz.");
		system("color 0F");
		printf("\n\nYeniden Miktar Girmek ��in 0'a Bas�n�z.");
		printf("\nAna Men�ye D�nmek ��in X'e Bas�n�z.");
		
	tekrar_sor: tekrar = getch();
	
	switch(tekrar){
		case '0':
			system("cls");
			goto paracek;
			break;
			
		case 'x':
			system("cls");
			break;
			
		case 'X':
			system("cls");
			break;
				
		default:
			goto tekrar_sor;
	}
		system("cls");
	}
	}
	else{
		
		system("color 4F");
		printf("\nPara �ekme ��lemi Ba�ar�s�z.");
		Sleep(10);
		printf("\nTek Seferde Cekme Limitiniz : 5000 TL.");
		system("color 0F");
		printf("\n\nYeniden Miktar Girmek ��in 0'a Basiniz.");
		printf("\nAna Men�ye D�nmek �cin X'e Basisiniz.");
		
	tekrar_sor2: tekrar = getch();
	
	switch(tekrar){
		case '0':
			system("cls");
			goto paracek;
			break;
			
		case 'x':
			system("cls");
			break;
			
		case 'X':
			system("cls");
			break;
			
		default:
			goto tekrar_sor2;
	}
		system("cls");
	}
	return bakiye;
}

int para_yatir(int bakiye){
	setlocale(LC_ALL, "Turkish");
	int limit=5000,miktar,tekrar;
parayatir:
		printf("\t\t  CeptionBANK\n");
		printf("\t\t Para  Yat�rma\n\n");
		printf("Yat�rmak �stedi�iniz Tutar = ");
		scanf("%d",&miktar);	
	
	if(miktar<=limit){
		bakiye+=miktar;
		system("color 2F");
		printf("\nPara Yat�rma ��lemi Basar�l�.");
		Sleep(1);
		system("color 0F");
		printf("\nYeni Bakiye = %d",bakiye);
		
		printf("\n\nMen�ye D�nmek ��in 0'a Bas�n�z.");
		
		tekrar_sor	: tekrar = getch();
	
			switch(tekrar){
				case '0':
					system("cls");
					break;
				
				default:
					goto tekrar_sor;
	}
}

	else{
		system("color 4F");
		printf("Tek Seferde En Fazla %d TL Yat�rabilirsiniz.",limit);
		Sleep(1);
		system("color 0F");
		
		printf("\n\nYeniden Para Yat�rmak ��in 0'a Bas�n�z.");
		printf("\nAna Men�ye D�nmek ��in X'e Bas�n�z.");
		
		tekrar_sor2: tekrar = getch();
	
			switch(tekrar){
				case '0':
					system("cls");
					goto parayatir;
					break;
			
				case 'x':
					system("cls");
					break;
			
				case 'X':
					system("cls");
					break;
			
				default:
					goto tekrar_sor2;
	}
		system("cls");
	}
		return bakiye;
	}

int para_transferi(){
	
	servis_disi();
	
}

int main() {
		
char isim[10]="mozer";	
int sifre=1234;
int bakiye=18000;
int islem_tercih;
int hatali_giris=0;
int durum;

giris: durum = giris(isim,sifre);

menu:
	if(durum==1){
		printf("\t\t  CeptionBANK\n\t\t   Ana Men�\n");
		printf("\n 1 - Bakiye G�r�nt�leme\n 2 - Para Yat�rma\n 3 - Para �ekme\n 4 - Kredi / Taksit Hesaplama\n 5 - Para Transferi\n 6 - Kullan�c� Bilgilerim\n\n 0 - ��k��");
	islem_sor:	islem_tercih = getch();
		
		switch(islem_tercih){
			
			case '1':
				system("cls");
				bakiye_gor(bakiye);
				goto menu;
				break;
				
			case '2':
				system("cls");
				bakiye=para_yatir(bakiye);
				goto menu;
				break;
			
			case '3':
				system("cls");
				bakiye=para_cek(bakiye);
				goto menu;
				break;
				
			case '4':
				system("cls");
				kredi_hesapla();
				goto menu;
				break;
				
			case '5':
				system("cls");
				para_transferi();
				goto menu;
				break;
				
			case '6':
				system("cls");
				kullanici_bilgileri(isim,sifre,bakiye);
				goto menu;
				break;
				
			case '0':
				system("cls");
				cikis();
				goto giris;
				break;
			default :
			goto islem_sor;
		}
	}
		
	else{
	hatali_giris+=1;
		if(hatali_giris==3){
			int tekrar;
			printf("\n\nHatal� Giri� Limitini A�t�n�z.\nHesab�n�z Bloke Olmu�tur.");
			printf("\n�ifreniz S�f�rlanm��t�r.\n\nM��teri Temsilcisi �le �leti�ime Ge�iniz.");
			printf("\n\nGiri� Ekran�na D�nmek ��in 0'a Bas�n�z.");
			
			sifre=82133;
			Sleep(50);
tekrar_sor:	tekrar = getch();
			switch(tekrar){
				case '0':
					goto giris;
					system("cls");
					break;
				default:
					goto tekrar_sor;
					break;
					
			}
		}
		else{
		system("color 4F");
		printf("\n\nKullan�c� Ad� Ya Da �ifre Hatal�.\nL�tfen Tekrar Deneyiniz!!\n\n");
		Sleep(10);
		system("color 0F");
		Sleep(10);
		system("cls");
		goto giris;
		}
	
	}
	
	return 0;
}
