// FUNCTION: BF2 0x525610
// dice::hfe::world::Kit::enableItem() -- 0x525610

extern "C" void fn_407af8() __attribute__((noreturn));   // assert failure path
extern "C" void fn_523f30(void*);                        // Item::enableItem
extern "C" void fn_5255d0(void*, int);                   // Kit::setGeomIndex(int)

typedef char  (*Fn340)(void*);
typedef void* (*Fn18)(void*, unsigned);
typedef void  (*Fn1a0)(void*, void*, unsigned char, float);

unsigned enableItem_525610(void* self)
{
    char* s = (char*)self;
    if (*(void**)(s + 0x50) != 0) fn_407af8();
    if ((*(Fn340*)(*(char**)s + 0x340))(self)) return 0;

    fn_523f30(self);
    fn_5255d0(self, -1);

    char* tmpl = *(char**)(s + 0x28);
    void* game = *(void**)0x010c5420;
    void* server = (*(Fn18*)(*(char**)game + 0x18))(game, *(unsigned*)0xc76024);
    if (server == 0) return 1;

    void* om = *(void**)0x0112ee48;
    (*(Fn1a0*)(*(char**)om + 0x1a0))(om, self, 0x1d, *(float*)(tmpl + 0x21c));
    return 1;
}
// REVERSED_FUNCTION: dice_hfe_world_Kit_enableItem (0x525610)
