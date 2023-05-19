#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>

int giris(char isim[10],int sifre){ // Giriþ Fonksiyonu 
	setlocale(LC_ALL, "Turkish"); // Türkçe dil desteði saðlar.
	int girilen_sifre,durum;
	char girilen_isim[10];
	printf("\t\t CeptionBANK\n\n");
	
	printf("Kullanýcý Adý Giriniz: "); 
	scanf(" %s",&girilen_isim);
	printf("Lütfen Þifre Giriniz: ");
	scanf("%d",&girilen_sifre);
		if(strcmp(isim,girilen_isim)==0 && (girilen_sifre==sifre)){ // Girilen kullanýcý adý ile þifre kayýtlý kullanýcý adý ve þifre ile eþleþiyor mu diye kontrol eder.
			
		durum=1; 
		system("color 2F"); // Arka planý yeþil renk yapar.
		printf("\n\nKullanýcý Bilgileri Eþlesmiþtir.");
		printf("\nGiriþ Baþarili. \nMenüye Yönlendiriliyorsunuz...");
		Sleep(100);
		system("color 0F"); // Arka planý varsayýlan hale çevirir.
		Sleep(100);
		system("cls"); // CMD Ekranýný temizler.
}
else{
durum=0;
}
return durum;
}


void servis_disi(){ //Servis Dýþý Fonksiyonu
	int tekrar;
	
	printf("\t\t  CeptionBANK\n");
	printf("\t\t Teknik Arýza \n\n");
	printf("Bankamýz teknik arýza nedeni ile þuanda bu iþlemi yapamýyor.");
	printf("\n\nMenüye Dönmek Ýçin 0'a Basýnýz.");
		
	tekrar_sor: tekrar = getch(); // Menüye dönmek istiyor muyuz diye sorar.
	
	switch(tekrar){
		case '0':
			system("cls");
			break;
				
		default:
			goto tekrar_sor; // 0 deðeri girilene kadar tekrar_sor islemi yaptýrýr.
	}
	
}
void cikis(){
	setlocale(LC_ALL, "Turkish");
	printf("Çýkýþ Yapýlýyor. Lütfen Bekleyin.");
	Sleep(200); // Programa delay süresi ekler. Yani gecikme süresi.
	system("cls");
	
}

void kredi_hesapla(){
	setlocale(LC_ALL, "Turkish");
	double miktar,taksit,borc,faiz;
	int vade,ay,tekrar;
	
basla:	
	printf("\t\t CeptionBANK\n");
	printf("\nÇekmek Ýstediginiz Kredi Miktari : ");
	scanf("%d",&miktar);
	
	printf("Vade Süresi Seçiniz\n\n1- 3 Ay - 5.42 Faiz \n2- 6Ay - 5.42 Faiz\n3- 9 Ay - 3.50 Faiz\n4- 12 Ay - 3.10 Faiz");
	vade = getch(); // Klavyeden girilen deðeri yakalar.
	
	switch(vade){
		case '1':
			
		ay=3;
		borc = ((miktar/100)*(5.42*ay))+miktar;
		taksit = borc/ay;
		
		system("cls");
		printf("\t\t CeptionBANK\n");
		printf("\n3 Aylýk Kredi");
		printf("\n\nAlýnan Miktar = %d TL",miktar);
		printf("\nGeri Ödenecek Miktar = %d TL",borc);
		printf("\nAylýk Taksit Ücreti = %d TL",taksit);
		
		break;
		
		case '2':
			
		ay=6;
		borc = ((miktar/100)*(5.42*ay))+miktar;
		taksit = borc/ay;
		
		system("cls");
		printf("\t\t CeptionBANK\n");
		printf("\n6 Aylýk Kredi");
		printf("\n\nAlýnan Miktar = %d TL",miktar);
		printf("\nGeri Ödenecek Miktar = %d TL",borc);
		printf("\nAylýk Taksit Ücreti = %d TL",taksit);
		
		break;
		
		case '3':
			
		ay=9;
		borc = ((miktar/100)*(3.50*ay))+miktar;
		taksit = borc/ay;
		
		system("cls");
		printf("\t\t CeptionBANK\n");
		printf("\n9 Aylýk Kredi");
		printf("\n\nAlýnan Miktar = %d TL",miktar);
		printf("\nGeri Ödenecek Miktar = %d TL",borc);
		printf("\nAylýk Taksit Ücreti = %d TL",taksit);
		
		break;
		
		case '4':
			
		ay=12;
		borc = ((miktar/100)*(3.10*ay))+miktar;
		taksit = borc/ay;
		
		system("cls");
		printf("\t\t CeptionBANK\n");
		printf("\n12 Aylýk Kredi");
		printf("\n\nAlýnan Miktar = %d TL",miktar);
		printf("\nGeri Ödenecek Miktar = %d TL",borc);
		printf("\nAylýk Taksit Ücreti = %d TL",taksit);
		
		break;
	}
	
tekrar_sor:	printf("\n\nTekrar Ýþlem Yapmak Ýster Misiniz? (E/H)"); // Tekar iþlem yapmak ister misiniz diye sorar.
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
			printf("\n\nHatalý Seçim Yaptýnýz. Lütfen Tekrar Seçim Yapýnýz!");
			goto tekrar_sor;
	}
}

