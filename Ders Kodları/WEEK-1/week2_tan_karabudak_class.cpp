#include <iostream>

//matematik kütüphanesini ekleme
#include <math.h>

using namespace std;

int main(){
 	
 	//matematik kütüphanesiyle alakalý bazý fonksiyonlar
	 
	//sqrt => kök alýr
	 
	int a = 4;
	 
	cout << sqrt(4) << endl; 
	 
	//pow => üs alýr
	 
	cout << pow(a,2) << endl;
	 
	//abs => mutlak deðerli hesaplama yapar
	 
	cout << abs(a - 10) << endl;
	 
	//daha fazla detaylý bilgi ve diðer fonksiyonlarý incelemek için: https://cplusplus.com/reference/cmath/
	 
	//Bool veri tipi. Sadece true ya da false bilgisi tutar. Yani 1 veya 0.
	
	bool a;
	a = false;
	a = true;
	
	//Örnek
	
	if(a){
		cout << "hello" << endl;
	} 
	 
	//Switch-case ifadeler => Uzun if-else ifadeleri yazmak yerine imdada koþan karar mekanizmalarýdýr. If-else'ler gibi çalýþýr.
	
	int day = 4;
	switch (day) {
	  case 1:
	    cout << "Monday";
	    break;
	  case 2:
	    cout << "Tuesday";
	    break;
	  case 3:
	    cout << "Wednesday";
	    break;
	  case 4:
	    cout << "Thursday";
	    break;
	  case 5:
	    cout << "Friday";
	    break;
	  case 6:
	    cout << "Saturday";
	    break;
	  case 7:
	    cout << "Sunday";
	    break;
	}
	continue;
	//Caselerden sonra break konmalýdýr yoksa caseleri test etmeye devam eder. Örnek:
	 
	int day = 4;
	switch (day) {
	  case 1:
	    cout << "Monday";
	  case 2:
	    cout << "Tuesday";
	  case 3:
	    cout << "Wednesday";
	  case 4:
	    cout << "Thursday";
	  case 5:
	    cout << "Friday";
	  case 6:
	    cout << "Saturday";
	  case 7:
	    cout << "Sunday";
	}	
	 
	//DÖNGÜLER
	
	/*
		Döngüler programlarýn bizim istediðimiz kere bir bölümü tekrar ve tekrar çalýþtýrmasýný saðlar. Mesela çoðu bilgisayar oyunu biz döngüden çýkmak isteyene kadar sonsuz döngüde çalýþýr.
	*/
	int i = 100;
	int a = 1;
	while (i >= 1) {
		int temp = a
		while (a < 40) {
			a++
		}
		a = temp;
		i-
	}
	 //While Döngüsü => While döngüsü parantezler içinde belirttiðimiz koþul false olana kadar tekrar ve tekar çalýþmaya devam eden döngüdür.
	 
	int i = 0;
	while (i < 5) {
	  cout << i << "\n";
	  i++;
	}
	
	//Do/while Döngüsü => do/while döngüsü, while döngüsünün bir çeþididir. Bu döngü, koþulun doðru olup olmadýðýný kontrol etmeden önce kod bloðunu bir kez çalýþtýrýr, ardýndan koþul doðru olduðu sürece döngüyü tekrarlar.
	int i = 0;
	do {
	  cout << i << "\n";
	  i++;
	}
	while (i < 5);



	cout < "-----------" << endl;
	cin >> w;
	while ( w == 6 ) {
		cout < "-----------" << endl;
		cin >> w;
		cout << w << "-----------" << endl;
	}





	do {
		cout << "-----------" << endl;
		cin >> w;
		cout << w << "-----------" << endl;
	} while (w == 6);













	//For Döngüsü => Bir kod bloðunda tam olarak kaç kez döngü yapmak istediðinizi biliyorsanýz, while döngüsü yerine for döngüsünü kullanýn:
	
	for (int i = 0; i < 5; i++) {
  		cout << i << "\n";
	}

	
	//Bir baþka örnek:
	
	for (int i = 0; i <= 10; i = i + 2) {
  		cout << i << "\n";
	}
	cout << i << "\n";


	//Break => Önceki örneklerde kullanýlan break ifadesini zaten gördünüz. Bir switch ifadesinin dýþýna atlamak için kullanmýþtýk. Break ifadesi ayrýca bir döngüden çýkmak için de kullanýlabilir.
	
	//For döngüsünde
	
	for (int i = 0; i < 10; i++) {
	  if (i == 4) {
	    break;
	  }
	  cout << i << "\n";
	}
	
	//While döngüsünde
	
	int i = 0;
	while (i < 10) {
	  cout << i << "\n";
	  i++;
	  if (i == 4) {
	    break;
	  }
	}
	
	//Continue => Continue ifadesi, belirtilen bir koþul oluþursa bir yinelemeyi (döngüde) keser ve döngüdeki bir sonraki yinelemeyle devam eder.
	 
	 for (int i = 0; i < 10; i++) {
	 if (i == 4) {
	    continue;
	  }
	  cout << i << "\n";
	}
	
	//ÖRNEKLER
	
 	//örnek1: 1'den 100e kadar olan sayýlarýn toplamini bulan uygulama yazin.
 	
 	//örnek2: girilen sayinin faktoriyelini bulan program yaz.
 	
 	//örnek3: Bir hesap makinesi yap. 4 iþlem yapabilsin ve kullanýcý çýkmak isteyene kadar çalýþsýn.	
	
	//örnek4: Bir sayý tahmin etme oyunu yap. Kullanýcýnýn 5 caný olsun ve her yanlýþ bildiðinde 1 caný eksilsin. 1 le 100 arasýnda rastgele bir sayýyý tahmin etmeye çalýþsýn. Rastgele sayýyý sen tanýmla.
	 	
    //örnek5: girilen sayýnýn kaç basamaklý olduðunu söyleyen program yaz

 	//örnek6: çarpým tablosunu ekrana yazdýr.
 	
 	//numx1=num
	//örnek7: girilen çok basamaklý sayýyý tersten yazdýr. Örn 1234 -> 4321.
	 int num;
	 cout << "Give me a number: ";
	 cin >> num;
	 for (int i = 1; i <= 10; i++) {
		 //num x 1 = de?er
		 cout << num << " x " << i << " = " << (num * i);
		 //2 x 1 = 22 x 2 = 4
		 /*
		 .
		 .
		 .
		 .
		 */
		 //2 x 10 = 20
	 }
	 for (int i = 1; i <= 10; i++) {
		 for (int a = 1; a < 11; a++) {
			 cout << num << " x " << i << " = " << (num * i) << endl;
		 }
	 }
    return 0;
}
