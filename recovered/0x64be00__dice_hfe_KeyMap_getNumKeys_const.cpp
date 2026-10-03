// FUNCTION: BF2 0x64be00
// KeyMap::getNumKeys 0x64be00 — v3: ptr diff sur type 16 octets
namespace dice { namespace hfe {

struct Key16 { unsigned char pad[16]; };

int getNumKeys(void* self) {
    Key16* a = *(Key16**)((char*)self + 8);
    Key16* b = *(Key16**)self;
    return (int)(a - b);
}

}}

// re-trigger validate 2026-08-06 20:40:34

// re-trigger validate 2026-08-07 00:31:50
