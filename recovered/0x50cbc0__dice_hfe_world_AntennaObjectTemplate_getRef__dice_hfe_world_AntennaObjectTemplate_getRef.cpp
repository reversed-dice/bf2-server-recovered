// FUNCTION: BF2 0x50cbc0
namespace dice { namespace hfe { namespace world {

class AntennaObjectTemplate {
public:
    int getRef();
};

int AntennaObjectTemplate::getRef() {
    return *(int*)((char*)this + 0x1c8);
}

} } }
