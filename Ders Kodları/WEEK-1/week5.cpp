#include <iostream>
#include <string>

using namespace std;

//Basit bir class örneði
class MyClass{
	public:
		int num;
		string str;
};

//Class methodlarý örneði
class SelamBot {
	public:
		int num;
		string str;
		
		void selamVer(){
			cout << "Selamlar" << endl;
		}
		
		void selamVer2(string str){
			cout << "Selamlar " << str << endl;
		}
};

class Mat {
	public:
		int kareAl(int sayi);
		
};

Mat::kareAl(int sayi){
	return sayi*sayi;
}

//Constructor ve Destructor Örneði: Constructorlar classlardan bir obje oluþturulurken o objeyi yaratmamýza olanak saðlayan yapýcý fonksiyonlardýr. Destructorlar ise o objeler silineceði zaman
//o objeleri silen fonksiyondur. Kendimiz özel olarak constructor ve destructor tanýmlayabiliriz. Eðer tanýmlamazsak c++ otomatik basit constructorlar ve destructorlar kullanýr.
class Player{
	public:
		string name;
		int health;
		int armor;
		
		//Default Constructor Örneði
		Player(){
			//Health ve armoru default nasil ayarlamak istiyorsak o deðerleri set ediyoruz.
			name = "Player1";
			health = 100;
			armor = 100;
			
			cout << "Yeni bir Player objesi olusturuldu" << endl;
		}
		
		//Parametreli Constructor Örneði
		Player(string name, int health, int armor){
			//this keywordu classin içindeki variable ý belirtmek için kullanýlýr. Burada fonksiyona da health ve armor adýnda deðiþkenler gelmiþ.
			//Eðer health = health diye tanýmlasaydýk classýn variablý olan healthi mi yoksa parametre olarak gelen health i mi belirttiðimizi c++ anlayamazdý.
			//Bu yüzden neyi kast ettiðimizi tam belirtmek için this keywordü kullanýlýr.
			this->name= name;
			this->health = health;
			this->armor = armor;
			
			cout << "3 args Player objesi olusturuldu" << endl;
		}
		
		//Destructor Örneði
		~Player(){
			cout << name << " objesi silindi" << endl;
		}
};

//Access Specifiers Örneði: C++'ta private, protected ve public diye 3 access specifierýmýz vardýr. Private verilere hiçbir yerden eriþemeyiz, sadece classýn içinden eriþilebilir. Protected verilere classýn çocuklarý 
//eriþebilir(Inheritance konusu haftaya)Public verilere ise her yerden eriþebiliriz. Eðer classý yaratýrken public, private vs diye belirtmeden tanýmlama yaparsak o deðerler default olarak private olur. Örn: Example2
class Access{
	private:
		int age;
	protected:
		string name;
	public:
		double salary;
};

//Example2
class Access2{
	int x;
	int y;
	public:
		int z;
};

//Encapsulation Örneði: Kapsüllemenin anlamý, "hassas" verilerin kullanýcýlardan gizlendiðinden emin olmaktýr. Bunu baþarmak için, 
//sýnýf deðiþkenlerini/özniteliklerini private olarak bildirmelisiniz (sýnýfýn dýþýndan eriþilemez). Baþkalarýnýn özel bir variableýn deðerini 
//okumasýný veya deðiþtirmesini istiyorsanýz, genel get ve set yöntemleri saðlayabilirsiniz.
class Encaps{
	private:
		int salary;
	public:
		Encaps(){
			salary = 10000;
		}
		
		int getSalary(){
			return salary;
		}
		
		void setSalary(int salary){
			this->salary = salary;
			cout << "salary setted to " << this->salary;
		}
};



int main(){

	//Basit bir class örneði, obje oluþturma ve kullanma
	MyClass obje;
	
	obje.num = 15;
	obje.str = "Erhan";
	
	cout << "Objenin icindeki sayi: " << obje.num << "\nObjenin icindeki string: " << obje.str << endl;
	
	//Methodlarý çaðýrma
	SelamBot bot;
	
	bot.selamVer();
	
	bot.selamVer2("GDSC Ailesi");
	
	Mat obj;
	
	cout << obj.kareAl(5) << endl;

	//Constructors Örneði
	
	Player player1;
	Player player2("Player2",250, 250);
	
	cout << "Player1 health: " << player1.health << "\nPlayer1 armor: " << player1.armor << endl;
	cout << "Player2 health: " << player2.health << "\nPlayer2 armor: " << player2.armor << endl;
	
	//Access Specifiers Örneði
	Access accessObj;
	
	accessObj.age = 32; // Hata verecek çünkü private deðer
	accessObj.name = "Tan"; // Hata verecek çünkü protected deðer
	accessObj.salary = 110000; //Hata vermeyecek çünkü public. Dýþardan eriþilebilir.
	
	Access2 access2Obj;
	
	access2Obj.x = 10; //Hata verecek çünkü private.
	access2Obj.y = 20; //Hata verecek çünkü private.
	access2Obj.< = 30; // Hata vermeyecek çünkü public.
	
	//Encapsulation Örneði
	Encaps obj;
	
	cout << "Obj maasi: " << obj.getSalary() << endl;
	
	obj.setSalary(15000);
	
	cout << "Obj maasi: " << obj.getSalary() << endl;
	
	//Örnek Sorular
	//Örnek1: Bir student classi yaziniz. Student özellikleri: private:name,grade,letterGrade|public:Constructor, getter ve setterlar. Bu classtan 10 büyüklüðünde bir array olusturarak öðrencilerin isim ve grade bilgilerini 
	//kullanýcýdan alin. Daha sonra bu gradelere göre Harf notlarýný hesaplayýp her öðrenciye set edecek bir program yazýn. AA -> 90-100, BB-> 75-90, CC-> 60-75, DD -> 40-60, FF -> 0-40

	
	return 0;
}


























