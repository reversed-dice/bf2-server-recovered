// FUNCTION: BF2 0x4fe7b0
namespace dice { namespace hfe {
class PythonComp {
public:
    char _pad[0x8];
    int field;
    int getRef() const;
};
int PythonComp::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_PythonComp_getRef (0x4fe7b0)
