// FUNCTION: BF2 0x55f2f0
namespace dice { namespace hfe {
extern "C" long fn_69a1e0(void* self);
int eom_55f2f0(char* self) {
    if (*(char*)(self + 0x245) == 0) return 0;
    void* o = (void*)fn_69a1e0(self);
    if (*(char*)((char*)o + 0x8) & 0x1) return 0;
    return 1;
}
} }
// REVERSED_FUNCTION: test (0x55f2f0)
