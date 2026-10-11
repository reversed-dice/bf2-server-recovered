// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x78e130
#include <vector>

namespace dice { namespace hfe { namespace ai {

class CommonSingletonServer {
public:
    static void* m_iaiInformationCourier;
    static void* m_iaiInformationEnvironmentModifiers;
};

extern unsigned int IID_IAIObject;

class AIObjectShared {
public:
    virtual ~AIObjectShared();
    char _pad_side[0xc];
    int m_side;
    virtual void setSide(int);
};

class AIObjectPrimaryShared : public AIObjectShared {
public:
    virtual ~AIObjectPrimaryShared();
    bool m_0x18;
    char _pad1[0x58 - 0x19];
    void* m_0x58;
    char _pad2[0x64 - 0x60];
    int m_0x64;
    char _pad3[0x70 - 0x68];
    std::vector<void*> m_secondaryObjects;
    bool m_0x88;
};

AIObjectPrimaryShared::~AIObjectPrimaryShared()
{
    m_0x88 = true;
    for (std::vector<void*>::iterator it = m_secondaryObjects.begin(); it != m_secondaryObjects.end(); ++it) {
        void* p = *it;
        if (p) {
            void* o = ((void* (*)(void*))(*(void***)p)[8])(p);
            ((void (*)(void*, unsigned int, int))(*(void***)o)[22])(o, IID_IAIObject, 0);
        }
    }
    if (m_0x64 != -1) {
        if (!m_0x18) {
            void* l = ((void* (*)(void*, unsigned int))(*(void***)CommonSingletonServer::m_iaiInformationCourier)[2])(CommonSingletonServer::m_iaiInformationCourier, (unsigned int)m_0x64);
            if (l) {
                ((void (*)(void*, unsigned int))(*(void***)CommonSingletonServer::m_iaiInformationCourier)[4])(CommonSingletonServer::m_iaiInformationCourier, (unsigned int)m_0x64);
            }
        } else {
            ((void (*)(void*, unsigned int, int, unsigned int))(*(void***)CommonSingletonServer::m_iaiInformationEnvironmentModifiers)[5])(CommonSingletonServer::m_iaiInformationEnvironmentModifiers, 0, m_0x58 != 0, (unsigned int)m_0x64);
            void* l = ((void* (*)(void*, unsigned int))(*(void***)CommonSingletonServer::m_iaiInformationCourier)[2])(CommonSingletonServer::m_iaiInformationCourier, (unsigned int)m_0x64);
            if (l) {
                ((void (*)(void*, unsigned int))(*(void***)CommonSingletonServer::m_iaiInformationCourier)[4])(CommonSingletonServer::m_iaiInformationCourier, (unsigned int)m_0x64);
            }
        }
    }
}

}}}
