//============================================================================
// Name        : demo2.cpp
// Author      : xz
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "namesp.h";

int main() {
	using debts::Debt;
	using debts::showDebt;
	Debt golf = {{"xie","zheng"},120.0};
	showDebt(golf);
	showPerson(golf.name);
	return 0;
}


