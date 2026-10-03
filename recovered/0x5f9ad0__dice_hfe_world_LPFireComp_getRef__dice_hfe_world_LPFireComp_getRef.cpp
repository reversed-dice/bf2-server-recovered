// FUNCTION: BF2 0x5f9ad0
namespace dice { namespace hfe { namespace world {

class LPFireComp {
public:
    int getRef();
};

int LPFireComp::getRef() {
    return *(int*)((char*)this + 0x160);
}

} } }
