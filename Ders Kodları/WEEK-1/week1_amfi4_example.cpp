#include <iostream>
#include <string>
using namespace std;


int main() {
	
	/*Paralý otopark uygulamasý kodlarý. Saatlik fiyatlarý týr için 150, otobüs için 100, otomobil için 75 lira olarak
	ayarlamýþtýk. Araç tipine göre if / else if / else bloklarýna programý nasýl sokacaðýmýzýn basit bir örneði.
	*/
	char arac;
	int saat;
	
	cout << "********Paralý otopark uygulamasýna hosgeldiniz********" << endl;
	
	cout << "Arac tipi girin (Tir icin t, Otobus icin o, otomobil icin a girin): ";
	cin >> arac;
	cout << "Kac saat kaldiniz: ";
	cin >> saat;
	
	if(arac == 't'){
		cout << "Hesabiniz = " << saat*150;
	}
	else if(arac == 'o'){
		cout << "Hesabiniz = " << saat*100;		
	}
	else if(arac == 'a'){
		cout << "Hesabiniz = " << saat*75;
	}
	else{
		cout << "Kanka programi bozma :)";
	}
		
	
	return 0;
}
