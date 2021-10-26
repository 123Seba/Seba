
#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	//Zad 1 //

	float a = -1, b = 2, x;
	//cout << "Podaj a: ", cin >> a;
	//cout << "Podaj b: ", cin >> b;

	if (a == 0)
		cout << "rownanie sprzeczne\n";
	else
		cout << "x= " << -b / a << endl;


	//zad 2//


	float c = 1, delta;
	delta = b * b + 4 * a * c;

	if (a != 0) {
		if (delta < 0) " brak rownania ";
		if (delta == 0) " jedno rozw\n";
		if (delta > 0) " dwa rozw\n ";
	}

	else  cout << "funckja liniowa  lub sprzeczna \n>>";

	//zad 3 //
	float  deltaS;
	deltaS = sqrt(b * b + 4 * a * c);
	if (a != 0) {
		if (delta < 0) cout << " brak rozw\n ";
		if (delta == 0)  cout << -b / (2 * a);
		if (delta > 0) cout << "  x1 = " << (-b - deltaS) / (2 * a) << " x2 =" << (-b + deltaS) / (2 * a);

		else  cout << "funckja liniowa  lub sprzeczna \n>>";


	}



	//zad 4 //

	cout << "podaj x : ", cin >> x;
	if (x < 0)              cout << " x = " << -3 * x << "\t";
	else if (x == 0)      cout << "x =" << 0 << "\t";
	else if (x > 0)         cout << " x =" << 2 * x << "\t";
	//b(X)
	if (x >= -1)            cout << " x = " << pow(x, 2) << "\t";
	else           cout << "x =" << x << "\t";

	//c(X)

	if (x < 2)           cout << " x = " << x - 4 << "\t";
	else if (x == 2)    cout << "x =" << 8 << "\t";
	else if (x > 2)      cout << " x =" << 2 + x << "\t";

	//zad 5//
	cout << " podaj 3 liczby ", cin >> a >> b >> c;

	if (a >= b && a >= c)
		if (b >= c) cout << "a\tb\tc";
		else cout << "a\tc\tb";

	else if (b >= a && b >= c)
		if (a >= c) cout << "b \ta\tc ";
		else cout << "b\tc\ta";

	else if (c >= a && c >= b)
		if (a >= b) cout << "c \ta\tb ";
		else cout << "c\tb\ta";



	//zad 6//
	
	bool deszcz, autobus;
	cout << "Napisz czy pada: \t", cin >> deszcz;
	cout << "Napisz czy autobus: \t", cin >> autobus;

	if (deszcz && autobus)         cout << "Wez parasol \t" << "Dostaniesz sie na uczelnie \n";
	else if (deszcz && !autobus) cout << "Nie dostaniesz sie na uczelnie \n";
	else if (!deszcz && autobus) cout << "Dostaniesz sie na uczelnie\t" << "Milego dnia i pieknej pogody \n";

	//zad 7//
	cout << "\n\n\nZad 7:\n";
	bool znizka, premia;
	cout << "Napisz .......: \t", cin >> znizka;
	cout << "Napisz ...........a: \t", cin >> premia;
	if (!znizka  premia)         cout << "Mozesz kupic samochod ! \t" << "Znizki na samochod nie ma  \n";
	if (!znizka  !premia)      cout << "Zakup samochod trzeba odlozyc na pozniej... \t" << "Znizki na samochod nie ma \n";
	if (znizka  premia)        cout << "Mozesz kupic samochod ! \n";

	cout << endl << endl;
	if (znizka  premia)        cout << "Mozesz kupic samochod ! \n";
	if (!znizka  !premia)      cout << "Zakup samochod trzeba odlozyc na pozniej... \n";
	if (!znizka)                 cout << "Znizki na samochod nie ma \n";

	cout << endl << endl;
	if (znizka  premia)        cout << "Mozesz kupic samochod ! \n";
	else if (!znizka && !premia) cout << "Zakup samochod trzeba odlozyc na pozniej... \n";
	if (!znizka)                cout << "Znizki na samochod nie ma \n";
	wybierz jedno lub dwa z tych trzech,
 

		



return 0;
}
