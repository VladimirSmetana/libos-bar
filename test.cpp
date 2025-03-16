#include "libos-bar.h"

int main() {
    std::ifstream file("libos-file.csv"); // Замените на имя вашего CSV-файла
    if (!file.is_open()) {
        std::cerr << "Ошибка открытия файла!" << std::endl;
        return 1;
    }

    LibosSolver solver(file);
    file.close();
    return 0;
}