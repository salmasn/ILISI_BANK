#include "Client.h"
int ILISI_Bank::Client::count = 0;

ILISI_Bank::Client::Client(std::string fname, std::string lname)
	: id(++count), First_name(fname),Last_name(lname)
{
}

void ILISI_Bank::Client::afficher_Client() const
{
std::cout << std::endl << "******** Customer details***** " << std::endl;
	std::cout << "id : " << this->id << std::endl;
	std::cout << "First_name : " << this->First_name<< std::endl;
	std::cout << "Last_name : " << this->Last_name << std::endl;
}

ILISI_Bank::Client::~Client()
{
}
