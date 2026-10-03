// FUNCTION: BF2 0x550ea0
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    int getGrapplingHookId() const;
};

int Soldier::getGrapplingHookId() const {
    return *(int*)((char*)this + 0x4f0);
}

} } }
