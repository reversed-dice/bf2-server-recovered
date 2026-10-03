// FUNCTION: BF2 0x46bb20
namespace dice { namespace hfe {

class GameSpyBackend {
public:
    unsigned char isInitialized() const;
};

unsigned char GameSpyBackend::isInitialized() const {
    return *(unsigned char*)((char*)this + 0x8);
}

} }
