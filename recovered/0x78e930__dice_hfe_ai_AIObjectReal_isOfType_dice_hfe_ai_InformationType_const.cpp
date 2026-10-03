// FUNCTION: BF2 0x78e930
// AIObjectReal::isOfType 0x78e930 — bit test
namespace dice { namespace hfe { namespace ai {

bool isOfType(void* self, int info_type) {
    void* a = *(void**)((char*)self + 0x28);
    return (*(int*)((char*)a + 0xc) >> info_type) & 1;
}

}}}
