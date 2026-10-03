// FUNCTION: BF2 0x4bd490
namespace dice { namespace hfe {
class IObject {
public:
    char _pad[0x40];
    void* field;
    void* getLatencyCullerObject() const;
};
void* IObject::getLatencyCullerObject() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_IObject_getLatencyCullerObject (0x4bd490)
