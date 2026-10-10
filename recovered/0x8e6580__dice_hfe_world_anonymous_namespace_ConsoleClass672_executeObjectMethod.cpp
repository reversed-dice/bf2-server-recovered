// FUNCTION: BF2 0x8e6580
namespace dice { namespace hfe { namespace world {

extern unsigned int CID_DefaultDetonationCompTemplate;
extern unsigned int IID_IProjectileDetonationCompTemplate;

void* getActiveTemplateComponent(unsigned int iid, unsigned int cid);

namespace {

class ConsoleClass672 {
public:
    char _pad[0x30];
    int m_argc;
    unsigned char* m_argv;
    char _pad2[0x108 - 0x40];
    unsigned char m_hasResult;
    char _p2[1];
    unsigned char m_result;
    void* executeObjectMethod();
};

void* ConsoleClass672::executeObjectMethod() {
    if (m_argc == 0) {
        m_hasResult = 1;
        void* comp = getActiveTemplateComponent(IID_IProjectileDetonationCompTemplate, CID_DefaultDetonationCompTemplate);
        m_result = ((float)*(unsigned char*)((char*)comp + 0x80) != 0.0f);
        return &m_result;
    }
    if (m_argc != 1) return 0;
    unsigned char* q = m_argv;
    unsigned int cid = CID_DefaultDetonationCompTemplate;
    unsigned char b = *q;
    m_hasResult = 0;
    void* comp = getActiveTemplateComponent(IID_IProjectileDetonationCompTemplate, cid);
    *(unsigned char*)((char*)comp + 0x80) = ((float)b != 0.0f);
    return 0;
}

}

} } }
