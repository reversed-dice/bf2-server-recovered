// FUNCTION: BF2 0x572940
namespace dice { namespace hfe { namespace world {

class ZiplineRopeTemplate {
public:
    int getRef();
};

int ZiplineRopeTemplate::getRef() {
    return *(int*)((char*)this + 0x1c8);
}

} } }
