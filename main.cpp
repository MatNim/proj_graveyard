#include "Graveyard.h"
#include "Dead.h"
//#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
//#include <windows.h>




int main(int argc, char const *argv[])
{
	int month = 1;
	
	int number = 0;
	srand(argc == 2
		? atoi(argv[1])
		: time(NULL));


	printf("                            GRAVEYARD SIMULATOR 2016\n\n\nMenu:\n1-Losowy cmentarz\n2-Wlasny cmentarz \n3-Koniec\n");
	//Beep(200, 500);
	//Beep(250, 500);
	//Beep(300, 500);
	//Beep(200, 500);

	cin >> number;
	switch (number)
	{
	case 1: {system("clear");
		//Beep(400, 400);
		//Beep(500, 600);
		Graveyard Graveyard(number, "a", 1, 2, 3, 4);
		Graveyard.simulation(Graveyard);
		break;}
	case 2:
	{printf("wprowadz nazwe cmentarza\n");
	string customname;
	cin >> customname;
	printf("wprowadz parametr personelu X/100\n");
	int custompersonel;
	cin >> custompersonel;
	while (custompersonel > 100)
	{
		cout << "Za duza liczba\n wprowadz parametr personelu X/100\n";
		cin >> custompersonel;
	}
	printf("wprowadz parametr reputacji X/100\n");
	int customreputation;
	cin >> customreputation;
	while (customreputation > 100)
	{
		cout << "Za duza liczba\n wprowadz parametr reputacji X/100\n";
		cin >> customreputation;
	}
	printf("wprowadz maksymalna liczbe grobow\n");
	int custommax;
	cin >> custommax;
	printf("wprowadz pieniadze startowe\n");
	int custommoney;
	cin >> custommoney;
	
	
	system("clear");
	//Beep(400, 400);
	//Beep(500, 600);
	Graveyard Graveyard(number, customname, custommax, custommoney, custompersonel, customreputation);
	Graveyard.simulation (Graveyard);
	}
	break;
	}
	
	
	printf("Koniec");
	//Beep(200, 500);
	//Beep(300, 500);
	//Beep(250, 500);
	//Beep(200, 500);
	}
