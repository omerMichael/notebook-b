#pragma once
#include <string>
#include "Direction.hpp"
#include <vector>

namespace ariel {
    
    class Notebook {

    private:

        /*short*/ int MAX_COLS = 100;
        //int MAX_PAGE_OFFSET = 20;
        //int MAX_ROW_OFFSET = 20;
        //int INITIAL_SIZE = 1;
        int MAX_CURR_PAGE = 1;
        int MAX_CURR_ROW = 1;

        // vector<vector<char>> my_page;
        // How to present the rest of th pages
        vector<vector<char>> one_page;

    public:

        Notebook();
        ~Notebook();

        void write(int page, int row, int col, Direction dir, std::string str);

        std::string read(int page, int row, int col, Direction dir, int length);

        void erase(int page, int row, int col, Direction dir, int length);

        void show(int page);
    };

}
