// FUNCTION: BF2 0x5e9d30
namespace dice { namespace hfe { namespace world {

class GenericFireArmTemplate {
public:
    int getRef();
};

int GenericFireArmTemplate::getRef() {
    return *(int*)((char*)this + 0x220);
}

} } }
