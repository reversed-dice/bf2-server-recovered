// FUNCTION: BF2 0x687000
namespace dice { namespace hfe { namespace world {
void* getRelTrans_0x687000(void* self) {
    if (*(void**)((char*)self + 0x50)) return *(void**)((char*)self + 0x158);
    return (char*)self + 0x10c;
}
} } }
