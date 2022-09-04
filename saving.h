#include "account.h"

class Saving : public Account{
	int minBal;
	public:
	Saving();
	//~Saving();
	void getMinBal();
	void withdraw();
};
