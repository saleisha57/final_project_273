#include"Finances.h"

double Finances::making_a_profit(double days_profit)
{
	balance += days_profit;
	return balance;
}

//will subtract from balance
double Finances::paying_expenses(double days_expenses)
{
	balance -= days_expenses;
	return balance;
}

//default constructor
Finances Finances::finances()
{
	making_a_profit(profits);
	paying_expenses(expenses);
	
}