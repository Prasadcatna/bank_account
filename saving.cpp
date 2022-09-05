#include "saving.h"

Saving :: Saving(){
	std::cout<<"Enter minimum Balance: ";
	std::cin>>minBal;
}

void Saving :: getMinBal(){
	std::cout<<"Minimum Balance is: "<<minBal<<std::endl;
}

void Saving :: withdraw(){
	double ba = balance - minBal;
	double wdAmt;
	std::cout<< "Enter Amount to be Withdraw: ";
	std::cin>>wdAmt;
	if(ba > wdAmt ){
		balance -= wdAmt;
	}else if(balance == 0){
		std::cout<<"There is no Fund in you'r Account\n";
	}else{
		std::cout<<"You'r existing the Minimum Balance limit\n Do you want to continue(y/n)";
		char ch;
		std::cin>>ch;
		if(ch == 'y'){
			balance -= wdAmt;
		}else if(ch == 'n'){
			std::cout<<"Thank you";
		}
	}
}


