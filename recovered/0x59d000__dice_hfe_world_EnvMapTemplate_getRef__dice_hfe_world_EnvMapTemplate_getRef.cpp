// FUNCTION: BF2 0x59d000
namespace dice { namespace hfe { namespace world {

class EnvMapTemplate {
public:
    int getRef();
};

int EnvMapTemplate::getRef() {
    return *(int*)((char*)this + 0x1c8);
}

} } }
