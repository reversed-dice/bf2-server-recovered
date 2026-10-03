// FUNCTION: BF2 0x46d2b0
namespace dice { namespace hfe {

class MMBackend {
public:
    virtual ~MMBackend();
};

} }

extern "C" void _ZN4dice3hfe9MMBackendD1Ev(void* self) {
    *(void**)self = (void*)0xb32050;
}
// REVERSED_FUNCTION: dice_hfe_MMBackend_dtor_MMBackend (0x46d2b0)