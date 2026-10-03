// FUNCTION: BF2 0x5457a0
namespace dice { namespace hfe { namespace world {

class RopeLinkTemplate {
public:
    int getRef();
};

int RopeLinkTemplate::getRef() {
    return *(int*)((char*)this + 0x1c8);
}

} } }
