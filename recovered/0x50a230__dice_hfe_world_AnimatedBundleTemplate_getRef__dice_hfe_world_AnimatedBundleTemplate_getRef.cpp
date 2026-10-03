// FUNCTION: BF2 0x50a230
namespace dice { namespace hfe { namespace world {

class AnimatedBundleTemplate {
public:
    int getRef();
};

int AnimatedBundleTemplate::getRef() {
    return *(int*)((char*)this + 0x1f4);
}

} } }
