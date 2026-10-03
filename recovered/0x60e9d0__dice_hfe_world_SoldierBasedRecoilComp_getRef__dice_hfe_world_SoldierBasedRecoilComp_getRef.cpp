// FUNCTION: BF2 0x60e9d0
namespace dice { namespace hfe { namespace world {

class SoldierBasedRecoilComp {
public:
    int getRef();
};

int SoldierBasedRecoilComp::getRef() {
    return *(int*)((char*)this + 0x80);
}

} } }
