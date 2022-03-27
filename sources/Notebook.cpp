#include "Notebook.hpp"
#include <iostream>

using namespace std;
// using namespace ariel;

namespace ariel {

    Notebook::Notebook(){
        //my_page = vector<vector<char>>(1, vector<char>(MAX_COLS, '_')); // init notebook
        
        this->one_page = vector<vector<char>>(1, vector<char>(MAX_COLS, '_'));
    }
    Notebook::~Notebook(){
        cout << "destructor" << endl;
    }

    void Notebook::write(int page, int row, int col, Direction direction, string str){
        
        // Make sure to check input!! Throw errors

        // Writing to the page

        if(MAX_CURR_ROW < row){
            MAX_CURR_ROW = row;
            // Page.resize(MAX_CURR_ROW);
        }
        

        
    }

    string Notebook ::read(int page, int row, int col, Direction direction, int lenght){

        return "";
    }

    void Notebook ::erase(int page, int row, int col, Direction direction, int lenght){

    }

    void Notebook ::show(int page){

        for (int i = 0; i < MAX_CURR_ROW; i++){
            for(int j = 0; j < 100; j++){

                //                   cout << Page.at(i).at(j);
            }
            cout << endl;
        }
    }


}