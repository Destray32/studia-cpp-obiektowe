#include <iostream>
#include <algorithm>
#include <vector>

// Zadanie 1
///
#pragma region Zadanie 1

class kalkulator
{
private:
	int liczba1;
	int liczba2;

public:
	kalkulator(void);
	~kalkulator(void);
	int dodawanie(void);
	int odejmowanie(void);
	int mnozenie(void);
	void klawiatura(void);
};

kalkulator::kalkulator(void)
{
	this->liczba1 = 0;
	this->liczba2 = 0;
}

kalkulator::~kalkulator(void)
{
}

int kalkulator::dodawanie(void)
{
	return (this->liczba1 + liczba2);
}

int kalkulator::odejmowanie(void)
{
	return (this->liczba1 - this->liczba2);
}

int kalkulator::mnozenie(void)
{
	return (this->liczba1 * this->liczba2);
}

void kalkulator::klawiatura(void)
{
	int l1 = 0;
	int l2 = 0;
	std::cout << "Podaj pierwsza liczbe : ";
	std::cin >> l1;
	std::cout << "\nPodaj druga liczbe : ";
	std::cin >> l2;

	this->liczba1 = l1;
	this->liczba2 = l2;
}

// int main()
//{
//	kalkulator kalk;
//	kalk.klawiatura();
//	std::cout << "Wynik dodawania : " << kalk.dodawanie() << std::endl;
//	std::cout << "Wynik odejmowania : " << kalk.odejmowanie() << std::endl;
//	std::cout << "Wynik mnozenia : " << kalk.mnozenie() << std::endl;
//
//	std::cin.get();
// }
#pragma endregion

// Zadanie 2
///

#pragma region Zadanie 2

class operacje
{
private:
	int liczba1;
	int liczba2;

public:
	operacje(void);
	~operacje(void);
	int wieksza(void);
	int mniejsza(void);
	int czy_rowne(void);
	void klawiatura(void);
};

operacje::operacje(void)
{
	this->liczba1 = 0;
	this->liczba2 = 0;
}

operacje::~operacje(void)
{
}

int operacje::wieksza(void)
{
	return (this->liczba1 > this->liczba2) ? this->liczba1 : this->liczba2;
}

int operacje::mniejsza(void)
{
	return (this->liczba1 < liczba2) ? this->liczba1 : this->liczba2;
}

int operacje::czy_rowne(void)
{
	return (this->liczba1 == liczba2) ? 1 : 0;
}

void operacje::klawiatura(void)
{
	int l1 = 0;
	int l2 = 0;
	std::cout << "Podaj pierwsza liczbe : ";
	std::cin >> l1;
	std::cout << "\nPodaj druga liczbe : ";
	std::cin >> l2;

	this->liczba1 = l1;
	this->liczba2 = l2;
}

// int main()
//{
//	operacje oper;
//	oper.klawiatura();
//	std::cout << "Wieksza liczba : " << oper.wieksza() << std::endl;
//	std::cout << "Mniejsza liczba : " << oper.mniejsza() << std::endl;
//
//	if (oper.czy_rowne() == 1)
//		std::cout << "Liczby sa rowne" << std::endl;
//	else
//		std::cout << "Liczby nie sa rowne" << std::endl;
//
//	std::cin.get();
// }

#pragma endregion

// Zadanie 3
///

#pragma region Zadanie 3

class algorytmy
{
private:
	int liczba1;
	int liczba2;
	int liczba3;
	int liczba4;

public:
	algorytmy(void);
	~algorytmy(void);
	int max(void);
	int mini(void);
	int suma(void);
	int szukana(int x);
	int parzyste(void);
	void klawiatura(void);
};

algorytmy::algorytmy(void)
{
	this->liczba1 = 0;
	this->liczba2 = 0;
	this->liczba3 = 0;
	this->liczba4 = 0;
}

algorytmy::~algorytmy(void)
{
}

int algorytmy::max(void)
{
	std::vector<int> liczby = {liczba1, liczba2, liczba3, liczba4};
	return *std::max_element(liczby.begin(), liczby.end());
}

int algorytmy::mini(void)
{
	std::vector<int> liczby = {liczba1, liczba2, liczba3, liczba4};
	return *std::min_element(liczby.begin(), liczby.end());
}

int algorytmy::suma(void)
{
	int suma = 0;
	std::vector<int> liczby = {liczba1, liczba2, liczba3, liczba4};

	for (auto l : liczby)
	{
		suma += l;
	}
	return suma;
}

