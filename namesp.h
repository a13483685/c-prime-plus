/*
 * namesp.h
 *
 *  Created on: 2018-4-17
 *      Author: xiezheng
 */

#ifndef NAMESP_H_
#define NAMESP_H_

#include <string>
namespace pers
{
	struct person
	{
		std::string fname;
		std::string lname;
	};
	void getPerson(person &);
	void showPerson(const person &);
};


namespace debts {
	using namespace pers;
	struct Debt {
		person name;
		double amount;
	};
	void getDebt(Debt &);
	void showDebt(const Debt &);
	double sunDebts(const Debt ar[],int n);
};
#endif /* NAMESP_H_ */
