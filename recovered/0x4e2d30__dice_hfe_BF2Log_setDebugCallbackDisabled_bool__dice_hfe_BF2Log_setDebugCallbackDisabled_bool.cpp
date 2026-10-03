// FUNCTION: BF2 0x4e2d30
namespace dice { namespace hfe {

class BF2Log {
public:
    void setDebugCallbackDisabled(unsigned char);
};

void BF2Log::setDebugCallbackDisabled(unsigned char value) {
    *(unsigned char*)((char*)this + 0x8) = value;
}

} }
