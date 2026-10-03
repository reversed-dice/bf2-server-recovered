// FUNCTION: BF2 0x46d2d0
void operator delete(void*);

namespace dice { namespace hfe {

class MMBackend {
public:
    ~MMBackend();
};

MMBackend::~MMBackend() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb32050);
    operator delete(this);
}

} }
// REVERSED_FUNCTION: dice_hfe_MMBackend_dtor_MMBackend (0x46d2d0)