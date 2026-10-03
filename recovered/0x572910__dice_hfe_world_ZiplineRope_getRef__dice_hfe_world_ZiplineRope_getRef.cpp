// FUNCTION: BF2 0x572910
namespace dice { namespace hfe { namespace world {

class ZiplineRope {
public:
    int getRef();
};

int ZiplineRope::getRef() {
    return *(int*)((char*)this + 0x22c);
}

} } }
