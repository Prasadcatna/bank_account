#include<iostream>
#include<cstring>
#include "account.h"

Account :: Account(){
	std::cout<<"Enter Account No.: ";
	std::cin>>accNo;
	std::cout<<"Enter Account Holder Name: ";
	std::cin>>accName;
	std::cout<<"Enter Balance: ";
	std::cin>>balance;
	std::cout<<"\n";
}

int Account :: getAccno(){
	return accNo;
}

int Account :: getBalance(){
	return balance;
}

void Account :: balanceEnq(){
	std::cout<<"Current Balance: "<<balance<<std::endl;
}

void Account :: deposit(){
	std::cout<<"Enter the amount to be deposit: ";
	std::cin>>depoAmt;
	balance = balance + depoAmt;
}

void Account :: setAccTypeS(){
	strcpy(accType,"Savings");
}

void Account :: setAccTypeC(){
	strcpy(accType,"Current");
}

void Account :: getAcc(){
	std::cout<<"Account No.: "<<accNo<<std::endl;
	std::cout<<"Account Holder Name: "<<accName<<std::endl;
	std::cout<<"Account Type: "<<accType<<std::endl;
	std::cout<<"Balance:"<<balance<<std::endl;
}

