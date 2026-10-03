// FUNCTION: BF2 0x52dfd0
namespace dice { namespace hfe { namespace world {

class MaskObjectTemplate {
public:
    int getMaskType() const;
};

int MaskObjectTemplate::getMaskType() const {
    return *(int*)((char*)this + 0x218);
}

} } }
