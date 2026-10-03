// FUNCTION: BF2 0x799a30
namespace dice { namespace hfe { namespace ai {
void setIdToPlayerMapping_0x799a30(void* self, void* a) {
    long idx = ((int (*)(void*))(*(void***)a)[0x7])(a);
    *(void**)((char*)*(void**)((char*)self + 8) + idx * 8) = a;
}
} } }
