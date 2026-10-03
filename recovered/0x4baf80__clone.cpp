// FUNCTION: BF2 0x4baf80
namespace dice { namespace hfe {

class MapList {
public:
    void setDirty(unsigned char);
};

void MapList::setDirty(unsigned char value) {
    *(unsigned char*)((char*)this + 0x9b) = value;
}

} }
