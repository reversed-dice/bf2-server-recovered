// FUNCTION: BF2 0x52db70
namespace dice { namespace hfe { namespace world {

class LadderTemplate {
public:
    int getRef();
};

int LadderTemplate::getRef() {
    return *(int*)((char*)this + 0x1c8);
}

} } }
