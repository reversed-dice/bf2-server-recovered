// FUNCTION: BF2 0x745aa0
namespace dice { namespace hfe {
extern bool fn_0x00745a80(void* self);
struct Obj {
    unsigned char _pad[16];
    bool cb_745420(const void* s) const;
};
bool Obj::cb_745420(const void* s) const {
    return fn_0x00745a80((char*)this + 0xb8);
}
} }
