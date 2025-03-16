#include <iostream>

class LibosSolver final {
    public:
        explicit LibosSolver(std::istream& data_bar) {
            readCsv(data_bar);
        }

    };