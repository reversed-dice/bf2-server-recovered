// FUNCTION: BF2 0x50de90
namespace dice { namespace hfe { namespace world {

class BundleTemplate {
public:
    int getRef();
};

int BundleTemplate::getRef() {
    return *(int*)((char*)this + 0x1d0);
}

} } }
