// FUNCTION: BF2 0x79ea70
namespace dice { namespace hfe {

extern "C" void _ZdaPv(void*);
void fn_0x79ea70(void* self) {
    if (*((char*)self+0x10) != 0) {
        void* p = *(void**)self;
        if (p) {
            _ZdaPv(p);
        }
    }
}

} }
// REVERSED_FUNCTION: dice_hfe_io_BitStream_dtor_BitStream (0x79ea70)
