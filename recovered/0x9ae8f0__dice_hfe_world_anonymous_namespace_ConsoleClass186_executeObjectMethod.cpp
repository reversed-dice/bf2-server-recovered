// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x9ae8f0
#include <string>
namespace dice { namespace hfe { namespace world {
extern void* getActiveTemplate(unsigned int cid);
extern unsigned int CID_BundleTemplate;
extern int BundleTemplate_mActiveMemberId;
struct ConsoleClass186b {
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _pad[7];
    std::string m_result;
    void* executeObjectMethod();
};
void* ConsoleClass186b::executeObjectMethod() {
    if (m_argc == 0) {
        m_hasResult = 1;
        void* t = getActiveTemplate(CID_BundleTemplate);
        m_result = ((std::string (*)(void*, int))(*(void***)t)[0x250 / 8])(t, BundleTemplate_mActiveMemberId);
        return &m_result;
    }
    if (m_argc == 1) {
        int id = **(int**)((char*)this + 0x38);
        m_hasResult = 1;
        void* t = getActiveTemplate(CID_BundleTemplate);
        m_result = ((std::string (*)(void*, int))(*(void***)t)[0x250 / 8])(t, id);
        return &m_result;
    }
    return 0;
}
} } }
