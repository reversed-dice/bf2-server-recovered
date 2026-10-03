// FUNCTION: BF2 0x505b80
// BF2_FLAGS: -fno-reorder-blocks
struct Vec3 { float x, y, z; };

extern "C" void handleAmbientMessage_0x505b80(void* self, int msg, void* player, const Vec3* pos) {
    if (msg != 0) return;
    void** vtable = *(void***)self;
    void (*fn)(void*, void*, const Vec3*) = (void(*)(void*, void*, const Vec3*))vtable[0x300/8];
    fn(self, player, pos);
}
