#pragma once
#include <iostream>
namespace ILISI_Bank {
	class Client
	{
	private:
		static int count;
		int id;
		std::string First_name;
		std::string Last_name;

	public:
		Client(std::string, std::string);
		void afficher_Client() const;
		~Client();
	};
}