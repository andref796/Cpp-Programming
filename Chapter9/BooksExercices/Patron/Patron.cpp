//
// Created by hyde on 12/09/22.
//

#include "Patron.h"

namespace Patron_lib {

    Patron::Patron() { userName = "Anonymous"; }
    Patron::Patron(string _userName,unsigned int _libraryCardNumber): userName(_userName), libraryCardNumber(_libraryCardNumber){}
    Patron::Patron(string _userName, unsigned int _libraryCardNumber, unsigned int _fees)
                  :userName(_userName), libraryCardNumber(_libraryCardNumber), fees(_fees){}
    bool HasFees(const Patron& p){ return (p.Fees() > 0); }

} // Patron_lib