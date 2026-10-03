// FUNCTION: BF2 0x52de40
// LadderContainer::getTeam 0x52de40 — chaîne de deref + virtual
namespace dice { namespace hfe { namespace world {

typedef int (*VF_GETTEAM)(void*);

int getTeam(void* self) {
    void* a = *(void**)((char*)self + 0x268);
    if (a == 0)
        return 0;
    void* b = *(void**)((char*)a + 8);
    if (b == 0)
        return 0;
    VF_GETTEAM f = (VF_GETTEAM)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(b) + 0x1d0));
    return f(b);
}

}}}
