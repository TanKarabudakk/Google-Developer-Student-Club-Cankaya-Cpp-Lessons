#include <iostream>

using namespace std;

//Bu de�er d�nmeyen bir fonksiyon. Genellikle ekrana bir �eyler yazd�rmak i�in kullan�l�r.
void function1(){
	cout << "Hello world!!!" << endl;
}

//Bu integer bir de�er d�nd�ren fonksiyon.
int function2(){
	int a = 5, b = 6;
	
	return a+b;
}

//Bu char d�nd�ren bir fonksiyon. Fonksiyona parametre g�ndermek istedi�imizde fonksiyonu tan�mlarken kulland���m�z parantezler i�ine hangi veri tipinde veri alabilece�ini tan�mlar�z.
//Fonksiyonu kullanmak istedi�imizde bu verileri g�ndermek zorunludur.
char function3(char item){
	item = 'A';
	
	return item;
}

//�ENML�!!! k�sm�n�n fonksiyonu
void degistir(int a){
	a = 15;
	
	cout << "Fonksiyon i�indeki a degiskeni = " << a << endl;
}

//Pointer kullanarak return etmeden deger d�nd�rmek i�in fonksiyon �rne�i
void degistir2(int *a){
	*a = 15;
	
	cout << "Fonksiyon i�indeki a degiskeni = " << *a << endl;
 
}

int main(){
	
	//Fonksiyonu ismini yazarak �a��r�yoruz.
	function1();
	
	//Fonksiyondan return eden de�eri bu �ekilde bir de�i�kende tutabiliriz.
	int toplam = function2();
	
	//Ya da return eden de�eri bast�rabiliriz.
	cout << function2() << endl;
	
	//char d�nd�ren fonksiyon i�in �rnek
	char harf = 'c';
	
	cout << function3(harf) << endl;
	
	//Fonksiyonlar� program�m�zda yard�mc� kod par�alar� �eklinde d���n�p o �ekilde kullanmal�y�z. Bizi kod kalabal���ndan kurtar�r.
	
	/*�rnek1: Bir hesap makinesi yazd���n�z� d���n�n. O hesap makinesinde 2 say� al�nd���n� ve o iki say�n�n istenen i�lemi yapacak �ekilde basit �ekilde kodlay�n.
	��lemler i�in fonksiyonlar yaz�n. �rnek olarak toplama i�lemi i�in topla() fonksiyonunun tan�mlanmas� gibi.*/
	
	//�NEML�!!!!
	/*
	Fonksiyonlara parametre olarak de�i�ken g�nderirken C++ o de�i�kenin kendisini de�il kopyas�n� o fonksiyona g�nderir.
	*/
	int a = 10;
	
	degistir(a);
	
	cout << "Fonksiyon disindaki a degeri = " << a << endl;
	
	//Fark� g�rd�n�z m�? Burada devreye Scope konusu giriyor. Her bir s�sl� paranteze sahip i�lemin i�inde tan�mlanan degiskenler o s�sl� parantezin i�inde bir ya�ama sahiptir.
	//O s�sl� parantezin d���nda eri�ti�imizde eri�ilemez olur.
	
	//�RNEK
	
	int sayi = 5;
	
	if(sayi == 5){
		int sayi2 = 10;
	}
	
	cout << sayi2 << endl;
	
	//Bu olay fonksiyonlar, d�ng�ler ve switch case ifadeleri i�in de ge�erlidir.
	
	//Bu olaydan ve kopyalama sorunundan kurtulmak i�in pointerlar� kullan�r�z. Pointerlar tan�mlanan de�i�kenlerin ramdeki adreslerini tutan �zel de�i�kenlerdir.
	
	//Basit pointer tan�mlamas�
	int *ptr;
	
	//De�i�kenin adresini tutan pointer olu�turma
	int sayi = 10;
	int *ptrSayi = &sayi;
	
	cout << "Pointerin adresini tuttugu degiskenin icindeki deger = " << *ptrSayi << "\nPointerin icindeki adres degeri = " << ptrSayi << endl;
	
	//Fonksiyona pointer yollama �rne�i
	
	int sayi = 10;
	int *ptrSayi = &sayi;
	
	degistir2(ptrSayi);
	cout << "Fonksiyon disindaki sayi degeri = " << sayi << endl;
	
	//Pointerlar yerine de�i�kenin adresinin lokasyonunu yollamak i�in referanslar� da kullanabiliriz. Referans &degiskenadi �eklindedir.
	
	int sayi = 10;
	
	degistir2(&sayi);
	
	cout << "Fonksiyon disindaki sayi degeri = " << sayi << endl;

	
	int i, score[5], max;
     cout<<"Enter 5 scores:\n";
     cin>>score[0];
     max = score[0];
     for (i = 1; i<=5; i++){
         cin >> score[i]; // kullanıcıdan 5 sayı aldık
         if (score[i] > max)
             max = score[i]; //girilen 5 sayıdan en büyüğünü bulduk
     }
 
     cout<<"The highest score is " << endl;
	
	int arr[] = {10, 20, 30, 40};  // verilen array
 
	/*bu for döngüsü verilen arrayde array sonlanana kadar elemanları tek tek yazdırmaya yarar */
	for (int x : arr)
    	cout << x << " ";
	cout << endl;

	//Metod 1
	int x[3][4] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11}

	//Metod 2
	int x[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};
	0 1 2 3
	4 5 6 7
	8 9 10 11

	//Metod 3
	int x[3][4];
	for(int i = 0; i < 3; i++){
    	for(int j = 0; j < 4; j++){
        	cin >> x[i][j];
    	}
	}


	int x[3][2] = {{0,1}, {2,3}, {4,5}};
  
    // output each array element's value
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Element at x[" << i
                 << "][" << j << "]: ";
            cout << x[i][j]<<endl;
        }
    }
 
	/*dizideki elemanlar bittiğinde, döngü sonlanmış olur, program kaldığı yerden devam eder.*/
	return 0;
}
