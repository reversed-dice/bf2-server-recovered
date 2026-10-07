// FUNCTION: BF2 0x4b4ee0
namespace dice { namespace hfe {
extern unsigned int IID_IBase;
namespace io {
extern unsigned int IID_INetworkable;
}

namespace world {

class ScoreManager {
public:
    virtual void* queryInterface(unsigned int id) const;
};

void* ScoreManager::queryInterface(unsigned int id) const {
    if (IID_IBase == id) {
        return const_cast<ScoreManager*>(this);
    }
    if (id == 0xc4b8) {
        return const_cast<ScoreManager*>(this);
    }
    void* res = 0;
    if (id == io::IID_INetworkable) {
        res = (char*)this + 8;
    }
    return res;
}

} } }
