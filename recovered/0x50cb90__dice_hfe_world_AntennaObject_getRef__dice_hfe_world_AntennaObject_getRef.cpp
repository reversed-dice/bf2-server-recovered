// FUNCTION: BF2 0x50cb90
namespace dice { namespace hfe { namespace world {

class AntennaObject {
public:
    int getRef();
};

int AntennaObject::getRef() {
    return *(int*)((char*)this + 0x22c);
}

} } }
