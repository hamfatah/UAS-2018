#include<iostream>
#include<conio.h>

using namespace std;

class Musik{
	private: //membuat kelas private
	int code; //deklarasi interjer
	string penyanyi; //deklarasi string untuk perintah penyanyi
	string judul; //deklarasi string untuk perintah judul
	public: //membuat kelas publik dan membuka untuk umum
	
	Musik(int code,string penyanyi,string judul);
	int getCode(); //digunakan untuk perintah variabel
	string getPenyanyi(); //digunakan untuk perintah variabel	
	string getJudul(); //digunakan untuk perintah variabel
};

Musik::Musik(int code,string penyanyi,string judul){
	this->code=code; 
	this->penyanyi=penyanyi;
	this->judul=judul;	
}

int Musik::getCode(){
	return this->code;
	}
	string Musik::getPenyanyi(){
	return this->penyanyi;
}
	string Musik::getJudul(){
	return this->judul;
}
//output tampilan setelah di compile

int main(){
Musik musik = Musik(1307,"Ramengvrl","Ca$hmere");
cout<< "Track code	: "<<musik.getCode()<<endl;
cout<< "Penyanyi	: "<<musik.getPenyanyi()<<endl;
cout<< "Judul		: "<<musik.getJudul()<<endl;
return 0;
}

// Nama : Ilham Fatahillah
// Nim : 17.11.1590
// Prodi : S1 - Informatika
