// FUNCTION: BF2 0x4be220
namespace dice { namespace hfe {
class ObjectTemplate {
public:
    char _pad[0x2c];
    int field;
    int getFlags() const;
};
int ObjectTemplate::getFlags() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ObjectTemplate_getFlags (0x4be220)
