// FUNCTION: BF2 0x464f90
namespace dice { namespace hfe { namespace {
class StringMessageEW {
public:
    unsigned int getSenderId() const;
};
unsigned int StringMessageEW::getSenderId() const {
    const char* p = *reinterpret_cast<const char* const*>(reinterpret_cast<const char*>(this) + 8);
    return *reinterpret_cast<const unsigned int*>(p + 0x28);
}
} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_StringMessageEW_getSenderId (0x464f90)