// FUNCTION: BF2 0x5457f0
namespace dice { namespace hfe { namespace world {

class RopeLink {
public:
    int getRef();
};

int RopeLink::getRef() {
    return *(int*)((char*)this + 0x22c);
}

} } }
