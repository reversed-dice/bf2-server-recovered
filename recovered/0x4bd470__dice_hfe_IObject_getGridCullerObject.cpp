// FUNCTION: BF2 0x4bd470
namespace dice { namespace hfe {
class IObject {
public:
    char _pad[0x38];
    void* field;
    void* getGridCullerObject() const;
};
void* IObject::getGridCullerObject() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_IObject_getGridCullerObject (0x4bd470)
