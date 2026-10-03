// FUNCTION: BF2 0x4c0340
// SquadManager::removeAllOrderMarkers 0x4c0340 — retire les marqueurs 2 équipes
namespace dice { namespace hfe {

typedef void (*VF_REMOVE)(void*, int);

void removeAllOrderMarkers(void* self) {
    VF_REMOVE f = (VF_REMOVE)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(self) + 0x120));
    f(self, 0);
    VF_REMOVE f2 = (VF_REMOVE)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(self) + 0x120));
    f2(self, 1);
}

}}
