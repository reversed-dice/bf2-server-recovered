// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x5fca90
namespace dice { namespace hfe { namespace world {

class FireComp {
public:
    bool requestFire(bool a0, bool a1);
};

class SingleFireComp : public FireComp {
public:
    bool requestFire(bool a0, bool a1);
};

bool SingleFireComp::requestFire(bool a0, bool a1)
{
    bool r = ((FireComp*)this)->requestFire(a0, a1);
    void* p = *(void**)((char*)this + 0x188);
    if (*(char*)((char*)p + 0xa9) != 0) {
        void* q = *(void**)((char*)this + 0x18);
        void* x = ((void* (*)(void*))(*(void***)q)[0x380 / 8])(q);
        if (x != 0) {
            void* y = ((void* (*)(void*))(*(void***)x)[0x90 / 8])(x);
            if (y != 0) {
                void* t = *(void**)((char*)y + 0x28);
                int cid = ((int (*)(void*))(*(void***)t)[0x20 / 8])(t);
                if (cid == *(int*)0xc7d03c) {
                    int k = ((int (*)(void*))(*(void***)y)[0x4f0 / 8])(y);
                    if (k != 2)
                        r = false;
                }
            }
        }
    }
    if (!a1 && r)
        *(char*)((char*)this + 0x170) = 0;
    return r;
}

} } }
