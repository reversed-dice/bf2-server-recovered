// FUNCTION: BF2 0x4a4810
namespace dice { namespace hfe {

class ServerGameLogic {
public:
    int getCurrentLevel() const;
};

int ServerGameLogic::getCurrentLevel() const {
    return *(int*)((char*)this + 0x564);
}

} }
