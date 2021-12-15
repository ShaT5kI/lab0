#ifndef LAB0B_WRITER_H
#define LAB0B_WRITER_H

#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include <cmath>

namespace universal {
    class Writer {
    private:
        std::ofstream out;

        double percent(long long total, int wordCount);

    public:
        explicit Writer(const std::string &myFile);

        ~Writer();

        void writeIntoFile(const std::list<std::pair<std::string, int>> &word, long long total);

    };
}

#endif //LAB0B_WRITER_H
