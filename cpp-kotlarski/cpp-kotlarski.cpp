#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>

void zadanieJeden()
{
	std::string liczby = "";
	int suma = 0;

	std::cin >> liczby;

	for (int i = 0; i < liczby.length(); i += 2)
	{
		std::cout << liczby[i] << '\n';
		suma += liczby[i] - '0';

		if (liczby[i] == '0')
			break;
	}
	std::cout << "Suma = " << suma << '\n';
}

void zadanieDrugie()
{
	bool czyPitagoras = false;
	int* p_podstawa = new int;
	int* p_bokJeden = new int;
	int* p_bokDwa = new int;

	std::cin >> *p_podstawa;
	std::cin >> *p_bokJeden;
	std::cin >> *p_bokDwa;

	std::cout << *p_podstawa << ' ' << *p_bokJeden << ' ' << *p_bokDwa << '\n';

	int kwadratPodst = (*p_podstawa) * (*p_podstawa);
	int kwadratBokJed = (*p_bokJeden) * (*p_bokJeden);
	int kwadratBokDwa = (*p_bokDwa) * (*p_bokDwa);

	//std::cout << "\ntest\n";
	//std::cout << kwadratPodst << ' ' << kwadratBokJed << ' ' << kwadratBokDwa;


	if (kwadratPodst + kwadratBokJed == kwadratBokDwa)
		std::cout << "Trojkat jest pitagorejski\n";
	else
		std::cout << "Trojkat nie jest pitagorejski\n";

	if (*p_podstawa == *p_bokJeden && *p_podstawa == *p_bokDwa)
		std::cout << "Trojkat jest rownoboczny\n";
	else
		std::cout << "Trojkat nie jest rownoboczny\n";

	if (*p_bokJeden == *p_bokDwa)
		std::cout << "Trojkat jest rownoramienny\n";
	else
		std::cout << "Trojkat nie jest rownoramienny\n";

	delete p_podstawa;
	delete p_bokJeden;
	delete p_bokDwa;
}

void zadanieTrzecie()
{
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			std::cout << j * i << ',';
		}
		std::cout << '\n';
	}
}

void zadanieCzwarte()
{
	int cyfra = 0;

	std::cout << "Podaj cyfre :\n";
	std::cin >> cyfra;
	bool stan = false;

	for (int i = 0; i < cyfra; i++)
	{
		for (int j = 0; j < cyfra; j++)
		{
			if (stan == false)
				if (j % 2 != 0)
					std::cout << "1" << ',';
				else
					std::cout << "0" << ',';
			else
				if (j % 2 != 0)
					std::cout << "0" << ',';
				else
					std::cout << "1" << ',';
		}
		stan = !stan;
		std::cout << '\n';
	}
}

void zadaniePiate()
{
	std::vector<int> tablica(20);

	std::cout << "Podaj 20 cyfr, ktore maja zostac zapisane do tablicy\n";

	for (int i = 0; i < tablica.size(); i++)
	{
		int liczba = 0;
		std::cin >> liczba;
		tablica.at(i) = liczba;
	}

	std::cout << "\n\n";
	std::sort(tablica.begin(), tablica.end());


	std::cout << "Najwieksza cyfra: " << tablica[tablica.size() - 1]
		<< '\n' << "Najmniejsza cyfra: " << tablica[0] << '\n' << "Suma cyfr liczb parzystych :" <<
		[&]() -> int { int sum = 0; for (auto v : tablica) (v % 2 == 0) ? sum += v : sum += 0; return sum; }();

	std::cin.get();
}

void zadanieSzoste()
{
	int tabA[4][4] = {};
	int tabB[4][4] = {};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			switch (i)
			{
			case 0:
				tabA[i][j] = 2;
				break;
			case 1:
				tabA[i][j] = 4;
				break;
			case 2:
				tabA[i][j] = 6;
				break;
			case 3:
				tabA[i][j] = 8;
				break;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			tabB[i][j] = tabA[j][i];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << tabA[i][j];
			std::cout << ' ';
		}
		std::cout << '\n';
	}

	std::cout << '\n';
	std::cout << '\n';

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << tabB[i][j];
			std::cout << ' ';
		}
		std::cout << '\n';
	}

}

