// FUNCTION: BF2 0x4bd4b0
namespace dice { namespace hfe {
class IObject {
public:
    char _pad[0x98];
    void* field;
    void* getNetworkable() const;
};
void* IObject::getNetworkable() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_IObject_getNetworkable (0x4bd4b0)
