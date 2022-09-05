#include "account.h"

class Saving : public Account{
	double minBal;
	public:
	Saving();
	//~Saving();
	void getMinBal();
	void withdraw();
};
