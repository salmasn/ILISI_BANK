#include "Dollar.h"
#include "Euro.h"
#include "MAD.h"

double ILISI_Bank::Dollar::TauxEuro = 0.95;
double ILISI_Bank::Dollar::TauxMAD = 9.90;

ILISI_Bank::Dollar::Dollar(double amount)
	:Devise("Dollar", amount)
{

}

ILISI_Bank::Devise* ILISI_Bank::Dollar::ConvertTo(std::string code)
{
	Devise* res=nullptr;
	if (*this == code) {
		return this;
	}
	else if (code == "Euro") {
		this->operator/(this->TauxEuro);
		res = new Euro(this->amount);
	}
	else if (code == "MAD") {
		this->operator/(this->TauxMAD);
		res = new MAD(this->amount);
	}
	return res;
}
