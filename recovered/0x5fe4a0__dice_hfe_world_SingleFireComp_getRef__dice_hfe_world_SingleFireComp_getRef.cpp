// FUNCTION: BF2 0x5fe4a0
namespace dice { namespace hfe { namespace world {

class SingleFireComp {
    unsigned char pad_0x000[0x160];
public:
    int m_field_160; // offset 0x160
    int getRef();
};

int SingleFireComp::getRef() {
    return m_field_160;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SingleFireComp_getRef (0x5fe4a0)