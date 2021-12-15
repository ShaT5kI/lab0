#include "filler.h"

bool universal::Filler::Comparator::operator()(const std::pair<std::string, int> &a,
                                                const std::pair<std::string, int> &b) {
    return a.second > b.second;
}

void universal::Filler::incList(const std::map<std::string, int> &myMap) {
    for (auto i = std::begin(myMap); i != std::end(myMap); ++i) {
        std::pair<std::string, int> el;
        el.first = i->first;
        el.second = i->second;
        words.push_back(el);
    }

    Comparator WordsComp;
    words.sort(WordsComp);
}

std::list<std::pair<std::string, int>> universal::Filler::getList() {
    return words;
}
