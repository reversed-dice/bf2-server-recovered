// FUNCTION: BF2 0x7b6ca0
namespace dice { namespace hfe { namespace io {
extern void fn_7a2c80(void* a);
extern void fn_7a2c60(void* a);
extern void fn_4085b8(void* a);
void dtor_0x7b6ca0(void* self) {
    void* p = *(void**)self;
    fn_7a2c80(p);
    void* q = *(void**)self;
    if (q) {
        fn_7a2c60(q);
        fn_4085b8(q);
    }
}
} } }
