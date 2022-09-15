//
// Created by hyde on 12/09/22.
//

#include "Patron.h"
#include <iostream>
namespace Patron_lib {

    Patron::Patron() { userName = "Anonymous"; }
    Patron::Patron(string _userName,unsigned int _libraryCardNumber): userName(_userName), libraryCardNumber(_libraryCardNumber){}
    Patron::Patron(string _userName, unsigned int _libraryCardNumber, unsigned int _fees)
                  :userName(_userName), libraryCardNumber(_libraryCardNumber), fees(_fees){}
    bool operator==(const Patron& a, const Patron& b){return a.LibraryCardNumber() == b.LibraryCardNumber();};
    std::ostream &operator<<(std::ostream& os, const Patron& a){
        int i = 0;
        return os << "Name: " << a.UserName() << std::endl
                  << "Library Card Number: " << a.LibraryCardNumber() << std::endl;
    }
    bool HasFees(const Patron& p){ return (p.Fees() > 0); }

} // Patron_lib