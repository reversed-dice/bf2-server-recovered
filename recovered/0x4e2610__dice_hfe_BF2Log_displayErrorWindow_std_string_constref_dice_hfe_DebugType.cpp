// FUNCTION: BF2 0x4e2610
// BF2Log::displayErrorWindow(std::string const&, int)
#include <iostream>
#include <string>
#include <stdlib.h>

class Vars {
public:
    static int* getInt(char const* name, int def);
};

class BF2Log {
public:
    void flushWrite();
    void displayErrorWindow(std::string const& msg, int severity);
};

void BF2Log::displayErrorWindow(std::string const& msg, int severity) {
    flushWrite();
    if (severity != 6 && *Vars::getInt("hack-ignore-asserts", 0) == 1)
        return;
    std::cerr << "FATAL ERROR: " << msg << std::endl;
    exit(1);
}
