// FUNCTION: BF2 0x592d20
namespace dice { namespace hfe { namespace world {

class DecalTemplate {
public:
    int getRef();
};

int DecalTemplate::getRef() {
    return *(int*)((char*)this + 0x68);
}

} } }
