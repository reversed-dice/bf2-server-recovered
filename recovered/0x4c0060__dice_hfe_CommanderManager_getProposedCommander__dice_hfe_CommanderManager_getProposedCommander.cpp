// FUNCTION: BF2 0x4c0060
namespace dice { namespace hfe {

class CommanderManager {
public:
    int getProposedCommander();
};

int CommanderManager::getProposedCommander() {
    return *(int*)((char*)this + 0xc);
}

} }
