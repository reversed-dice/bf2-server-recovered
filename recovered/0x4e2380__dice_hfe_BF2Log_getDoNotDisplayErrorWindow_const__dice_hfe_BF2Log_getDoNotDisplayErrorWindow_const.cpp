// FUNCTION: BF2 0x4e2380
namespace dice { namespace hfe {

class BF2Log {
public:
    unsigned char getDoNotDisplayErrorWindow() const;
};

unsigned char BF2Log::getDoNotDisplayErrorWindow() const {
    return *(unsigned char*)((char*)this + 0x9);
}

} }
