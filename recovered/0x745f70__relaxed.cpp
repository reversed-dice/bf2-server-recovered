// FUNCTION: BF2 0x745f70
namespace dice { namespace hfe {
extern bool fn_0x00745f50(void* self);
struct Obj {
    unsigned char _pad[16];
    bool cb_745420(const void* s) const;
};
bool Obj::cb_745420(const void* s) const {
    return fn_0x00745f50((char*)this + 0x128);
}
} }
