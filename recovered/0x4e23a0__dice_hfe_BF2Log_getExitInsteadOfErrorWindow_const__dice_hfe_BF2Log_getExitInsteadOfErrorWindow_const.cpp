// FUNCTION: BF2 0x4e23a0
namespace dice { namespace hfe {

class BF2Log {
public:
    unsigned char getExitInsteadOfErrorWindow() const;
};

unsigned char BF2Log::getExitInsteadOfErrorWindow() const {
    return *(unsigned char*)((char*)this + 0xa);
}

} }
