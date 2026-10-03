// FUNCTION: BF2 0x4b5270
namespace dice { namespace hfe { namespace world {

class ScoreManager {
public:
    int getRef();
};

int ScoreManager::getRef() {
    return *(int*)((char*)this + 0x58);
}

} } }
