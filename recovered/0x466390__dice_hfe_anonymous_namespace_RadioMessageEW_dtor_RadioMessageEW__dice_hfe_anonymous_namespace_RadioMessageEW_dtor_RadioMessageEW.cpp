// FUNCTION: BF2 0x466390
namespace dice { namespace hfe { namespace anonymous { namespace {
class RadioMessageEW {
public:
    void dtor_RadioMessageEW();
};

void RadioMessageEW::dtor_RadioMessageEW() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb30c90);
}
} } } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_RadioMessageEW_dtor_RadioMessageEW (0x466390)