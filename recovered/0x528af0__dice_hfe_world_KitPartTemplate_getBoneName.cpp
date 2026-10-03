// FUNCTION: BF2 0x528af0
// KitPartTemplate::getBoneName 0x528af0 — word + 2 calls
namespace dice { namespace hfe { namespace world {

extern void* get_bone0();
extern void* get_bone1(void* ctx, int idx);

void* getBoneName(void* self) {
    int idx = (short)*(short*)((char*)self + 0x1f2);
    void* ctx = get_bone0();
    return get_bone1(ctx, idx);
}

}}}
