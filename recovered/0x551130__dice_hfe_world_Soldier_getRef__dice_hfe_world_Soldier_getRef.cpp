// FUNCTION: BF2 0x551130
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    int getRef();
};

int Soldier::getRef() {
    return *(int*)((char*)this + 0x250);
}

} } }
