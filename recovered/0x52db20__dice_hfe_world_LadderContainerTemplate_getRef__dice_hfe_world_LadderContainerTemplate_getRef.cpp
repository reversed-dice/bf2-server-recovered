// FUNCTION: BF2 0x52db20
namespace dice { namespace hfe { namespace world {

class LadderContainerTemplate {
public:
    int getRef();
};

int LadderContainerTemplate::getRef() {
    return *(int*)((char*)this + 0x3d4);
}

} } }