int algorytmy::szukana(int x)
{
	std::vector<int> liczby = {liczba1, liczba2, liczba3, liczba4};
	auto it = std::find(liczby.begin(), liczby.end(), x);

	if (it != liczby.end())
		return 1;
	else
		return 0;
}

int algorytmy::parzyste(void)
{
	int parzyste = 0;
	std::vector<int> liczby = {liczba1, liczba2, liczba3, liczba4};

	for (auto l : liczby)
	{
		if (l % 2 == 0)
			parzyste++;
	}

	return parzyste != 0 ? 1 : 0;
}

void algorytmy::klawiatura(void)
{
	std::cout << "Podaj cztery liczby : ";
	std::cin >> liczba1 >> liczba2 >> liczba3 >> liczba4;
}

// int main()
//{
//	algorytmy alg;
//	alg.klawiatura();
//	std::cout << "Maksymalna liczba : " << alg.max() << std::endl;
//	std::cout << "Minimalna liczba : " << alg.mini() << std::endl;
//	std::cout << "Suma liczb : " << alg.suma() << std::endl;
//
//	if (alg.szukana(5))
//		std::cout << "Liczba 5 znajduje sie w tablicy" << std::endl;
//	else
//		std::cout << "Liczba 5 nie znajduje sie w tablicy" << std::endl;
//
//	if (alg.parzyste())
//		std::cout << "W tablicy znajduja sie liczby parzyste" << std::endl;
//	else
//		std::cout << "W tablicy nie znajduja sie liczby parzyste" << std::endl;
// }

#pragma endregion

// Zadanie 4
///

#pragma region Zadanie 4

class trojkat
{
private:
	int podstawa;
	int bok1;
	int bok2;
	int wysokosc;

public:
	trojkat(void);
	~trojkat(void);
	int obwod(void);
	double pole(void);
	int pitagoras(void);
	int czy_rownoboczny(void);
	int czy_rownoramienny(void);
	void klawiatura(void);
};

trojkat::trojkat(void)
{
	this->podstawa = 0;
	this->bok1 = 0;
	this->bok2 = 0;
	this->wysokosc = 0;
}

trojkat::~trojkat(void)
{
}

int trojkat::obwod(void)
{
	return (this->podstawa + this->bok1 + this->bok2);
}

double trojkat::pole(void)
{
	return (this->podstawa * this->wysokosc) / 2;
}

int trojkat::pitagoras(void)
{
	return ((this->bok1 * this->bok1) + (this->bok2 * this->bok2) == (this->podstawa * this->podstawa)) ? 1 : 0;
}

int trojkat::czy_rownoboczny(void)
{
	return (this->bok1 + this->bok2 == this->podstawa) ? 1 : 0;
}

int trojkat::czy_rownoramienny(void)
{
	return (this->bok1 == bok2) ? 1 : 0;
}

void trojkat::klawiatura(void)
{
	std::cout << "Podaj kolejno podstawe, bok pierwszy, bok drugi i wysokosc : ";
	std::cin >> podstawa >> bok1 >> bok2 >> wysokosc;
}

// int main()
//{
//	trojkat trk;
//	trk.klawiatura();
//	std::cout << "Obwod trojkata: " << trk.obwod() << std::endl;
//	std::cout << "Pole trojkata: " << trk.pole() << std::endl;
//
//	if (trk.pitagoras())
//		std::cout << "Trojkat jest prostokatny" << std::endl;
//	else
//		std::cout << "Trojkat nie jest prostokatny" << std::endl;
//
//	if (trk.czy_rownoboczny())
//		std::cout << "Trojkat jest rownoboczny" << std::endl;
//	else
//		std::cout << "Trojkat nie jest rownoboczny" << std::endl;
//
//	if (trk.czy_rownoramienny())
//		std::cout << "Trojkat jest rownoramienny" << std::endl;
//	else
//		std::cout << "Trojkat nie jest rownoramienny" << std::endl;
//
// }

#pragma endregion

// Zadanie 5
///

#pragma region Zadanie 5

class prostokat
{
private:
	int bok1;
	int bok2;

public:
	prostokat(void);
	~prostokat(void);
	int obwod(void);
	int pole(void);
	int czy_kwadrat(void);
	void klawiatura(void);
};

prostokat::prostokat(void)
{
}

