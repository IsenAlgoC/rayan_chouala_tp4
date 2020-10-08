#include<stdio.h>
#include<stdlib.h>
#define SEPARATEUR '/'
#define TAILLETAB1 20

int main() {
	int Tab[TAILLETAB1];
	int i=1;
	int *Myptr1;
	int z;
	for (i = 0; i < 20; ++i) {
		Tab[i] = i + 1;
		printf("%u/", Tab[i]);
	}
	printf("\n");
	for (i = 19; i > -1; --i) {
		Myptr1 = &Tab[i];
		z = *Myptr1;
		printf("%u/", z);

	}
	system("pause");
	return(EXIT_SUCCESS);
}
