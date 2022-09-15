//
// Created by hyde on 12/09/22.
//

#include "Library.h"
#include <algorithm>
#include <iostream>
namespace Library_lib {
    bool Library::AddBook(const Books_lib::Book& book){
        bool result = false;
        if(FoundBook(book)) {
            Books.emplace_back(book);
            result = true;
            std::cout << book;
        }
        else{
            result = false;
        }
        return result;
    };
    bool Library::AddPatron(const Patron_lib::Patron& patron){
        bool result = false;
        if(FoundPatron(patron)) {
            Patrons.emplace_back(patron);
            result = true;
            std::cout << patron;
        }
        else{
            result = false;
        }
        return result;
    };

    bool Library::FoundBook(const Books_lib::Book &book) {
        auto search = std::find_if(Books.begin(),Books.end(),
                                   [&book] (const Books_lib::Book& item_book) {return item_book == book;});
        return (search == std::end(Books));

    };

    bool Library::FoundPatron(const Patron_lib::Patron& patron){
        auto search = std::find_if(Patrons.begin(),Patrons.end(),
                                   [&patron] (const Patron_lib::Patron& item_patron) {return item_patron == patron;});
        return (search == std::end(Patrons));
    };

    bool Library::CheckOut(const Books_lib::Book& book, const Patron_lib::Patron& patron){
        if(FoundPatron(patron) || FoundBook(book)) return false;
        if(Patron_lib::HasFees(patron)) return false;
        Transaction transaction{book, patron};
        Transactions.emplace_back(transaction);
        auto search = std::find_if(Books.begin(),Books.end(),
                                   [&book] (const Books_lib::Book& item_book) {return item_book == book;});
        search->Checkout();

        std::cout << "Checkout from: " << std::endl
                  << book << std::endl
                  << "To the user: "  << std::endl
                  << patron << std::endl;

        return true;

    };
    void Library::PatronOwes() {
        std::cout << "Patrons with Owes" << std::endl;
        for (Patron_lib::Patron p : Patrons) {
            if(Patron_lib::HasFees(p)) std::cout << p;
        }
    }


} // Library_lib