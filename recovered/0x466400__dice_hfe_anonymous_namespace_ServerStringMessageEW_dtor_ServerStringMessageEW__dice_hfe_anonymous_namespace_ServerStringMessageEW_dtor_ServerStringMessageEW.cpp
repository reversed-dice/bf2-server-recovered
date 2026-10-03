// FUNCTION: BF2 0x466400
namespace dice { namespace hfe { namespace {

class ServerStringMessageEW {
public:
    ~ServerStringMessageEW();
};

ServerStringMessageEW::~ServerStringMessageEW() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb30c90);
    ::operator delete(this);
}

} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ServerStringMessageEW_dtor_ServerStringMessageEW (0x466400)