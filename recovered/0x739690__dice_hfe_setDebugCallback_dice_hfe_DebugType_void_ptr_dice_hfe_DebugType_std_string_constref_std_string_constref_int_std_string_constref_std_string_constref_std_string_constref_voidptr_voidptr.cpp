// FUNCTION: BF2 0x739690
// setDebugCallback 0x739690 — v3: tableaux via pointeurs globaux
namespace dice { namespace hfe {

void setDebugCallback(int type, void* a, void* b) {
    void** t1 = *(void***)0xf6c678;
    void** t2 = *(void***)0xf6c670;
    t1[type] = a;
    t2[type] = b;
}

}}
