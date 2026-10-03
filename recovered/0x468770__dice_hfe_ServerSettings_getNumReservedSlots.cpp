// FUNCTION: BF2 0x468770
namespace dice { namespace hfe {
class ServerSettings {
public:
    char _pad[0x14c];
    int field;
    int getNumReservedSlots() const;
};
int ServerSettings::getNumReservedSlots() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ServerSettings_getNumReservedSlots (0x468770)
