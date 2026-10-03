// FUNCTION: BF2 0x5f53f0
// FireComp::enable 0x5f53f0 — 2 stores
namespace dice { namespace hfe { namespace world {

void enable(void* self) {
    *(unsigned int*)((char*)self + 0x158) = 0;
    *(unsigned char*)((char*)self + 0x88) = 0;
}

}}}
