// FUNCTION: BF2 0x558d50
namespace dice { namespace hfe { namespace world {

class SoldierTemplate {
public:
    int getRef();
};

int SoldierTemplate::getRef() {
    return *(int*)((char*)this + 0x200);
}

} } }
