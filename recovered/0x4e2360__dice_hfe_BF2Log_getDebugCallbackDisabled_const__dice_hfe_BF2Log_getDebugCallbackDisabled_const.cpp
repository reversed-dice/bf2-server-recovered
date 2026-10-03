// FUNCTION: BF2 0x4e2360
namespace dice { namespace hfe {

class BF2Log {
public:
    unsigned char getDebugCallbackDisabled() const;
};

unsigned char BF2Log::getDebugCallbackDisabled() const {
    return *(unsigned char*)((char*)this + 0x8);
}

} }
