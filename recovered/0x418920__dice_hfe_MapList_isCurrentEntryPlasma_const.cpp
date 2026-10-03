// FUNCTION: BF2 0x418920
#include <string>
typedef void* (*lookup_418920)(void*, std::string const&);
typedef void* (*getentry_418920)(void*, void*);
extern "C" void* map_get_entry_418830(void*, int);
extern "C" int  map_current_4173f0(void*);

extern "C" unsigned char f_418920(char* self) {
    if (map_get_entry_418830(self, *(int*)(self + 8)) == 0) return 0;
    void* cm = *(void**)0x010b3798;
    lookup_418920 fn = *(lookup_418920*)(*(char**)cm + 0x98);
    void* mi = fn(*(void**)0x010b3798, std::string("ModInfo"));
    if (mi == 0) return 0;
    void* ml = *(void**)0x0108a2a0;
    getentry_418920 g = *(getentry_418920*)(*(char**)mi + 0x48);
    void* e = map_get_entry_418830(ml, map_current_4173f0(ml));
    void* r = g(mi, e);
    if (r == 0) return 0;
    return *(unsigned char*)((char*)r + 0x44);
}
// REVERSED_FUNCTION: dice_hfe_MapList_isCurrentEntryPlasma_const (0x418920)
