#include <sstream>
#include <iostream>
#include <algorithm>
#include "Books.h"

using namespace Books_lib;

bool is_ISBN(const string& _isbn);
bool is_CopyRightDate(const string& _copyRightDate);

Book::Book(string _title,
           string _author,
           string _isbn,
           string _copyRightDate)
        : title{_title},
          author{_author},
          isbn{_isbn},
          copyRightDate{_copyRightDate}
{
    if(!::is_ISBN(isbn) || !::is_CopyRightDate(copyRightDate)) throw Invalid{};
}

const Book& default_book(){
    static Book db{"A", "A","1-1-A-A", "A"};
    return db;
}


bool is_ISBN(const string& _isbn){
    bool result {true};
    string isbn {_isbn};
    string verify1;
    string verify2;
    string verify3;
    string verify4;
    std::cout << isbn << std::endl;
    std::replace(isbn.begin(), isbn.end(), '-', ' ');
    std::cout << isbn << std::endl;
    std::stringstream isbn_stream(isbn);

    isbn_stream >> verify1 >> verify2 >> verify3 >> verify4;
    try {
        stoi(verify1);
        stoi(verify2);
        stoi(verify3);
    }
    catch(...){

        result = false;
    }
    if(verify4.size() > 1 || verify4.empty()) result = false;
    else if(verify4.at(0) >= '0' && verify4.at(0) <= '9') result = true;
    else if(verify4.at(0) >= 'a' && verify4.at(0) <= 'z') result = true;
    else if(verify4.at(0) >= 'A' && verify4.at(0) <= 'Z') result = true;
    else result = false;

    return result;
}



bool is_CopyRightDate(const string& _copyRightDate){
    bool result {true};
    string copyRightDate {_copyRightDate};
    string verify1;
    string verify2;
    string verify3;
    std::cout << _copyRightDate << std::endl;
    std::replace(copyRightDate.begin(), copyRightDate.end(), '/', ' ');
    std::cout << copyRightDate << std::endl;
    std::stringstream copyRightDate_stream(copyRightDate);

    copyRightDate_stream >> verify1 >> verify2 >> verify3;
    try {
        stoi(verify1);
        stoi(verify2);
        stoi(verify3);
    }
    catch(...){

        result = false;
    }

    return result;
}





