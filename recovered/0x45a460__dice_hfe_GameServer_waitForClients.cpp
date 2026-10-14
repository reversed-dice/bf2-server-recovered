// FUNCTION: BF2 0x45a460
namespace dice { namespace hfe {

extern "C" void* g_10aa1a8;   // g_system
extern "C" void* g_10c5420;   // game
extern "C" void* g_108d9f0;   // bf2Engine

extern "C" void* func_0x00407508(unsigned long size);      // operator new
extern "C" void func_0x0042c170(void* self, int cat, unsigned int id, int b, void* p, unsigned int n, float f);
extern "C" void func_0x004d3960(void* self, bool v);       // BF2Engine::updateStatusMonitor

typedef void (*VFnVV)(void*, void*);
typedef double (*VFnD)(void*);
typedef void (*VFnIF)(void*, int, float);
typedef void (*VFnI)(void*, int);

class GameServer {
public:
    void waitForClients();
private:
    char _pad0[0x110];
    unsigned int m_limit;      // 0x110
    char _pad1[0x209];
    unsigned char m_active;    // 0x31d
    char _pad2[2];
    unsigned int m_count;      // 0x320
};

void GameServer::waitForClients() {
    m_active = 1;
    m_count = 0;
    VFnVV send = (VFnVV)(*(void***)this)[0x118 / 8];
    void* ev = func_0x00407508(0x58);
    func_0x0042c170(ev, 6, 0x14, 0, 0, 0, 0.0f);
    send(this, ev);
    unsigned int limit = m_limit;
    float end = (float)(*(VFnD)(*(void***)g_10aa1a8)[0x38 / 8])(g_10aa1a8) + 10.0f;
    while ((float)(*(VFnD)(*(void***)g_10aa1a8)[0x38 / 8])(g_10aa1a8) < end) {
        if (limit <= m_count) break;
        (*(VFnIF)(*(void***)g_10c5420)[0x60 / 8])(g_10c5420, 0, -1.0f);
        void* eng = g_108d9f0;
        if (eng) func_0x004d3960(eng, true);
        (*(VFnI)(*(void***)g_10aa1a8)[0x40 / 8])(g_10aa1a8, 0);
    }
    m_active = 0;
}

} }
