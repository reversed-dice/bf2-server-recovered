// FUNCTION: BF2 0x4c0040
namespace dice { namespace hfe {

class CommanderManager {
public:
    int getCommander();
};

int CommanderManager::getCommander() {
    return *(int*)((char*)this + 0x8);
}

} }
