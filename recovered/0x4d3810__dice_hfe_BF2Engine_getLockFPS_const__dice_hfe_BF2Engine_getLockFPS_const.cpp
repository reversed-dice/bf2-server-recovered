// FUNCTION: BF2 0x4d3810
namespace dice { namespace hfe {

class BF2Engine {
public:
    int getLockFPS() const;
};

int BF2Engine::getLockFPS() const {
    return *(int*)((char*)this + 0xac);
}

} }
