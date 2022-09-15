//
// Created by hyde on 11/09/22.
//
#include <string>
#include <ostream>
#ifndef TEST_BOOK_H
#define TEST_BOOK_H

namespace Books_lib {

    using std::string;

    enum class Genre{
        fiction = 0,
        nonfiction,
        periodical,
        biography,
        children
    };

    class Book{
    public:
        Book();
        Book(string _title,
             string _author,
             string _isbn,
             string _copyRightDate,
             Genre genre);
        string Title() const {return title;};
        string Author() const {return author;};
        string ISBN() const {return isbn;};
        string CopyRightDate() const {return copyRightDate;};
        bool is_checkout() const {return checkout;};
        void Checkout(){ checkout = true;}
        Genre Which_Genre() const {return genre;};
        class Invalid { };
        void print();

    private:
        string title;
        string author;
        string isbn;
        string copyRightDate;
        bool checkout {false};
        Genre genre;

    };
    bool operator==(const Book& a, const Book& b);
    bool operator!=(const Book& a, const Book& b);
    std::ostream &operator<<(std::ostream& os, const Book& a);
    bool is_ISBN(const string& _isbn);
    bool is_CopyRightDate(const string& _copyRightDate);

} // Books_lib

#endif //TEST_BOOK_H
