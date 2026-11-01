// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x526950
#include <vector>
#include <cstdlib>

namespace dice { namespace hfe { namespace world {

class IObjectTemplate {};

namespace anon {

void findTemplateChildsOfType(std::vector<void*>& in, std::vector<IObjectTemplate*>& out,
                              unsigned int wantedA, unsigned int wantedB) {
    void ** it = *(void***)&in;
    if (it == *(void***)((char*)&in + 0x8))
        return;
    do {
        void* mgr = *(void**)0x0112ee40;
        IObjectTemplate* t = (IObjectTemplate*)((void* (*)(void*, void*))(*(void***)mgr)[0x48 / 8])(mgr, (char*)*it + 8);
        if (t == 0) {
            abort();
        }
        unsigned char za = (unsigned char)(wantedA == 0);
        unsigned char zb = (unsigned char)(wantedB == 0);
        if (((unsigned char)(za & zb))
            || ((void* (*)(void*, unsigned int))(*(void***)t)[0x18 / 8])(t, wantedB) != 0
            || ((int (*)(void*))(*(void***)t)[0x20 / 8])(t) == (int)wantedA) {
            out.push_back(t);
        }
        ++it;
    } while (it != *(void***)((char*)&in + 0x8));
}

}

} } }
