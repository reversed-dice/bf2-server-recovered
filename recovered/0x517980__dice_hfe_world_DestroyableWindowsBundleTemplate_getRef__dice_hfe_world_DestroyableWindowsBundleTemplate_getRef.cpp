// FUNCTION: BF2 0x517980
namespace dice { namespace hfe { namespace world {

class DestroyableWindowsBundleTemplate {
public:
    int getRef();
};

int DestroyableWindowsBundleTemplate::getRef() {
    return *(int*)((char*)this + 0x1f4);
}

} } }
