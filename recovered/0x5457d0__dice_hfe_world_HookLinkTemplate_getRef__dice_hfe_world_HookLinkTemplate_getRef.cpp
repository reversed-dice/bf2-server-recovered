// FUNCTION: BF2 0x5457d0
namespace dice { namespace hfe { namespace world {

class HookLinkTemplate {
public:
    int getRef();
};

int HookLinkTemplate::getRef() {
    return *(int*)((char*)this + 0x1c8);
}

} } }
