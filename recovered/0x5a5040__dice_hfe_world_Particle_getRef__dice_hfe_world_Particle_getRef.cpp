// FUNCTION: BF2 0x5a5040
namespace dice { namespace hfe { namespace world {

class Particle {
public:
    int getRef();
};

int Particle::getRef() {
    return *(int*)((char*)this + 0x220);
}

} } }
