// FUNCTION: BF2 0x4be210
namespace dice { namespace hfe {
class ObjectTemplate {
public:
    char _pad[0x28];
    int field;
    int getId() const;
};
int ObjectTemplate::getId() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ObjectTemplate_getId (0x4be210)
