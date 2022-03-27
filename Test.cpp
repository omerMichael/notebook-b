#include <stdexcept>
#include "doctest.h"
#include "Notebook.hpp"

using namespace ariel;
using namespace std;

Notebook notebook;

TEST_CASE("Bad input")
{

    /*
    A page number cannot be negative
    */
   //            notebook.write(/*page=*/100, /*row=*/100, /*column=*/50, Direction::Horizontal, "abcd");
   //                          page,row,col.            dirction
   CHECK_THROWS(notebook.write(-3,   90,  41, Direction::Horizontal, "ISR"));
   CHECK_THROWS(notebook.write(-47,  99,  38, Direction::Vertical, "US"));
   CHECK_THROWS(notebook.write(-51,  96,  4, Direction::Horizontal, "UK"));
   CHECK_THROWS(notebook.write(-4,  100,  25, Direction::Vertical, "DE"));



    
    /*
    Invalid input: more than 100 characters in a row
    */
   for(int i = 101; i < 200; i++){
       CHECK_THROWS(notebook.write(100, 99, i, Direction::Horizontal, "out of bounds"));
   }
    
}