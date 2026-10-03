// FUNCTION: BF2 0x785d60
// AITemplateCover::getPortalXZExtentR 0x785d60 — ptr + index float
namespace dice { namespace hfe { namespace ai {

float getPortalXZExtentR(void* self, unsigned int idx) {
    void* a = *(void**)((char*)self + 0x20);
    return *(float*)(*(char**)a + (unsigned long)idx * 4);
}

}}}
