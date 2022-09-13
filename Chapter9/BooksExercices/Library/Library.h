//
// Created by hyde on 12/09/22.
//

#ifndef TEST_LIBRARY_H
#define TEST_LIBRARY_H
#include "../Books/Books.h"
#include "../Patron/Patron.h"
#include <vector>
namespace Library_lib {
    using std::vector;
    struct Transaction{
        Books_lib::Book book;
        Patron_lib::Patron patron;
    };
    class Library {
    public:
        bool AddBook(const Books_lib::Book& book);
        bool AddPatron(const Patron_lib::Patron& patron);
        bool CheckOut(const Books_lib::Book& book, const Patron_lib::Patron& patron);

    private:
        vector<Books_lib::Book> Books;
        vector<Patron_lib::Patron> Patrons;
        vector<Transaction> Transactions;
    };



} // Library_lib

#endif //TEST_LIBRARY_H
