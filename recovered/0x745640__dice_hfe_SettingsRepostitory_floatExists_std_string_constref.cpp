// FUNCTION: BF2 0x745640
namespace dice { namespace hfe {
extern bool fn_0x00745620(void* self);
struct Obj {
    unsigned char _pad[72];
    bool cb_745640(const void* s) const;
};
bool Obj::cb_745640(const void* s) const {
    return fn_0x00745620((char*)this + 0x48);
}
} }