prostokat::~prostokat(void)
{
	this->bok1 = 0;
	this->bok2 = 0;
}

int prostokat::obwod(void)
{
	return (2 * this->bok1) + (2 * this->bok2);
}

int prostokat::pole(void)
{
	return (this->bok1 * this->bok2);
}

int prostokat::czy_kwadrat(void)
{
	return (this->bok1 == this->bok2) ? 1 : 0;
}

void prostokat::klawiatura(void)
{
	std::cout << "Podaj kolejno dlugosc pierwszego boku, dlugosc drugiego boku : ";
	std::cin >> bok1 >> bok2;
}

// int main()
// {
// 	prostokat prost;
// 	prost.klawiatura();

// 	std::cout << "Obwod prostokata: " << prost.obwod() << std::endl;
// 	std::cout << "Pole prostokata: " << prost.pole() << std::endl;

// 	if (prost.czy_kwadrat())
// 		std::cout << "Prostokat jest kwadratem" << std::endl;
// 	else
// 		std::cout << "Prostokat nie jest kwadratem" << std::endl;
// }

#pragma endregion

// Zadanie 6
///

#pragma region Zadanie 6

typedef struct
{
	double x1;
	double x2;
} wynik;

class rownanie
{
private:
	int a;
	int b;
	int c;

public:
	rownanie(void);
	~rownanie(void);
	void klawiatura(void);
	int delta(void);
	double jeden(void);
	wynik dwa(void);
};

rownanie::rownanie(void)
{
	this->a = 0;
	this->b = 0;
	this->c = 0;
}

rownanie::~rownanie(void)
{
}

void rownanie::klawiatura(void)
{
	std::cout << "Podaj kolejno a, b, c : ";
	std::cin >> a >> b >> c;
}

int rownanie::delta(void)
{
	int delta = (this->b * this->b) - (4 * this->a * this->c);

	if (delta > 0)
		return 1;
	else if (delta == 0)
		return 0;
	else
		return -1;
}

double rownanie::jeden(void)
{
	return (-this->b) / (2 * this->a);
}

wynik rownanie::dwa(void)
{
	int delta = (this->b * this->b) - (4 * this->a * this->c);
	wynik miejca_zerowe = {0.0, 0.0};

	miejca_zerowe.x1 = ((-this->b) - (delta * 1 / 2) / (2 * this->a));
	miejca_zerowe.x2 = ((-this->b) + (delta * 1 / 2) / (2 * this->a));

	return miejca_zerowe;
}

// int main(int argc, char **argv)
// {
// 	rownanie r;
// 	r.klawiatura();
// 	if (r.delta() == -1)
// 		std::cout << "nie ma miejsc zerowych" << std::endl;
// 	else if (r.delta() == 0)
// 	{
// 		std::cout << "jest jedno miejsce zerowe" << std::endl;
// 		std::cout << "x= " << r.jeden();
// 	}
// 	else
// 	{
// 		std::cout << "sa dwa miejsca zerowe" << std::endl;
// 		wynik temp;
// 		temp = r.dwa();
// 		std::cout << "x1= " << temp.x1 << std::endl;
// 		std::cout << "x2= " << temp.x2 << std::endl;
// 	}
// 	return 0;
// }

#pragma endregion

// Zadanie 7
///

#pragma region Zadanie 7

class pojemnosc
{
private:
	int podstawa1;
	int podstawa2;
	int wysokosc;

public:
	pojemnosc(void);
	~pojemnosc(void);
	int prostopadloscian(void);
	void klawiatura(void);
};

pojemnosc::pojemnosc(void)
{
	this->podstawa1 = 0;
	this->podstawa2 = 0;
	this->wysokosc = 0;
}

pojemnosc::~pojemnosc(void)
{
}

int pojemnosc::prostopadloscian(void)
{
	return (this->podstawa1 * this->podstawa2) * this->wysokosc;
}

void pojemnosc::klawiatura(void)
{
	std::cout << "Podaj kolejno - dlugosci podstawy pierwszej i drugiej a następnie wysokość: \n";
	std::cin >> podstawa1 >> podstawa2 >> wysokosc;
}

// int main(int argc, char **argv)
// {
// 	pojemnosc *pr = new pojemnosc;
// 	pr->klawiatura();
// 	std::cout << "objetosc prostopadloscian " << pr->prostopadloscian() << std::endl;
// 	delete pr;

// 	return 0;
// }
#pragma endregion
