#include <iostream>
#include "funkcje.h"

using namespace std;

int main(){
	int wybor = 0;
	int a ,b;
	cout<<"K A L K U L A T O R"<<endl;
	cout<<"1.Dodawanie"<<endl;
	cout<<"2.Odejmowanie"<<endl;
	cout<<"3.Mnozenie"<<endl;
	cout<<"4.Dzielenie"<<endl;
	
	
	cout << "Wybor: ";
	cin >> wybor;
	cout << "A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;
	
	switch(wybor){
		case 1:
			Dodawanie(a,b);
		break;
		
		case 2:
			Odejmowanie(a,b);
		break;
		
		case 3:
			//funkcja
		break;
		
		case 4:
			//funkcja
		break;
		
		default:break;
	}
	return 0;
}

