// ILISI_Bank.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Account.h"
#include "Client.h"
#include "Devise.h"
#include "MAD.h"
#include "Euro.h"
#include "Dollar.h"
#include "Current_Account.h"


using namespace ILISI_Bank;
int main()
{
     Client* c1 = new Client("C1", "C1");
     Client* c2 = new Client("C2", "C2");
      Devise* b1 = new MAD(1000);
      Devise* b2 = new MAD(3000);
      Account* A1 = new Current_Account(c1, b1, "25102024");
      Account* A2 = new Current_Account(c2, b2, "25102024");
      Current_Account* A3;
      Devise* d2 = new Euro(20000);
      Devise* d3 = new Dollar(3000);

      A1->printAccount();
      A2->printAccount();

      A1->crediter(d2,"25102024");
      A1->debiter(d3);
      A1->transfer(*A2, d3);
      //A3->transfer(*A2, d3);
      A1->printAccount();
      A2->printAccount();

      delete c1, b1,b2, A1, A2, c2, d2,d3;

}
