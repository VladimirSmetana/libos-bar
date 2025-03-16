#include "libos-solver.h"

explicit LibosSolver(std::istream& data_bar) {
    readCsv(data_bar);
}