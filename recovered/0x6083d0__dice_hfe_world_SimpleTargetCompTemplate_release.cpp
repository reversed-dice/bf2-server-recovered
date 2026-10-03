// FUNCTION: BF2 0x6083d0
#include <string>
#include <new>

// `delete this` on the last reference: the null test, the inlined destructor
// (two vtable stores plus three string releases in reverse declaration order)
// and operator delete all come from that one statement.
extern "C" int release_6083d0(char* self)
{
    int n = *(int*)(self + 0x58) - 1;
    *(int*)(self + 0x58) = n;
    // Nested, not `&&`: written as one condition GCC makes it branchless
    // (SETE/SETNE/TEST) where the target has two separate tests.
    if (n == 0) {
    if (self != 0) {
        *(void**)(self + 0x0) = (void*)0xb77b90;
        *(void**)(self + 0x8) = (void*)0xb77c08;
        ((std::string*)(self + 0x40))->~basic_string();
        ((std::string*)(self + 0x30))->~basic_string();
        ((std::string*)(self + 0x18))->~basic_string();
        ::operator delete((void*)self);
    }
    }
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_SimpleTargetCompTemplate_release (0x6083d0)
