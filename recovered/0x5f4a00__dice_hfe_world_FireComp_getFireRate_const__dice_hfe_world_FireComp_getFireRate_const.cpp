// FUNCTION: BF2 0x5f4a00
namespace dice { namespace hfe { namespace world {

class FireComp {
public:
    int getFireRate() const;
};

int FireComp::getFireRate() const {
    return *(int*)((char*)this + 0x40);
}

} } }
