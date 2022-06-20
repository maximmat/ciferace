#include <stdio.h>

int ciferace(int x) {
	int m, vysledek = 0;
	while (x > 0) {
		m = x % 10;
		vysledek = vysledek + m;
		x = x / 10;
	}

	if (vysledek > 9) vysledek = ciferace(vysledek);

	return vysledek;
}

int main() {
	int vstup = 0;

	printf("zadejte cislo: ");
	scanf_s("%d", &vstup);
	printf("Vysledek: %d", ciferace(vstup));
}
