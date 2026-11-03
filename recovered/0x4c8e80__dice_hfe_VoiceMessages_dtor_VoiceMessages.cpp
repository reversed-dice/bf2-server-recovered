// FUNCTION: BF2 0x4c8e80
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>
#include <vector>
#include <utility>

class IPolymorphic {
public:
    virtual ~IPolymorphic();
};

struct RefCounted {
    int m_refs;
    void release() { if (--m_refs == 0) delete this; }
};

struct RefHolder {
    RefCounted* m_p;
    ~RefHolder() { if (m_p) m_p->release(); }
};

namespace dice { namespace hfe {

class VoiceMessages {
public:
    std::string m_x0[2];
    std::string m_x10;
    float m_x18;
    float m_x1c;
    void* m_x20;
    std::map<std::string, int> m_x28;
    std::map<std::string, int> m_x58;
    std::map<std::string, int> m_x88;
    std::map<std::string, int> m_xb8;
    std::vector<std::string> m_xe8;
    std::vector<std::string> m_x100[2];
    std::vector<std::string> m_x130;
    std::vector<std::string> m_x148;
    char m_x160[0x2000];
    IPolymorphic* m_x2160;
    IPolymorphic* m_x2168[2];
    IPolymorphic* m_x2178;
    std::vector<std::pair<std::string, int> > m_x2180[2];
    IPolymorphic* m_x21b0[2][2];
    RefHolder m_x21d0[2];
    float m_x21e0;

    ~VoiceMessages();
};

VoiceMessages::~VoiceMessages()
{
    for (int i = 0; i < 2; ++i) {
        if (m_x2168[i] != 0)
            delete m_x2168[i];
        for (int j = 0; j < 2; ++j) {
            if (m_x21b0[i][j] != 0)
                delete m_x21b0[i][j];
        }
    }
    if (m_x2160 != 0)
        delete m_x2160;
    if (m_x2178 != 0)
        delete m_x2178;
}

} }
