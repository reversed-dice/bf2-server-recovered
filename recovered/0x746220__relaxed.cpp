// FUNCTION: BF2 0x746220
namespace dice { namespace hfe {
extern bool fn_0x00746200(void* self);
struct Obj {
    unsigned char _pad[16];
    bool cb_745420(const void* s) const;
};
bool Obj::cb_745420(const void* s) const {
    return fn_0x00746200((char*)this + 0x160);
}
} }
