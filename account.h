#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account{
	int accNo;
	char accName[25];
	double depoAmt;
	protected:
	double balance;
	char accType[25];
	public:
	Account();
	void setAccTypeS();
	void setAccTypeC();
	int getAccno();
	int getBalance();
	void getAcc();
	void balanceEnq();
	void deposit();
	virtual void withdraw()=0;
	//~Account();
};

#endif
#include<iostream>
