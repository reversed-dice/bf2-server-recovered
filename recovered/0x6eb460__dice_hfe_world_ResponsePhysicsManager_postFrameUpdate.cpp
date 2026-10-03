// FUNCTION: BF2 0x6eb460
// ResponsePhysicsManager::postFrameUpdate 0x6eb460 — update 3 listes par frame
namespace dice { namespace hfe { namespace world {

extern void update_list(void* self, void* list);

void postFrameUpdate(void* self) {
    update_list(self, (char*)self + 0x40);
    update_list(self, (char*)self + 0x50);
    update_list(self, (char*)self + 0x10);
}

}}}
