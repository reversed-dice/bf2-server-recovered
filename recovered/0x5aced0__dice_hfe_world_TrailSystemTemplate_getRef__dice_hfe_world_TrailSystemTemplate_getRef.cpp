// FUNCTION: BF2 0x5aced0
namespace dice { namespace hfe { namespace world {

class TrailSystemTemplate {
public:
    int getRef();
};

int TrailSystemTemplate::getRef() {
    return *(int*)((char*)this + 0x90);
}

} } }
