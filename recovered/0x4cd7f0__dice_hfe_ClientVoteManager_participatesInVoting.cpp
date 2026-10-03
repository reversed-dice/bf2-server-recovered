// FUNCTION: BF2 0x4cd7f0
// ClientVoteManager::participatesInVoting 0x4cd7f0 — 2 virtual calls chaînés
namespace dice { namespace hfe {

typedef void* (*VF0)(void*);
typedef bool (*VF1)(void*);

bool participatesInVoting() {
    void* g = *(void**)0x112ee38;
    if (g == 0)
        return false;
    VF0 f1 = (VF0)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(g) + 0x60));
    void* v = f1(g);
    VF1 f2 = (VF1)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(v) + 0x540));
    return f2(v);
}

}}
