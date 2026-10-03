// FUNCTION: BF2 0x550e40
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    void setZiplineId(unsigned int);
};

void Soldier::setZiplineId(unsigned int value) {
    *(unsigned int*)((char*)this + 0x4ec) = value;
}

} } }
