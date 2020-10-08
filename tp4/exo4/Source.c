#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int longueur = 0;
	char mot[20] = { 0 };
	int i = 0;
	int a = 0;
	int b = 0;
	printf("entrer un mot : \n");
	scanf_s("%s", mot, _countof(mot));
	longueur = strlen(mot);
	if (longueur % 2 == 0) {
		for (i = 0; i < (longueur / 2); ++i) {
			if (mot[i] == mot[longueur - i - 1]) {
				a = a + 1;
			}
		}
	}
	if ((longueur / 2) == a) {
		printf("c'est un palindrome\n");
	}
	if (longueur % 2 == 1) {
		for (i = 0; i < (longueur / 2); ++i) {
			if (mot[i] == mot[longueur - i - 1]) {
				b = b + 1;
			}
		}
	}
	if ((longueur / 2) == b) {
		printf("c'est un palindrome\n");
	}
	if ((longueur / 2) != b && (longueur / 2) != a){
		printf("ce n'est pas un palindrome\n");

}

	system("pause");
	return(EXIT_SUCCESS);
}