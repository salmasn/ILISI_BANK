#pragma once
#include <iostream>
#include "Client.h"
#include "Devise.h"
#include "HistoryTransactions.h"


namespace ILISI_Bank {
	class Account
	{

	private:
		static int count; 
		int id_account;
		Client* owner;
		 
		std::string date;
	protected:	Devise* balance;
			 HistoryTransactions* history;
	public:
		Account(Client*, Devise*, std::string);
		bool crediter(Devise*, std::string);
		virtual bool transfer(Account& a, Devise* d) = 0;
		virtual bool debiter(Devise *d) = 0;
		void printAccount() const;
		~Account();


	};

};