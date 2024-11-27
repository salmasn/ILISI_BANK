#pragma once
#include "Devise.h"
namespace ILISI_Bank {
	class Euro : public Devise
	{
	private:
		static double TauxMAD;
		static double TauxDollar;
	public: 
		Euro(double);
		Devise* ConvertTo(std::string code) override;
	};
};
