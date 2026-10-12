// FUNCTION: BF2 0x620540
#include <string>

int release_0x620540(char* self)
{
    int n = *(int*)(self + 0x100) - 1;
    *(int*)(self + 0x100) = n;
    if (n == 0) {
        if (self != 0) {
            *(void**)(self + 0x0) = (void*)0xb7cff0;
            *(void**)(self + 0x8) = (void*)0xb7d080;
            ((std::string*)(self + 0x28))->~basic_string();
            ((std::string*)(self + 0x18))->~basic_string();
            operator delete(self);
        }
    }
    return n;
}
