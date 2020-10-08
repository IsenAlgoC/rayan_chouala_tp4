#include<stdio.h>
#include<stdlib.h>
int main() {
	char nom[19] = { 0 };
	char prenom[19] = { 0 };
	printf("entrer votre nom :");
	scanf_s("%s", nom,(unsigned) _countof(nom));
	printf("entrer votre prenom :");
	scanf_s(" %s", prenom,_countof(prenom));
	char sexe;
	printf("entrer votre sexe H ou F :\n");
	sexe = (char)_getch();
	if (sexe=='h') {
		printf("monsieur ");
	}
	else {
		printf("madame ");
	}
	printf("%s %s", nom, prenom);
	system("pause");
	return(EXIT_SUCCESS);

}