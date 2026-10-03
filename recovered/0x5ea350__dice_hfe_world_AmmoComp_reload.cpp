// FUNCTION: BF2 0x5ea350
// AmmoComp::reload 0x5ea350 — state machine reload
namespace dice { namespace hfe { namespace world {

extern int get_world_time3();
extern void reload_impl(void* self, int t);

void reload(void* self) {
    if (*(int*)((char*)self + 0x68) == 2) {
        reload_impl(self, get_world_time3());
        return;
    }
    *(int*)((char*)self + 0x68) = 2;
}

}}}
