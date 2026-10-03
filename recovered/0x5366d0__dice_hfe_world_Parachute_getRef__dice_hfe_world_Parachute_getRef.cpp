// FUNCTION: BF2 0x5366d0
namespace dice { namespace hfe { namespace world {

class Parachute {
public:
    int getRef();
};

int Parachute::getRef() {
    return *(int*)((char*)this + 0x5fc);
}

} } }
