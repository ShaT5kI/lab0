#include "writer.h"

double universal::Writer::percent(long long total, int wordCount) {
    return (double)((double)wordCount * 100 / (double)total);
}


void universal::Writer::writeIntoFile(const std::list<std::pair<std::string, int>> &word, long long total) {

    for(auto i = std::begin(word); i != std::end(word); ++i)
        out << i->first << ";" << i->second << ";" << percent(total, i->second) << "%" <<std::endl;

}


universal::Writer::Writer(const std::string &myFile) {
    out.open(myFile);
}

universal::Writer::~Writer() {
    out.close();
}