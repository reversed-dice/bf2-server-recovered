// FUNCTION: BF2 0x46b900
namespace dice { namespace hfe {
class Authenticator {
public:
    ~Authenticator();
};
Authenticator::~Authenticator() { *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb31ef0); }
} }
// REVERSED_FUNCTION: dice_hfe_Authenticator_dtor_Authenticator (0x46b900)