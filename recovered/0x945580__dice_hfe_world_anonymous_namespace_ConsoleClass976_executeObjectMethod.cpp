// FUNCTION: BF2 0x945580
#include <string>
namespace dice { namespace hfe { namespace world {

extern "C" void* getActiveTemplate(unsigned int);
extern "C" void addVehicleType(void*, std::string, int, float, float);

class ConsoleClass976 {
public:
    virtual void* executeObjectMethod();
};

void* ConsoleClass976::executeObjectMethod() {
    if (*(int*)((char*)this + 0x30) != 4) return 0;
    std::string s(**(std::string**)((char*)this + 0x38));
    int v1 = **(int**)((char*)this + 0x40);
    float f2 = **(float**)((char*)this + 0x48);
    float f3 = **(float**)((char*)this + 0x50);
    *(unsigned char*)((char*)this + 0x108) = 0;
    addVehicleType(getActiveTemplate(*(unsigned int*)0x00c7cf5c), s, v1, f2, f3);
    return 0;
}

} } }
