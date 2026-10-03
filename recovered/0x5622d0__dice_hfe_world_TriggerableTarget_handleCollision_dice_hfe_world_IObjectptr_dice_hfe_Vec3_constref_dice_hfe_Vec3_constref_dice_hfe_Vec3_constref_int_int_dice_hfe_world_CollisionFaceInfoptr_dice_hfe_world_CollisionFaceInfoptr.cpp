// FUNCTION: BF2 0x5622d0
// TriggerableTarget::handleCollision 0x5622d0 — délégation à Bundle::handleCollision
namespace dice { namespace hfe { namespace world {

extern bool bundle_handle_collision(void* self, void* obj, void const* a, void const* b,
                                    void const* c, int i1, int i2, void* f1, void* f2);

bool handleCollision(void* self, void* obj, void const* a, void const* b, void const* c,
                     int i1, int i2, void* f1, void* f2) {
    return bundle_handle_collision(self, obj, a, b, c, i1, i2, f1, f2);
}

}}}
