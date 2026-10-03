// FUNCTION: BF2 0x5c2870
namespace dice { namespace hfe { namespace world {
extern void fn_408238(void* a, void* b);
void setHudName_0x5c2870(void* self, void* arg2) {
    fn_408238((char*)self + 0x38, arg2);
    fn_408238((char*)self + 0x40, arg2);
}
} } }
