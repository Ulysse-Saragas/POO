#include <iostream>
#include "prof.h"
#include "module.h"
using namespace std;

int main()
{
    prof P1 ("Casali");
    module M2103 ("Bases de la programmation orientee objet", 60);
    module M2104 ("Bases de la conception orientée objet", 45);

    P1.addModule(&M2103);
    P1.addModule(&M2104);
    P1.display();

    M2103.setNbHours(10);
    P1.display();




    //declaration
    vector<prof> lesProfs(5);
    vector<module> lesModules(5);

    //initialisation
//    for(prof & unProf: lesProfs) {
//        string nom;
//        cout << "taper nom : " << endl;
//        cin >> nom;
//        unProf = prof(nom);
//    }
    for (unsigned i(0); i < lesProfs.size(); ++i)
        lesProfs[i] = prof (string (1, 'F'+i), 6*i + 10);


    for(unsigned i(0); i < lesModules.size(); ++i){
        lesModules[i] = module (string(1, 'A'+i), 6*i + 10);
    }

    //lien
    for(prof & unProf: lesProfs)
        for (module & unModule : lesModules){
            unProf.addModule(&unModule);
        }


    for(module & unModule: lesModules)
        for (prof & unProf: lesProfs){
            unModule.addProf(&unProf);
        }


    //affichage
    for (const prof & unProf : lesProfs)
        unProf.display();

    for (const module & unModule: lesModules)
        unModule.display();

    return 0;









}















