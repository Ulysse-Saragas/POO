#include <iostream>
#include "exception.h"
#include <exception>
#include <string>

using namespace std;
using namespace nsUtil;

void TestException ()
{
    string libelle;
    unsigned codErr;
    for (;;)
    {
        cout << "Entrer un libelle : ";
        getline (cin, libelle);
        if (cin.fail())
            return;
        cout << endl;
        cout << "Entrer un Code Erreur : ";
        cin >> codErr;
        CException CEx (libelle, codErr);
        CEx.display();
    }
}

int main()
{
    TestException();
}
