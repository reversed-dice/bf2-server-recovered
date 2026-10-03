// FUNCTION: BF2 0x572990
namespace dice { namespace hfe { namespace world {

class ZiplineTemplate {
public:
    int getRef();
};

int ZiplineTemplate::getRef() {
    return *(int*)((char*)this + 0x1c8);
}

} } }
