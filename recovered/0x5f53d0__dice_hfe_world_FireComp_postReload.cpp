// FUNCTION: BF2 0x5f53d0
// FireComp::postReload 0x5f53d0 — store 0
namespace dice { namespace hfe { namespace world {

void postReload(void* self) {
    *(unsigned int*)((char*)self + 0x4c) = 0;
}

}}}
