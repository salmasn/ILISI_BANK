#include "Euro.h"
#include "Dollar.h"
#include "MAD.h"

double ILISI_Bank::Euro::TauxDollar = 0.95;
double ILISI_Bank::Euro::TauxMAD = 10.67;

ILISI_Bank::Euro::Euro(double amount)
	:Devise("Euro", amount)
{

}

ILISI_Bank::Devise* ILISI_Bank::Euro::ConvertTo(std::string code)
{
	Devise* res=nullptr;
	if (*this == code) {
		return this;
	}
	else if (code == "Dollar") {
		this->operator/(this->TauxDollar);
		res = new Dollar(this->amount);
	}
	else if (code == "MAD") {
		this->operator/(this->TauxMAD);
		res = new MAD(this->amount);
	}
	return res;
}
