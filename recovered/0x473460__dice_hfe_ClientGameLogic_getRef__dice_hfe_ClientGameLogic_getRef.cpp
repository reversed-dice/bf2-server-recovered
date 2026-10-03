// FUNCTION: BF2 0x473460
namespace dice { namespace hfe {

class ClientGameLogic {
public:
    int getRef();
};

int ClientGameLogic::getRef() {
    return *(int*)((char*)this + 0x48c);
}

} }