void kullanici_bilgileri(char isim[10],int sifre,int bakiye){
		int tekrar;
		setlocale(LC_ALL, "Turkish");
		
		printf("\t\t CeptionBANK\n");
		printf("\t     Kullanýcý Bilgileri\n\n");
		
		printf("Ad Soyad = Muhammet Özer");
		printf("\nKullanýnýcý Adi = %s",isim);
		printf("\nÞifre = %d",sifre);
		printf("\nVarlýk = %d",bakiye);
		printf("\nHesap Durumu = Aktif");
		printf("\nTek Seferde Para Çekme Limiti = 5000 TL");

		printf("\n\nMenüye Dönmek Ýçin 0'a Basýnýz.");
		
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
		printf("\t      Bakiye Görüntüleme \n\n");
		printf("Kullanýlabilir Bakiye = %d TL",bakiye);
		
		printf("\n\nMenüye Dönmek Ýçin 0'a Basýnýz.");
		
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
		printf("\n\nÇekmek Ýstediðiniz Tutar = ");
		scanf("%d",&miktar);
		
	if(miktar<=5000){ // Çekmek istenen miktar limitten küçük mü diye kontrol eder.
		if ((bakiye-miktar)>=0){ //Çekmek istenen miktar için yeterli bakiyemiz var mý diye kontrol eder.
			bakiye-=miktar; // Bakiyeden çekilmek istenen miktar çýkarýlýr.
			system("color 2F");
			printf("Para Çekkme Baþarýlý\n");
			Sleep(1);
			system("color 0F");
			printf("Yeni Bakiye = %d TL",bakiye);
		
			printf("\n\nMenüye Dönmek Ýçin 0'a Basýnýz.");
		
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
		printf("\nDaha Küçük Bir Miktar Giriniz.");
		system("color 0F");
		printf("\n\nYeniden Miktar Girmek Ýçin 0'a Basýnýz.");
		printf("\nAna Menüye Dönmek Ýçin X'e Basýnýz.");
		
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
		printf("\nPara Çekme Ýþlemi Baþarýsýz.");
		Sleep(10);
		printf("\nTek Seferde Cekme Limitiniz : 5000 TL.");
		system("color 0F");
		printf("\n\nYeniden Miktar Girmek Ýçin 0'a Basiniz.");
		printf("\nAna Menüye Dönmek Ýcin X'e Basisiniz.");
		
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
		printf("\t\t Para  Yatýrma\n\n");
		printf("Yatýrmak Ýstediðiniz Tutar = ");
		scanf("%d",&miktar);	
	
	if(miktar<=limit){
		bakiye+=miktar;
		system("color 2F");
		printf("\nPara Yatýrma Ýþlemi Basarýlý.");
		Sleep(1);
		system("color 0F");
		printf("\nYeni Bakiye = %d",bakiye);
		
		printf("\n\nMenüye Dönmek Ýçin 0'a Basýnýz.");
		
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
		printf("Tek Seferde En Fazla %d TL Yatýrabilirsiniz.",limit);
		Sleep(1);
		system("color 0F");
		
		printf("\n\nYeniden Para Yatýrmak Ýçin 0'a Basýnýz.");
		printf("\nAna Menüye Dönmek Ýçin X'e Basýnýz.");
		
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
		printf("\t\t  CeptionBANK\n\t\t   Ana Menü\n");
		printf("\n 1 - Bakiye Görüntüleme\n 2 - Para Yatýrma\n 3 - Para Çekme\n 4 - Kredi / Taksit Hesaplama\n 5 - Para Transferi\n 6 - Kullanýcý Bilgilerim\n\n 0 - Çýkýþ");
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
			printf("\n\nHatalý Giriþ Limitini Aþtýnýz.\nHesabýnýz Bloke Olmuþtur.");
			printf("\nÞifreniz Sýfýrlanmýþtýr.\n\nMüþteri Temsilcisi Ýle Ýletiþime Geçiniz.");
			printf("\n\nGiriþ Ekranýna Dönmek Ýçin 0'a Basýnýz.");
			
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
		printf("\n\nKullanýcý Adý Ya Da Þifre Hatalý.\nLütfen Tekrar Deneyiniz!!\n\n");
		Sleep(10);
		system("color 0F");
		Sleep(10);
		system("cls");
		goto giris;
		}
	
	}
	
	return 0;
}
