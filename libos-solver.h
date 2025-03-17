#ifndef _LIBOS_SOLVER_H_
#define _LIBOS_SOLVER_H_

#include <iostream>

class LibosSolver {
    public:
        LibosSolver(std::istream&& data_bar);
        ~LibosSolver() = default;
    };

#endif // _LIBOS_SOLVER_H_