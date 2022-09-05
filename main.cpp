#include "account.h"
#include "saving.h"
#include "current.h"
#include<iostream>
#include<fstream>

int main(){
	std::fstream savi("savings.bin", std::ios::app|std::ios::in|std::ios::binary);
	std::fstream curr("current.bin", std::ios::app|std::ios::in|std::ios::binary);
	Account* acc;
	while(true){
		char ch;
		std::cout<<"Enter 'B' for Banker \n 'C' for Customer \n 'b' for Balance Enq ";
		std::cin>>ch;
	
		if(ch == 'B'){
			std::cout<<"Enter 's' for Savings Account\n 'c' for Current Account: ";
			std::cin>>ch;
			if(ch == 's'){
				acc = new Saving();
				acc->setAccTypeS();
				std::cout<<"Account Created Succefully!!\n";
				std::cout<<"-----------------------------\n";
				acc->getAcc();
				std::cout<<"-----------------------------\n";
			}else if(ch == 'c'){
				acc = new Current();
				acc->setAccTypeC();
				std::cout<<"Account Created Succefully!!\n";
				std::cout<<"-----------------------------\n";
				acc->getAcc();
				std::cout<<"-----------------------------\n";
			}
		
		}else if(ch == 'C'){
			std::cout<<"Enter 's' for Savings Account\n 'c' for Current Account: ";
			std::cin>>ch;
			if(ch == 's'){
				int acNo;
				std::cout<<"Enter your Account no.: ";
				std::cin>>acNo;
				if(acNo == acc->getAccno()){
					std::cout<<"Enter 'd' for Deposit 'w' for withdraw: ";
					std::cin>>ch;
					if(ch == 'd'){
						acc->balanceEnq();
						acc->deposit();
						acc->balanceEnq();
						std::cout<<"-----------------------------\n";
					}else if(ch == 'w'){
						acc->balanceEnq();
						acc->withdraw();
						std::cout<<"Withdraw Successfully!!\n";
						acc->balanceEnq();
						std::cout<<"-----------------------------\n";
					}
				}
			}else if(ch == 'c'){
				int acNo;
				std::cout<<"Enter your Account no.: ";
				std::cin>>acNo;
				if(acNo == acc->getAccno()){
					std::cout<<"Enter 'd' for Deposit 'w' for withdraw: ";
					std::cin>>ch;
					if(ch == 'd'){
						acc->balanceEnq();
						acc->deposit();
						acc->balanceEnq();
						std::cout<<"-----------------------------\n";
					}else if(ch == 'w'){
						acc->balanceEnq();
						acc->withdraw();
						std::cout<<"Withdraw Successfully!!\n";
						acc->balanceEnq();
						std::cout<<"-----------------------------\n";
					}
				}
			}
		}else if(ch == 'b'){
			int acNo;
			std::cout<<"Enter your Account no.: ";
			std::cin>>acNo;
			
			if(acNo == acc->getAccno()){
				acc->balanceEnq();
			}else{
				std::cout<<"There is no account with this Account number: '"<<acNo<<"'\n";
			}
		}
	}//while ends
	delete acc;
	return 0;
}
