#include <string>

namespace dice { namespace hfe { namespace world {
extern void* playerManager;
} } }

namespace dice { namespace hfe {

class Game {
public:
    void outputChatString(unsigned int channel, unsigned int msgType, int a, int b, const std::wstring& s);
};

void Game::outputChatString(unsigned int channel, unsigned int msgType, int a, int b, const std::wstring& s) {
    void* pmgr = dice::hfe::world::playerManager;
    void** vt = *(void***)pmgr;
    void* obj = ((void* (*)(void*, int, unsigned int))vt[8])(pmgr, a, msgType);
    if (obj) {
        void** ovt = *(void***)obj;
        ((void (*)(void*))ovt[58])(obj);
    }
    switch (channel) {
    case 0: case 1: case 2: case 3: case 4: case 5:
    case 6: case 7: case 8: case 9: case 10: case 11:
    case 14: case 15: case 16: case 17: case 18:
        return ((void (*)(void*))vt[12])(pmgr);
    case 12:
    case 13:
    default:
        return;
    }
}

} } // namespace
// REVERSED_FUNCTION: Game::outputChatString (0x40f530)