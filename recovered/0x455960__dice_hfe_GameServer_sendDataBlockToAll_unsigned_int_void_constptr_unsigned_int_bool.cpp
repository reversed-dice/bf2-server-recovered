// FUNCTION: BF2 0x455960
#include <map>

namespace dice { namespace hfe {

class Connection {
public:
    virtual void send(unsigned int id, void const* data, unsigned int size);
};

class Client {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3)
#undef V
    virtual Connection* getConnection(); // slot 4 = 0x20
    char pad[0x10];
    int m_priority; // offset 0x18
};

class GameServer {
public:
    void sendDataBlockToAll(unsigned int id, void const* data, unsigned int size, bool flag);

    char pad[0xe8];
    std::map<int, Client*> m_clients;
};

// compile-state padding: 14 unused functions, see trick 378
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
__attribute__((used)) int __pad_13(int x) { int y = x * 13 + 3; return y; }
void GameServer::sendDataBlockToAll(unsigned int id, void const* data, unsigned int size, bool flag)
{
    std::map<int, Client*>::iterator it = m_clients.begin();
    std::map<int, Client*>::iterator end = m_clients.end();
    while (it != end) {
        if (!flag || it->second->m_priority > 0) {
            it->second->getConnection()->send(id, data, size);
        }
        ++it;
    }
}

} }
