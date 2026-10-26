// FUNCTION: BF2 0x52c5d0

#include <string>
#include <vector>
#include <new>

struct Elem118 { std::string s; char _p[0x8]; };

void base_0x0069f670(void* self);

void dtor_52c5d0(void* self) {
    char* p = (char*)self;
    void* anim = *(void**)(p + 0x1d0);
    *(void**)p = (void*)0xb45c50;
    *(void**)(p + 0x10) = (void*)0xb45e88;
    *(void**)(p + 0x68) = (void*)0xb45ec0;
    if (anim) {
        void* mgr = *(void**)0x10935c8;
        ((void (*)(void*, void*))(*(void***)mgr)[4])(mgr, anim);
    }
    *(void**)p = (void*)0xb5c690;
    *(void**)(p + 0x10) = (void*)0xb5c8c8;
    *(void**)(p + 0x68) = (void*)0xb5c900;
    ((std::string*)(p + 0x190))->~basic_string();
    ((std::string*)(p + 0x188))->~basic_string();
    ((std::string*)(p + 0x180))->~basic_string();
    ((std::string*)(p + 0x178))->~basic_string();
    ((std::string*)(p + 0x168))->~basic_string();
    ((std::vector<Elem118>*)(p + 0x118))->~vector();
    base_0x0069f670(self);
    operator delete(self);
}
