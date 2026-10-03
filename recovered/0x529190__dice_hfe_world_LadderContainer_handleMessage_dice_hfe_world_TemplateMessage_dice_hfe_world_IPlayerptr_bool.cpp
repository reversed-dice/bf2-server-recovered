// FUNCTION: BF2 0x529190
// LadderContainer::handleMessage 0x529190 — player null check + virtual
namespace dice { namespace hfe { namespace world {

typedef void (*VF_HANDLE2)(void*, void*);

void handleMessage(void* self, void* msg, void* player, bool b) {
    if (player == 0)
        return;
    VF_HANDLE2 f = (VF_HANDLE2)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(player) + 0x160));
    f(player, msg);
}

}}}
