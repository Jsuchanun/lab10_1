#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	if (!source) {
		cout << "Error: Unable to open cheerbook.txt" << endl;
		return 1;
	}
	if (!dest) {
		cout << "Error: Unable to open cheerbook_copy.txt" << endl;
		return 1;
	}
	
	dest << "-------------------- BOOM ---------------------" << endl;
	
	string line;
	while (getline(source, line)) {
		dest << line << endl;
	}
	
	dest << "-------------------- HA!! ---------------------" << endl;
	
	//กรอก Code เฉพาะส่วนนี้ ให้สอดคล้องกับโจทย์และ Code ส่วนอื่น ๆ 
	//โดยห้ามแก้ไข Code ในส่วนอื่น ๆ

    source.close();
    dest.close();
	return 0;
}
