#include <exception>
#include <string>
#include <iostream>

#include "exception.h"

#define EXC nsUtil::CException

using namespace std;
using namespace nsUtil;

EXC::CException (const string & libelle,
                unsigned codErr)
                : Libelle (libelle), CodErr (codErr) {}

const char * EXC::what (void) const noexcept
{
    return Libelle.c_str ();
}

string   EXC::getLibelle (void) const { return Libelle; }
unsigned EXC::getCodErr  (void) const { return CodErr;  }

void  EXC::display    (void) const
{
    cout << "Exception : " << Libelle << endl;
    cout << "Code      : " << CodErr  << endl;

}

#undef EXC

