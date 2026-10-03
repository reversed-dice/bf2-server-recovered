// FUNCTION: BF2 0x417400
namespace dice { namespace hfe {

class MapList {
public:
    unsigned char isDirty() const;
};

unsigned char MapList::isDirty() const {
    return *(unsigned char*)((char*)this + 0x60);
}

} }
