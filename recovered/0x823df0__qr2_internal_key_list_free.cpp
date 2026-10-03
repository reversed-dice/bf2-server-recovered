// FUNCTION: BF2 0x823df0
namespace dice { namespace hfe {
extern void fn_83ef10(void* a);
void qr2_internal_key_list_free_0x823df0(void) {
    void* it = *(void**)0x010b1038;
    while (it) {
        void* next = *(void**)((char*)it + 8);
        fn_83ef10(*(void**)it);
        fn_83ef10(it);
        it = next;
    }
    *(void**)0x010b1038 = 0;
}
} }
