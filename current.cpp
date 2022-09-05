#include "current.h"

Current :: Current(){
	std::cout<<"Enter overdraft limit: ";
	std::cin>>od_limit;
}

void Current :: withdraw(){
	// double ba = balance + od_limit;
	double wdAmt;
	std::cout<< "Enter Amount to be Withdraw: ";
	std::cin>>wdAmt;
	if(balance > wdAmt ){
		balance -= wdAmt;
	}
	else if(balance == 0){
		std::cout<<"There is no Fund in you'r Account\n";
	}else{
		std::cout<<"You'r existing the OverDraft limit\n Do you want to continue(y/n)";
		char ch;
		std::cin>>ch;
		if(ch == 'y'){
			balance +=od_limit;
			balance -= wdAmt;
		}else if(ch == 'n'){
			std::cout<<"Thank you";
		}
	}
}
