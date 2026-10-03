// FUNCTION: BF2 0x4cdf30
#include <string>

namespace dice { namespace hfe {

class ClientVoteManager {
public:
    static void release();
    static ClientVoteManager* _instance;
private:
    char pad0[0x10];
    std::string a;
    void* pad1;
    std::string b;
};

void ClientVoteManager::release() {
    if (_instance) {
        delete _instance;
        _instance = 0;
    }
}

} }
