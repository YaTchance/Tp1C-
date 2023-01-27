#include <iostream>
#include "Lecteur.h"

    Person::Person(std::string firstname, std::string lastname) : _firstname(firstname), _lastname(lastname) {
    }

    std::string Person::firstname() const {
        return _firstname;
    }

    std::string Person::lastname() const {
        return _lastname;
    }

    std::string getFullName(Person p) {
        return std::string (p.firstname() + " " + std::string(p.lastname()));
    };
/*fqdlsqsfqdokf*/
