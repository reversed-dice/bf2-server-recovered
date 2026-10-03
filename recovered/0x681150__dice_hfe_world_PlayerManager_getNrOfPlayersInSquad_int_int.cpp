// FUNCTION: BF2 0x681150
namespace dice { namespace hfe { namespace world {
int getNrOfPlayersInSquad_0x681150(void* self, int team, int squad) {
    void* head = (char*)self + 0x18;
    int n = 0;
    for (void* it = *(void**)((char*)self + 0x18); it != head; it = *(void**)it) {
        void* p = *(void**)((char*)it + 0x10);
        if (((int (*)(void*))(*(void***)p)[0x3a])(p) == team) {
            if (((int (*)(void*))(*(void***)p)[0x43])(p) == squad)
                n++;
        }
    }
    return n;
}
} } }
