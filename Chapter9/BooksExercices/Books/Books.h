//
// Created by hyde on 11/09/22.
//
#include <string>
#ifndef TEST_BOOK_H
#define TEST_BOOK_H

namespace Books_lib {

    using std::string;
    bool test1(int a);

    class Book{
    public:
        Book();
        Book(string _title,
             string _author,
             string _isbn,
             string _copyRightDate);
        string Title() const {return title;};
        string Author() const {return author;};
        string ISBN() const {return isbn;};
        string CopyRightDate() const {return copyRightDate;};
        bool is_checkout() const {return checkout;};
        class Invalid { };

    private:
        string title;
        string author;
        string isbn;
        string copyRightDate;
        bool checkout {false};

    };

    bool is_ISBN(const string& _isbn);
    bool is_CopyRightDate(const string& _copyRightDate);

} // Books_lib

#endif //TEST_BOOK_H
