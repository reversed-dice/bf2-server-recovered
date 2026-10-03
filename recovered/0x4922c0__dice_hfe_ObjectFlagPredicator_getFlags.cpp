// FUNCTION: BF2 0x4922c0
namespace dice { namespace hfe {
class ObjectFlagPredicator {
public:
    char _pad[0x8];
    int field;
    int getFlags() const;
};
int ObjectFlagPredicator::getFlags() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ObjectFlagPredicator_getFlags (0x4922c0)
