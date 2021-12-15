#include "seeker.h"

long long universal::Seeker::getAmount() const {
    return total;
}

const std::map<std::string, int> &universal::Seeker::getWords() const {
    return myMap;
}

ERROR universal::Seeker::readFile() {
    if (!in.is_open())
        return FILE_NOT_FOUND;

    while (!in.eof()) {
        getline(in, fileString);
        std::transform(fileString.begin(), fileString.end(), fileString.begin(), ::tolower);
        convToWords(fileString);
    }

    in.close();
    return OK;
}

void universal::Seeker::convToWords(std::string myLine) {
    std::regex kindOfWord ("[0-9a-zA-Z]+");

    std::sregex_iterator start(myLine.begin(), myLine.end(), kindOfWord);
    std::sregex_iterator end;

    long long *partOfTotal;
    partOfTotal = &total;
    *partOfTotal += distance(start, end);


    for (auto i = start; i != end; ++i) {
        std::smatch result = *i;
        std::string curWord = result.str();

        myMap[curWord]++;
    }

}

universal::Seeker::Seeker(const std::string &myFile) {
    in.open(myFile);
}

universal::Seeker::~Seeker() {
    in.close();
}