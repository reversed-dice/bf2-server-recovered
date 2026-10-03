// FUNCTION: BF2 0x5728f0
namespace dice { namespace hfe { namespace world {

class ZiplineContainerTemplate {
public:
    int getRef();
};

int ZiplineContainerTemplate::getRef() {
    return *(int*)((char*)this + 0x3d4);
}

} } }
