#include "Dead.h"
#include "Graveyard.h"
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <iterator> 
#include <unistd.h>
#include <string>
#include <vector>
#define INTERVAL 100000
int randomValue2()
{
	return 20 + rand() % 75;
}

string Dead::chosename()
{
	string nam[8] = { "Marcin","Wojciech","Patrycja","Anna","Hanna","Piotr","Krzysztof","Maciej"};
	int i = rand() % 8;
	string temp = nam[i];
	return temp;
}
string Dead::schosename()
{
	string snam[11] = { "A.","B.","C.","D.","E.","F.","G.","H.","W.","J.","K."};
	int i = rand() % 11;
	string temp = snam[i];
	return temp;
}


Dead::Dead()
{   _sname= schosename();
	_name = chosename() ;
	_wealth = randomValue2();
	_age = randomValue2();
}

string Dead::description()
{
	//usleep(INTERVAL);
	_variable = 10;//zmienna mowiaca o tym ile zaplacono za pogrzeb(mozna uzaleznic od statystyk cmentarza)
	return _name +" "+ _sname +" [19"+to_string (_age) + " - 2016]"+ ":\n" +
		"Zamoznosc: " + to_string(_wealth) +"   ("+ to_string(_wealth* _variable) +"zl)\n";
		
}

