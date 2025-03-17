#include <iostream>
#include <fstream>

#include "libos-bar.h"

namespace data
{
    namespace 
    {
        std::string datafile = "data.csv";
    }
}

LibosBar::LibosBar(std::string datafile):LibosSolver(std::ifstream(datafile))
{
    std::cout << "call\n";
};

