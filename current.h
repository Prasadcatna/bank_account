#include "account.h"

class Current : public Account{
	double od_limit;
	public:
	Current();
	//~Current();
	void withdraw();
};
