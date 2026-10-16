// FUNCTION: BF2 0x5996d0
extern "C" void fn_58ad80(void* self);

typedef void (*VFn)(void*, int, int, int);

struct Emitter {
    char _pad0[0x28];
    void* m_0x28;
    char _pad1[0x50 - 0x30];
    void* m_0x50;
    char _pad2[0x25c - 0x58];
    int m_0x25c;
    void init();
};

void Emitter::init() {
    fn_58ad80(this);
    char* t = *(char**)((char*)this + 0x28);
    if (*(char*)(t + 0x1cc) != 0 && *(void**)((char*)this + 0x50) == 0) {
        ((VFn)(*(void***)this)[0x208 / 8])(this, 0, 0, 0);
    }
    *(int*)((char*)this + 0x25c) = *(int*)(t + 0x1d8);
}
