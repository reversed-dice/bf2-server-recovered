// FUNCTION: BF2 0xb25d80
#include <map>

namespace dice { namespace hfe { namespace ai {

enum AIRadioMessageType {
    MSG_NONE = 0
};

} } }

namespace std {
template class _Rb_tree<dice::hfe::ai::AIRadioMessageType,
                       pair<dice::hfe::ai::AIRadioMessageType const, unsigned char>,
                       _Select1st<pair<dice::hfe::ai::AIRadioMessageType const, unsigned char> >,
                       less<dice::hfe::ai::AIRadioMessageType>,
                       allocator<pair<dice::hfe::ai::AIRadioMessageType const, unsigned char> > >;
}
