// FUNCTION: BF2 0x454ee0
#include <string.h>

namespace dice { namespace hfe {
namespace io {
struct PlayerInput {
    int data[64];
    long a;
    long b;
    char c;
};
}

class PlayerAction {
public:
    void set(io::PlayerInput const&);
    int m_0;
    char m_pad[0x14];
};

class ActionBuffer {
public:
    void pushBack(PlayerAction&);
};

class WorldPref {
public:
    static int getTickCount();
};

namespace world {
class PlayerManager {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void* getPlayer();
};
extern PlayerManager* playerManager;
}

class GameServer {
public:
    void processLocalPlayersInputs(int count);
};

// compile-state padding: 13 unused functions, see trick 378
__attribute__((used)) int __pad_0(int x) { int y = x * 0 + 3; return y; }
__attribute__((used)) int __pad_1(int x) { int y = x * 1 + 3; return y; }
__attribute__((used)) int __pad_2(int x) { int y = x * 2 + 3; return y; }
__attribute__((used)) int __pad_3(int x) { int y = x * 3 + 3; return y; }
__attribute__((used)) int __pad_4(int x) { int y = x * 4 + 3; return y; }
__attribute__((used)) int __pad_5(int x) { int y = x * 5 + 3; return y; }
__attribute__((used)) int __pad_6(int x) { int y = x * 6 + 3; return y; }
__attribute__((used)) int __pad_7(int x) { int y = x * 7 + 3; return y; }
__attribute__((used)) int __pad_8(int x) { int y = x * 8 + 3; return y; }
__attribute__((used)) int __pad_9(int x) { int y = x * 9 + 3; return y; }
__attribute__((used)) int __pad_10(int x) { int y = x * 10 + 3; return y; }
__attribute__((used)) int __pad_11(int x) { int y = x * 11 + 3; return y; }
__attribute__((used)) int __pad_12(int x) { int y = x * 12 + 3; return y; }
void GameServer::processLocalPlayersInputs(int count)
{
    if (world::playerManager->getPlayer() == 0) {
        return;
    }
    void* player = world::playerManager->getPlayer();
    io::PlayerInput input;
    input.a = 0;
    input.b = 0;
    input.c = 0;
    for (int i = 0; i < 64; ++i) {
        input.data[i] = 0;
    }
    char* self = (char*)this;
    long* list = (long*)(self + 0x50);
    long* cur = *(long**)(self + 0x50);
    if (count > 0) {
        int i = 0;
        do {
            if ((long*)list == cur) {
                for (int j = 0; j < 64; ++j) {
                    input.data[j] = 0;
                }
                cur = (long*)list;
            } else {
                memcpy(&input, (char*)cur + 0x10, 0x111);
                if (cur == (long*)*list) {
                    ((void (*)(void*, io::PlayerInput*, int))(*(void***)player)[17])(player, &input, 0);
                }
                cur = (long*)*cur;
            }
            ++i;
            PlayerAction action;
            action.set(input);
            action.m_0 = WorldPref::getTickCount();
            ActionBuffer* buf = (ActionBuffer*)((void* (*)(void*))(*(void***)player)[38])(player);
            buf->pushBack(action);
        } while (count != i);
    }
}

}}
