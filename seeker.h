#ifndef LAB0B_SEEKER_H
#define LAB0B_SEEKER_H

#include <fstream>
#include <iostream>
#include <string>
#include <regex>

typedef enum ERROR {
    OK,
    FILE_NOT_FOUND,
    TOO_FEW_ARGS
} ERROR;

namespace universal {
    class Seeker {
    private:
        std::ifstream in;
        std::string fileString;
        std::map<std::string, int> myMap;

        long long total = 0;

        void convToWords(std::string myLine);

    public:
        explicit Seeker(const std::string &myFile);

        ~Seeker();

        ERROR readFile();

        long long getAmount() const;

        const std::map<std::string, int> &getWords() const;
    };
}

#endif //LAB0B_SEEKER_H
