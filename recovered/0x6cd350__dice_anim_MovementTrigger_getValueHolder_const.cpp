// FUNCTION: BF2 0x6cd350
namespace dice { namespace hfe {
extern void* fn_6d1530(void* a, void* b);
void* getValueHolder_0x6cd350(void* self) {
    return fn_6d1530(*(void**)0x10a3140, *(void**)((char*)self + 0x48));
}
} }
