// FUNCTION: BF2 0x60c4d0
namespace dice { namespace hfe { namespace world {

class RecoilComp {
public:
    int getRef() const;
};

int RecoilComp::getRef() const {
    return *(const int*)((const char*)this + 0x28);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_RecoilComp_getRef (0x60c4d0)