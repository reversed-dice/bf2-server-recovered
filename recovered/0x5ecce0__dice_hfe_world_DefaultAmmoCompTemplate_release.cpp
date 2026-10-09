// FUNCTION: BF2 0x5ecce0
#include <string>
struct DefaultAmmoCompTemplate { char _pad[0x60]; };
int DefaultAmmoCompTemplate_release(DefaultAmmoCompTemplate* self)
{
    int n = *(int*)((char*)self + 0x58) - 1;
    *(int*)((char*)self + 0x58) = n;
    if (n == 0) {
        if (self != 0) {
            *(void**)self = (void*)0xb6fdf0;
            *(void**)((char*)self + 8) = (void*)0xb6fe68;
            std::string* s = (std::string*)((char*)self + 0x50);
            s->~basic_string();
            operator delete(self);
        }
    }
    return n;
}
