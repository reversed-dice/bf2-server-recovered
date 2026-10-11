// FUNCTION: BF2 0x8414e0
extern void* fn_845310(void*, unsigned short);

struct Slot {
    unsigned char b;
    unsigned char pad;
    unsigned short w;
};

struct RemovePlayerData {
    unsigned short id;
};

void fn_8414e0(void* self, RemovePlayerData const& d)
{
    void* c = fn_845310((char*)self + 0x848, d.id);
    if (c != 0) {
        int i = *(unsigned short*)((char*)c + 0xa);
        Slot* s = (Slot*)((char*)self + 0xaac);
        if ((unsigned)i < 0x40) {
            s[i].b = 0;
            s[i].w = 0;
        } else {
            s[0x40].b = 0;
            s[0x40].w = 0;
        }
    }
    ((void (*)(void*, unsigned short))(*(void***)self)[9])(self, d.id);
}
