#ifndef LAB0B_FILLER_H
#define LAB0B_FILLER_H

#include <iostream>
#include <list>
#include <string>
#include <map>


namespace universal {
    class Filler {
    private:
        std::list<std::pair<std::string, int>> words;

    public:
        void incList(const std::map<std::string, int> &myMap);

        std::list<std::pair<std::string, int>> getList();

        class Comparator {
        public:
            bool operator()(const std::pair<std::string, int> &a, const std::pair<std::string, int> &b);
        };

    };

}

#endif //LAB0B_FILLER_H
