#include <iostream>
#include "Books/Books.h"
#include "Patron/Patron.h"
#include "Library/Library.h"

int main() {
    try {

        Library_lib::Library library;
        Books_lib::Book Test{"Game of Thrones", "George Martin", "1-2-3-4", "1/1/1", Books_lib::Genre::fiction};
        Books_lib::Book Test1{"Sapiens", "Yuval Noah Harari", "1-2-3-5", "1/1/1",Books_lib::Genre::nonfiction};
        Books_lib::Book Test2{"B", "1", "1-2-2-5", "1/1/1",Books_lib::Genre::fiction};

        Patron_lib::Patron P{"Andres", 1,1000};
        Patron_lib::Patron P1{"Jonathan", 2,0};
        Patron_lib::Patron P2{"Valentina", 3,1000};
        Patron_lib::Patron P3{"Luz", 4,1000};

        library.AddBook(Test);
        library.AddBook(Test1);
        library.AddBook(Test2);
        library.AddBook(Test1);


        library.AddPatron(P);
        library.AddPatron(P1);
        library.AddPatron(P2);
        library.AddPatron(P3);


        if(!library.CheckOut(Test,P1)){
            std::cout << "error" << std::endl;
        };

        return 0;
    }
    catch (...){
        std::cout << "Error" << std::endl;
    }
}
