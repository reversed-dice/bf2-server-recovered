// FUNCTION: BF2 0x849740
namespace dice { namespace hfe {
extern void* fn_84a150(void* a, int b, int c, int d, int e, int f);
bool isPbSvEnabled_0x849740() {
    return fn_84a150((void*)0x10b3240, 0x71, -1, 0, 0, 1) != 0;
}
} }
