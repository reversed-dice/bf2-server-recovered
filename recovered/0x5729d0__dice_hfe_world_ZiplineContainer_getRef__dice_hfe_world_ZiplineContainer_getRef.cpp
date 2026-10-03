// FUNCTION: BF2 0x5729d0
namespace dice { namespace hfe { namespace world {

class ZiplineContainer {
public:
    int getRef();
};

int ZiplineContainer::getRef() {
    return *(int*)((char*)this + 0x5fc);
}

} } }
