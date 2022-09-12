#include <iostream>
#include "Books/Books.h"
int main() {
    //std::string s = "1-1-1-1";
    //Books_lib::is_ISBN(s);
    //Books_lib::is_ISBN("1-1-1-1");
    try {
        Books_lib::Book Test{"1", "1", "1-2-3-4", "1/1/1"};
        std::cout << "Hello, World!" << std::endl;
        return 0;
    }
    catch (...){
        std::cout << "Error" << std::endl;
    }
}
