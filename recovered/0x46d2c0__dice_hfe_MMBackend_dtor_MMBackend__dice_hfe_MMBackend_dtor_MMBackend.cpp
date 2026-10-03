// FUNCTION: BF2 0x46d2c0
namespace dice { namespace hfe {
class MMBackend {
public:
    ~MMBackend();
};
MMBackend::~MMBackend() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb32050);
}
} }
// REVERSED_FUNCTION: dice_hfe_MMBackend_dtor_MMBackend (0x46d2c0)