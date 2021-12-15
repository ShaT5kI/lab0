#include <iostream>
#include "seeker.h"
#include "filler.h"
#include "writer.h"

int main(int argc, char *argv[]) {
    if (argc < 3)
        return TOO_FEW_ARGS;

    universal::Seeker fileIn(argv[1]);
    if (fileIn.readFile() == FILE_NOT_FOUND)
        return -1;

    universal::Filler finalList;
    finalList.incList(fileIn.getWords());

    universal::Writer fileOut(argv[2]);
    fileOut.writeIntoFile(finalList.getList(), fileIn.getAmount());

    return 0;
}
