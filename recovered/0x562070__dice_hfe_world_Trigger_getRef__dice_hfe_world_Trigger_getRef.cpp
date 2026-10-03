// FUNCTION: BF2 0x562070
namespace dice { namespace hfe { namespace world {

class Trigger {
public:
    int getRef();
};

int Trigger::getRef() {
    return *(int*)((char*)this + 0x238);
}

} } }
