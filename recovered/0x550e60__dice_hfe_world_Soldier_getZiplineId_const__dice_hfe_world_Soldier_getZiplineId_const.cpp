// FUNCTION: BF2 0x550e60
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    int getZiplineId() const;
};

int Soldier::getZiplineId() const {
    return *(int*)((char*)this + 0x4ec);
}

} } }
