#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account{
	int accNo;
	char accName[25];
	double balance;
	double depoAmt;
	public:
	Account();
	int getAccno();
	void getAcc();
	void balanceEnq();
	void deposit();
	virtual void withdraw()=0;
	//~Account();
};

#endif
#include<iostream>
