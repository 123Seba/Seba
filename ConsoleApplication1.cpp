#include <iostream>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int t1[10];

	for (int i = 0, j = 3; i < 10; i++, j += 3)
	{
		t1[i] = j;
		if (i % 2 == 0) cout << t1[i] << endl;
	}
	//___ZAD 3___________________________________________
	const int n = 20;
	int t2[n], a;
	cout << "Daj a: ", cin >> a;
	for (int i = n - 1; i >= 0; i--)
	{
		t2[i] = a;
		a -= 5;
		cout << t2[i] << endl;
	}
	cout << endl << endl;
	//___ZAD 4___________________________________________
	const int n1 = 5;
	int t3[n1], min;
	for (int i = 0; i < n1; i++)
	{
		t3[i] = rand() % 74 - 23;
		if (i == 0)			  min = t3[i];
		else if (min > t3[i]) min = t3[i];
		cout << t3[i] << endl;
	}
	cout << endl << min;

	cout << endl << endl;
	//___ZAD 5___________________________________________
	const int n2 = 10;
	int t4[n2] = { 2,3 };
	for (int i = 2; i < n2; i++)
	{
		t4[i] = t4[i - 1] + t4[i - 2];
		cout << t4[i] << endl;
	}
	cout << endl << endl;
	//___ZAD 6___________________________________________
	int t5[20] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 10; i < 20; i++) {
		t5[i] = t5[i - 10];
		cout << t5[i] << endl;		//pokazuje od t5[10]
	}
	cout << endl << endl;
	//___ZAD 7___________________________________________
	const int n3 = 5;
	int t6[n3][n3], suma = 0;
	for (int i = 0, j = 0; i < n3; i++, j++)
		t6[i][j] = 7;


	for (int i = 0, j = 0; i < n3; i++, j++)
		suma += t6[i][j];
	cout << suma << endl << endl;

	//zad 8//
	int main()
	{
		const int a = 2, b = 3;
		int A[a][b], B[a][b], W[a][b];


		//wczytanie wartości pierwszej macierzy
		for (int i = 0; i < a; i++) //pętla odpowiedzialna za wiersze
			for (int j = 0; j < b; j++) //pętla odpowiedzialna za ilość liczb w wierszu
				cin >> A[i][j]; //wczytanie elementów pierwszej macierzy

	//wczytanie wartości drugiej macierzy
		for (int i = 0; i < a; i++)
			for (int j = 0; j < b; j++)
			{
				cin >> B[i][j];
				W[i][j] = A[i][j] + B[i][j]; //dodanie do siebie macierzy A i B
			}

		//prezentacja wyniku

		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
				cout << W[i][j] << " ";
			cout << endl; //oddzielenie wierszy znakiem nowej linii
		}

		return 0;
	}