// FUNCTION: BF2 0x44eb90
#include <string>
extern "C" long fn_407878(const char*);
void fn_44eb90(void* self, const char* name) {
    *(char*)((char*)self + 0x80) = 1;
    if (name) {
        long len = fn_407878(name);
        ((std::string*)((char*)self + 0x88))->assign(name, len);
    } else {
        ((std::string*)((char*)self + 0x88))->clear();
    }
}