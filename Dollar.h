#pragma once
#include "Devise.h"
namespace ILISI_Bank {
    class Dollar : public Devise
    {
    private:
        static double TauxEuro;
        static double TauxMAD;
    public : 
        Dollar(double m);
        Devise* ConvertTo(std::string code) override;
    };
};
