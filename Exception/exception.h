#ifndef __EXCEPTION_H__
#define __EXCEPTION_H__

#include <exception>
#include <string>

using namespace std;

namespace nsUtil
{
    class CException : public exception
    {
        string Libelle;
        unsigned CodErr;
      public :
        CException (const string & libelle = string (),
                   unsigned codErr = 0);

        //virtual ~CException (void) {}
        virtual const char * what (void) const noexcept;

        string getLibelle (void) const;
        unsigned getCodErr (void) const;
        void display (void) const;

    };
}

#endif
