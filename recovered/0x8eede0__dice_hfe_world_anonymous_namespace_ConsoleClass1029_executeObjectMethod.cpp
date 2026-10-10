// FUNCTION: BF2 0x8eede0
namespace dice { namespace hfe { namespace world {
extern unsigned int CID_PlayerControlObjectTemplate;
extern unsigned int CID_DefaultDetonationCompTemplate;
extern unsigned int IID_IProjectileDetonationCompTemplate;
extern void* getActiveTemplate(unsigned int cid);
extern void* getActiveTemplateComponent(unsigned int iid, unsigned int cid);
struct ConsoleClass1029 {
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _p2[1];
    unsigned char m_result;
    void* executeObjectMethod();
};
void* ConsoleClass1029::executeObjectMethod() {
    if (m_argc == 0) {
        m_hasResult = 1;
        void* t = getActiveTemplate(CID_PlayerControlObjectTemplate);
        unsigned char b = *(unsigned char*)((char*)t + 0x34c);
        m_result = ((float)b != 0.0f);
        return &m_result;
    }
    if (m_argc != 1) return 0;
    unsigned char b = **(unsigned char**)((char*)this + 0x38);
    m_hasResult = 0;
    void* t = getActiveTemplate(CID_PlayerControlObjectTemplate);
    *(unsigned char*)((char*)t + 0x34c) = ((float)b != 0.0f);
    return 0;
}
} } }
