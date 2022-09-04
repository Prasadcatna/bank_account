#include<iostream>
#include "account.h"

Account :: Account(){
	std::cout<<"Enter Account No.: ";
	std::cin>>accNo;
	std::cout<<"Enter Account Name: ";
	std::cin>>accName;
	std::cout<<"Enter Balance: ";
	std::cin>>balance;
	std::cout<<"\n";
}

int Account :: getAccno(){
	std::cout<<"Hello";
	return accNo;
}

void Account :: balanceEnq(){
	std::cout<<"Current Balance: "<<balance<<std::endl;
}

void Account :: deposit(){
	std::cout<<"Enter the amount to be deposit: ";
	std::cin>>depoAmt;
	balance = balance + depoAmt;
}

void Account :: getAcc(){
	std::cout<<"Account No.: "<<accNo<<std::endl;
	std::cout<<"Account Name: "<<accName<<std::endl;
	std::cout<<"Balance:"<<balance<<std::endl;
}

