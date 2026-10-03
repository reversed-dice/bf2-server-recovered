// FUNCTION: BF2 0x785d70
// AITemplateCover::getPortalXZExtentL 0x785d70 — ptr+8 + index float
namespace dice { namespace hfe { namespace ai {

float getPortalXZExtentL(void* self, unsigned int idx) {
    void* a = *(void**)((char*)self + 0x20);
    return *(float*)(*(char**)((char*)a + 8) + (unsigned long)idx * 4);
}

}}}
