// FUNCTION: BF2 0x6015a0
namespace dice { namespace hfe { namespace world {

class ThrownFireComp {
public:
    int getRef() const;
};

int ThrownFireComp::getRef() const {
    return *(int*)((char*)this + 0x160);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ThrownFireComp_getRef (0x6015a0)