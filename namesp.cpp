/*
 * namesp.cpp
 *
 *  Created on: 2018-4-17
 *      Author: xiezheng
 */

#include <iostream>
#include "namesp.h"

namespace pers {
	using std::cin;
	using std::cout;
	void getPerson(person & per) {
		cout << "请输入姓氏 ： ";
		cin >> per.fname;
		cout << "请输入人名 ： ";
		cin >> per.lname;
	}
	void showPerson(const person &per) {
		std::cout << per.lname << per.fname;
	}

}


namespace debts {
	using std::cout;
	void getDebt(Debt & debt){
		getPerson(debt.name);
		std::cout << "Enter debt:";
		std::cin >> debt.amount;
	}
	void showDebt(const Debt & debt){
		showPerson(debt.name);
		cout << ": $" << debt.amount << std::endl;
	}
	double sunDebts(const Debt ar[],int n){
		int i;
		double sum;
		for (i=0;i > n;i++)
		{
			sum +=ar[i].amount;
		}
		return sum;
	}

}  // namespace debts
