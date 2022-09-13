#include <iostream>
#include "Books/Books.h"


int main() {
    try {
        Books_lib::Book Test{"1", "1", "1-2-3-4", "1/1/1"};
        Books_lib::Book Test1{"1", "1", "1-2-3-4", "1/1/1"};
        Books_lib::Book Test2{"1", "1", "1-2-2-5", "1/1/1"};
        std::cout << Test;
        if(Test == Test1) std::cout << "Objects Equals" << std::endl;
        if(Test != Test2) std::cout << "Objects Different" << std::endl;
        return 0;
    }
    catch (...){
        std::cout << "Error" << std::endl;
    }
}
