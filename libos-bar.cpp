#include <iostream>
#include <fstream>

#include "libos-bar.h"

LibosBar::LibosBar(std::string datafile):LibosSolver(std::ifstream(datafile))
{
    std::cout << "call\n";
};

