#include "account.h"

class Current : public Account{
	int od_limit;
	public:
	Current();
	//~Current();
	void withdraw();
};
