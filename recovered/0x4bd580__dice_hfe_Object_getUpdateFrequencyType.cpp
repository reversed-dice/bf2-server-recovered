// FUNCTION: BF2 0x4bd580
namespace dice { namespace hfe {
class Object {
public:
    char _pad[0x1ec];
    int field;
    int getUpdateFrequencyType() const;
};
int Object::getUpdateFrequencyType() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Object_getUpdateFrequencyType (0x4bd580)
