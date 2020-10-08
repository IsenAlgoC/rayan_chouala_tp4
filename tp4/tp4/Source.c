#include<stdio.h>
#include<stdlib.h>
#include"tp4.h"

int main() {
	int heure;
	int minute;
	HEURE heuredebut;
	HEURE heurefin;
	HEURE duree;
	heuredebut.heure = 12;
	heuredebut.minute = 30;
	duree.heure = 0;
	duree.minute = 45;
	heurefin.heure= heuredebut.heure + duree.heure ;
	heurefin.minute = duree.minute + heuredebut.minute;
	if ((heurefin.minute / 60) > 0) {
		heurefin.minute = heurefin.minute%60;
		heurefin.heure = heurefin.heure + 1;
	}
	printf("l'heure final vaut %.2d : %.2d\nl'heure initial vaut %.2d : %.2d\nla duree vaut %.2d: %.2d\n", heurefin.heure, heurefin.minute,heuredebut.heure,heuredebut.minute,duree.heure,duree.minute);
	system("pause");
	return(EXIT_SUCCESS);
 }