//
// Created by hyde on 12/09/22.
//

#ifndef TEST_PATRON_H
#define TEST_PATRON_H
#include <string>
namespace Patron_lib {
    using std::string;
    class Patron {
    public:
        Patron();
        Patron(string _userName, unsigned int _libraryCardNumber);
        Patron(string _userName, unsigned int _libraryCardNumber, unsigned int _fees);
        string UserName() const{return userName;};
        unsigned int LibraryCardNumber() const {return libraryCardNumber;};
        unsigned int Fees() const {return fees;};

        void UserName(string _userName) {userName = _userName;};
        void LibraryCardNumber(unsigned int _libraryCardNumber) {libraryCardNumber = _libraryCardNumber;};
        void Fees(unsigned int _fees) {fees = _fees;};

    private:
        string userName;
        unsigned int libraryCardNumber {0};
        unsigned int fees{0};
    };
    bool HasFees(const Patron& p);
} // Patron_lib

#endif //TEST_PATRON_H
