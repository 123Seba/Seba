#include <iostream>

using namespace std;

int main()
{
	////	////ctrl+k+c-komenda kodu ctrl+k+u-odkomentowanie kodu
	////	//int nr_albumu = 65573;
	////	//string nr_albumu1 = "w65573";
	////	//cout << "Nr albumu " << nr_albumu << endl;
	////	//cout << "Nr albumu " << nr_albumu1 << endl;
	////
	////
	////	int a, b;//deklaracja zmiennych
	//////wczytywanie danych  z klawiatury
	////	cout << "Podaj a :", cin >> a;
	////	//cout <<"podaj b;:,cin>>b;
	////
	////	if (a%2==0) {
	////		cout << "Liczba parzysta\n";
	////		cout << "kolejna linia tekstu\n";
	////	}
	////
	////	else {
	////	}
	////
	////
	////}
	//// 
	////int main()
	////{
	////	//
	////	float a, b;//deklaracja zmiennych
	////	//wczytywanie danych  z klawiatury
	////	cout << "Podaj a :", cin >> a;
	////	//cout <<"podaj b;:,cin>>b;
	////
	////	if (a == b) {
	////		cout << "Liczby sa rowne\n";
	////	}
	////	else if (a > b)
	////		cout << "a jest wieksze " << endl;
	////	
	////
	////	else cout << "b jest wieksze\n";
	////
	////
	////}
	// 

	/*int main() {
	float a, b, c, d, srednia;
	std::cout << "Podaj liczbe a ";
	std::cin >> a;
		std::cout << "Podaj liczbe b ";
		std::cin >> b;
		std::cout << "Podaj liczbe c ";
		std::cin >> c;
		std::cout << "Podaj liczbe d ";
		std::cin >> d;
srednia = (a + b + c + d) / 4;
std::cout << "Srednia arytmeyczna liczb to = " << srednia << endl;
return 0;
}
*/

	int a = 1, b = 12, wybor;
	cout << "/n==============\n";
	cout << "\n1.Suma\n2.Roznica\,3.iloczyn\n4. Iloraz";
	cout << "wybierz dzialanie ", cin >> wybor;
	switch (wybor)
	{
	case 1:
		cout << "Suma :" << a << " + " << b << "=" << a + b << endl;
		break;
	case 2:
		cout << "Roznica :" << a << " - " << b << " = " << a - b << endl;
		break;
	case 3:
		cout << "Iloraz :" << a << " * " << b << " = " << a * b << endl;
		break;
	case 4:
		cout << "Iloraz :" << a << " / " << b << " = " << a / b << endl;
		break;
	default:
		cout << "Nie ma takiej opcji\n";
		break;
	}
}
//}
//
//
//		
