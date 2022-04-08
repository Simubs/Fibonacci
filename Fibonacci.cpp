

#include <iostream>

using namespace std;

void fibonacci(int,int,int,int);
void fibonacci(int zahl, int);
int fakultaet(int);
int fakultaet(int zahl, int ergebnis);
int quersumme(int);

int main()
{
	fibonacci(1,20);
	cout << endl << "fakultaet: " << fakultaet(5);
	cout << endl << "quersumme: " << quersumme(66);
}


void fibonacci(int startwert , int anzahl) {
	fibonacci(0, startwert, 0, anzahl);
}


void fibonacci(int vorherigeZahl, int zahl, int laufvariable, int anzahlAusgabe) {
	if (laufvariable == anzahlAusgabe -1) return;
	else if (laufvariable == 0) cout << zahl << ", ";

	int summe = vorherigeZahl + zahl;

	cout << summe << ", ";

	fibonacci(zahl, summe, ++laufvariable,anzahlAusgabe);
}

int fakultaet(int zahl) {

	return fakultaet(zahl, zahl);

}

int fakultaet(int zahl, int ergebnis) {
	if (zahl - 1 <= 0) return ergebnis;
	else {
		ergebnis *= --zahl;
		return fakultaet(zahl, ergebnis);
	}
}

int quersumme(int zahl) {
	if (zahl <= 9) return zahl;
	else {
		// return quersumme(quersumme(zahl / 10) + zahl % 10);
		return quersumme(zahl / 10) + zahl % 10;
	}
}




