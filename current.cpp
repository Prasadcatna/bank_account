#include "current.h"

Current :: Current(){
	std::cout<<"Enter overdraft limit: ";
	std::cin>>od_limit;
}

void Current :: withdraw(){
	std::cout<<"Current withdraw";
}
