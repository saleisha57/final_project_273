#ifndef _FINANCE_H_
#define _FINANCE_H_

class Finances
{
private:
	//the amount of profits that were made in a cycle to be added to the balance
	double profits;
	//the amount of expenses that were made in a cycle to be subtracted from the balance
	double expenses;
	//the overall balance of the store
	double balance;

public:
	//get balance
	double getBalance() { return balance; }
	//set balance
	void setBalance(double Balance) { balance = Balance; }

	//get profits
	double getProfits() { return profits; }
	//set profits
	void setProfits(double Profits) { profits = Profits; }

	//get expenses
	double getExpenses() { return expenses; }
	//set expenses
	void setExpenses(double Expenses) { expenses = Expenses; }

	//will add to balance
	double making_a_profit(double);
	//will subtract from balance
	double paying_expenses(double);

	//default constructor
	Finances finances();

};


#endif
