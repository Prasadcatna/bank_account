#include "saving.h"

Saving :: Saving(){
	std::cout<<"Enter minimum Balance: ";
	std::cin>>minBal;
}

void Saving :: getMinBal(){
	std::cout<<"Minimum Balance is: "<<minBal<<std::endl;
}

void Saving :: withdraw(){
	std::cout<<"Saving withdraw";
}


