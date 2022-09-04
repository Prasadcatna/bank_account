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
		std::cout<<"Enter 'B' for Banker or 'C' for Customer: ";
		std::cin>>ch;
	
		if(ch == 'B'){
			std::cout<<"Enter 's' for Savings Account\n 'c' for Current Account: ";
			std::cin>>ch;
			if(ch == 's'){
				acc = new Saving();
				//savi.write((char*)&acc,sizeof(Saving));
				//savi.close();
			}else if(ch == 'c'){
				acc = new Current();
				//curr.write((char*)&acc,sizeof(Current));
				//curr.close();
			}
		
		}else if(ch == 'C'){
			std::cout<<"Enter 's' for Savings Account\n 'c' for Current Account: ";
			std::cin>>ch;
			if(ch == 's'){
				int acNo;
				std::cout<<"Enter your Account no.: ";
				std::cin>>acNo;
				//Saving sa;
				savi.seekg(0);
				int n=0;
				while(true){
					if(savi.good()){
						n++;
						savi.read((char*)&acc, sizeof(Saving));
						
						if(acNo == acc->getAccno()){
							//savi.seekg(sizeof(Saving)*n, std::ios::beg);
							//savi.write((char*)&acc, sizeof(Saving));
							//savi.close();
							std::
						}
					}
				}
			}
		}
	}
	delete acc;
	return 0;
}
