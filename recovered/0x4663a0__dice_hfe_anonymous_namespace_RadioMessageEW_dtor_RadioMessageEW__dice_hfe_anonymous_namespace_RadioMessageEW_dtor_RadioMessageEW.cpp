// FUNCTION: BF2 0x4663a0
namespace dice { namespace hfe { namespace anonymous { namespace anon {

class RadioMessageEW {
public:
    ~RadioMessageEW();
};

RadioMessageEW::~RadioMessageEW()
{
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb30c90);
    operator delete(this);
}

} } } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_RadioMessageEW_dtor_RadioMessageEW (0x4663a0)