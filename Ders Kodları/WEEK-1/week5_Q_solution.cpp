//Örnek Sorular
	//Örnek1: Bir student classi yaziniz. Student özellikleri: private:name,grade,letterGrade|public:Constructor, getter ve setterlar. Bu classtan 10 büyüklüðünde bir array olusturarak öðrencilerin isim ve grade bilgilerini 
	//kullanýcýdan alin. Daha sonra bu gradelere göre Harf notlarýný hesaplayýp her öðrenciye set edecek bir program yazýn. AA -> 90-100, BB-> 75-89, CC-> 60-75, DD -> 40-60, FF -> 0-40

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Student{
	private:
		string name;
		string LetterGrade;
		int grade;
	public:
		Student(){
			name = "def";
			grade = rand() % 100 + 1;
		}
		
		string getName(){
			return name;
		}
		
		void setName(string name){
			this->name = name;
		}
		
		int getGrade(){
			return grade;
		}
		
		void setGrade(int grade){
			this->grade = grade;
		}
		string getLetterGrade(){
			return LetterGrade;
		}
		
		void setLetterGrade(string grade){
			this->LetterGrade = grade;
		}
};

string LetterGrader(int grade){
	if(grade <= 100 && grade >= 90){
		return "AA";
	}else if(grade <= 89 && grade >= 75){
		return "BB";
	}
}
int main(void){
	
	Student students[10];
	string name;
	
	for(int i = 0; i < 10; i++){
		cout<<"Name?";
		cin>>name;
		students[i].setName(name);
	}
	
	string temp;
	for(int i = 0; i < 10; i++){
		temp = LetterGrader(student[i].getGrade());
		students[i].setLetterGrade(temp);
	}
	
	return(0);
}
