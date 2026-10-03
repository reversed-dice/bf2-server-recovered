// FUNCTION: BF2 0x4b7af0
namespace dice { namespace hfe {

class MapList {
public:
    void setDirty(unsigned char);
};

void MapList::setDirty(unsigned char value) {
    *(unsigned char*)((char*)this + 0x34) = value;
}

} }
