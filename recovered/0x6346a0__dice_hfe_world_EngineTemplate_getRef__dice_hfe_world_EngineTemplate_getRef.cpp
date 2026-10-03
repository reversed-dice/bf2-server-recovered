// FUNCTION: BF2 0x6346a0
namespace dice { namespace hfe { namespace world {

class EngineTemplate {
public:
    int getRef();
};

int EngineTemplate::getRef() {
    return *(int*)((char*)this + 0x298);
}

} } }
