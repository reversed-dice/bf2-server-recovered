// FUNCTION: BF2 0xa5d0d0
namespace dice { namespace hfe { namespace world {
extern unsigned int CID_EngineTemplate;
extern void* getActiveTemplate(unsigned int cid);
struct ConsoleClass58 {
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _p2[1];
    int m_result;
    void* executeObjectMethod();
};
void* ConsoleClass58::executeObjectMethod() {
    if (m_argc == 0) {
        m_hasResult = 1;
        void* t = getActiveTemplate(CID_EngineTemplate);
        m_result = *(int*)((char*)t + 0x450);
        return &m_result;
    }
    if (m_argc != 1) return 0;
    float f = **(float**)((char*)this + 0x38);
    m_hasResult = 0;
    void* t = getActiveTemplate(CID_EngineTemplate);
    float y = f < 0.10000000149011612f ? 0.10000000149011612f : f;
    *(float*)((char*)t + 0x450) = y;
    return 0;
}
} } }
