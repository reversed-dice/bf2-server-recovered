// FUNCTION: BF2 0x52dbb0
namespace dice { namespace hfe { namespace world {

class LadderContainer {
public:
    int getRef();
};

int LadderContainer::getRef() {
    return *(int*)((char*)this + 0x5fc);
}

} } }
