// FUNCTION: BF2 0x7871d0
// dice::hfe::ai::AIObjectUnit::getTeamLock() const -- 0x7871d0
//
// Walks the object chain at +0x50 for the first entry answering the
// IPlayerControlObject query and tail-calls its team-lock getter.

typedef void*    (*FnGeom_7871d0)(void*);
typedef void*    (*FnQuery_7871d0)(void*, unsigned);
typedef unsigned (*FnLock_7871d0)(void*);

extern "C" unsigned getTeamLock_7871d0(char* self)
{
    void* obj = *(void**)(self + 8);
    char* node = (char*)(*(FnGeom_7871d0*)(*(char**)obj + 0x40))(obj);
    void* found;
    if (node != 0) {
        do {
            found = (*(FnQuery_7871d0*)(*(char**)node + 0x18))(node, *(unsigned*)0xc7ce6c);
            if (found != 0) goto have_it;
            node = *(char**)(node + 0x50);
        } while (node != 0);
    }
    found = 0;
have_it:
    return (*(FnLock_7871d0*)(*(char**)found + 0x130))(found);
}
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectUnit_getTeamLock_const (0x7871d0)
