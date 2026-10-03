// FUNCTION: BF2 0x718a20
namespace dice { namespace hfe { namespace world {
extern bool fn_719ba0(void* a, int b, int c, void* d, void* e, void* f, void* g, void* h, void* i, void* j);
struct CM {
    unsigned char _pad[0x18];
    void* m_18;
    unsigned char _pad2[0x4];
    int m_24;
    bool getDistanceToCapsules_0x718a20(int b, void* c, void* d, void* e, void* f, void* g, void* h, void* i);
};
bool CM::getDistanceToCapsules_0x718a20(int b, void* c, void* d, void* e, void* f, void* g, void* h, void* i) {
    return fn_719ba0(m_18, m_24, b, c, d, e, f, g, h, i);
}
} } }
