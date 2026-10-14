// FUNCTION: BF2 0x431a40
#include <string>
#include <iostream>
#include <string.h>

namespace dice { namespace hfe {

enum DebugType {
    DebugType_Error = 6
};

class Debug {
    char _pad[0x20];
    char _stream[0x160];
public:
    Debug(DebugType type, std::string const& file, int line, std::string const& func = "");
    ~Debug();
    template <typename T>
    std::ostream& operator<<(T const& val) {
        return *(std::ostream*)(_stream) << val;
    }
};

extern void func_0x00439b10(void* self);

void ctor_0x431a40(void* self, void* data, unsigned char n)
{
    func_0x00439b10(self);
    *(void**)self = (void*)0xb2e2d0;
    if (n > 0x3f) {
        Debug(DebugType(6), "Game/GameEvents/StringBlockEvent.cpp", 0x1a, "") << " Data out of range";
    }
    *((unsigned char*)self + 0x12) = n;
    *((unsigned char*)self + 0x10) = 0;
    memcpy((char*)self + 0x13, data, n);
}

} }
