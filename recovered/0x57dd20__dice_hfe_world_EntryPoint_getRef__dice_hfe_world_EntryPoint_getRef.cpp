// FUNCTION: BF2 0x57dd20
namespace dice { namespace hfe { namespace world {

class EntryPoint {
public:
    int getRef();
};

int EntryPoint::getRef() {
    return *(int*)((char*)this + 0x238);
}

} } }
