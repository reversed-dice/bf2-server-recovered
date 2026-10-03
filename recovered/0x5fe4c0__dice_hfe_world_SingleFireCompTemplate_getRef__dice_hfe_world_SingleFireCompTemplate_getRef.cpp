// FUNCTION: BF2 0x5fe4c0
namespace dice { namespace hfe { namespace world {

class SingleFireCompTemplate {
public:
    int getRef();
};

int SingleFireCompTemplate::getRef() {
    return *(int*)((char*)this + 0x8c);
}

} } }
