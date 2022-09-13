#include <iostream>
#include "Books/Books.h"
#include "Patron/Patron.h"


int main() {
    try {
        Books_lib::Book Test{"1", "1", "1-2-3-4", "1/1/1", Books_lib::Genre::fiction};
        Books_lib::Book Test1{"1", "1", "1-2-3-4", "1/1/1",Books_lib::Genre::fiction};
        Books_lib::Book Test2{"1", "1", "1-2-2-5", "1/1/1",Books_lib::Genre::fiction};
        std::cout << Test;
        if(Test == Test1) std::cout << "Objects Equals" << std::endl;
        if(Test != Test2) std::cout << "Objects Different" << std::endl;

        Patron_lib::Patron P{"Andres", 1,1000};
        if(Patron_lib::HasFees(P)) std::cout << "The user has fees" << std::endl;

        return 0;
    }
    catch (...){
        std::cout << "Error" << std::endl;
    }
}
