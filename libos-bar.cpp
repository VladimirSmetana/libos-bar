#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "libos-bar.h"

namespace data
{
    namespace 
    {
        static constexpr char datafile[] = "data.csv";
    }
}


LibosBar::LibosBar():LibosSolver(std::ifstream(data::datafile))
{
    std::cout << "call\n";
};

void readCsv(std::istream& data_bar) {
    std::string line;
    std::vector<std::vector<std::string>> data;

    // Чтение данных построчно
    while (std::getline(data_bar, line)) {
        std::vector<std::string> row;
        std::stringstream line_stream(line);
        std::string cell;

        // Чтение данных в строке по запятой
        while (std::getline(line_stream, cell, ',')) {
            row.push_back(cell);
        }
        data.push_back(row);
    }

    // Вывод для проверки (можно удалить позже)
    for (const auto& row : data) {
        for (const auto& cell : row) {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }

    // Здесь можно добавить дополнительную логику для обработки данных
}