void zadanieSiodme()
{
	int tabA[4][4] = {};
	int tabB[4][4] = {};
	int tabC[4][4] = {};

	int counter = 0;
	bool stan = false;

	for (int i = 0; i < 4; i++)
	{
		counter = 0;
		for (int j = 0; j < 4; j++)
		{
			tabA[i][j] = 1;
			counter++;

			if (counter == (i + 1))
				break;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (stan)
			{
				if (j % 2 == 0)
					tabB[i][j] = 1;
			}
			else
				if (j % 2 == 1)
					tabB[i][j] = 1;
		}
		stan = !stan;
	}

	for (int i = 0; i < 4; i++)
	{
		counter = 0;
		for (int j = 0; j < 4; j++)
		{
			tabC[i][j] = (tabA[i][j] + tabB[i][j]);
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << tabA[i][j];
			std::cout << ' ';
		}
		std::cout << '\n';
	}

	std::cout << '\n';
	std::cout << '\n';

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << tabB[i][j];
			std::cout << ' ';
		}
		std::cout << '\n';
	}

	std::cout << '\n';
	std::cout << '\n';

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << tabC[i][j];
			std::cout << ' ';
		}
		std::cout << '\n';
	}

	std::cout << '\n';
	std::cout << '\n';

	std::cin.get();
}

void zadanieOsme()
{
	std::ifstream file("dane.txt");

	std::vector<int> liczby(100);
	int counter = 0;

	std::string line;
	while (std::getline(file, line))
	{
		int liczba = std::stoi(line);
		liczby.at(liczba) += 1;
	}

	for (auto v : liczby)
	{
		std::cout << '\'' << counter << '\'' << "->" << v << '\n';
		counter++;
	}

	std::cin.get();
}

void zadanieDziewiec()
{
	std::ofstream plik1("zad1.txt");
	std::ofstream plik2("zad2.txt");
	std::ofstream plik3("wynik.txt");
	int counter = 0;

	int tabA[4][4] = {};
	int tabB[4][4] = {};
	int tabSuma[4][4] = {};


	for (int i = 0; i < 4; i++)
	{
		counter = 0;
		for (int j = 0; j < 4; j++)
		{
			tabA[i][j] = 1;
			counter++;

			if (counter == (i + 1))
				break;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		counter = 0;
		for (int j = 0; j < 4; j++)
		{
			if (i == 1)
				tabB[i][j] = 3;
			if (i == 3)
				tabB[i][j] = 3;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		counter = 0;
		for (int j = 0; j < 4; j++)
		{
			tabSuma[i][j] = (tabA[i][j] + tabB[i][j]);
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			plik1 << tabA[i][j];
			plik1 << ' ';
		}
		plik1 << '\n';
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			plik2 << tabB[i][j];
			plik2 << ' ';
		}
		plik2 << '\n';
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			plik3 << tabSuma[i][j];
			plik3 << ' ';
		}
		plik3 << '\n';
	}

	std::cin.get();
}

int mnozenie(int& x, int& y)
{
	// należy użyć, deklarując dwie zmienne w main. 
	return x * y;
}

int max_tab(int t[], int n)
{
	int max = t[0];
	for (int i = 1; i < n; i++)
	{
		if (t[i] > max)
			max = t[i];
	}
	return max;

	// ciało main poniżej:

	/*int tablica[] = { 2, 4, 10, 1, 1, 2, 4, 5, 1, 3 };
	int n = sizeof(tablica) / sizeof(tablica[0]);

	std::cout << max_tab(tablica, n);*/
}

int* silnia(int* a)
{
	return 0;
}

typedef struct {
	int re; //część rzeczywista
	int im; //część urojona
}zespolona;

void zadanieTrzynaste()
{
	zespolona zs1;
	zespolona zs2;
	
	std::cout << "Wpisz czesc rzeczywista i urojona pierwszej liczby zespolonej: ";
	std::cin >> zs1.re;
	std::cin >> zs1.im;
	
	std::cout << "Wpisz czesc rzeczywista i urojona drugiej liczby zespolonej: ";
	std::cin >> zs2.re;
	std::cin >> zs2.im;
	
	std::cout << "Suma liczb zespolonych wynosi: " << zs1.re + zs2.re 
		<< " + " << zs1.im + zs2.im << "i" << '\n';

	std::cin.get();
}

typedef struct {
	int wysokosc;
	int szerokosc;
}prostokat;

void zadanieCzternaste()
{
	prostokat* p_p1 = new prostokat;
	int wys = 0;
	int szer = 0;
	int pole = 0;
	int obwod = 0;
	
	std::cout << "Podaj wysokosc prostokata: ";
	std::cin >> wys;
	std::cout << "Podaj szerokosc prostokata: ";
	std::cin >> szer;

	p_p1->wysokosc = wys;
	p_p1->szerokosc = szer;

	pole = p_p1->szerokosc * p_p1->wysokosc;
	obwod = (p_p1->szerokosc * 2) + (p_p1->wysokosc * 2);

	for (int i = 0; i < wys; i++)
	{
		for (int i = 0; i < szer; i++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}

	std::cout << "\n\n Pole: " << pole << "\n Obwod: " << obwod << "\n";
	
	std::cin.get();
	delete p_p1;
}

int main()
{
	
}

