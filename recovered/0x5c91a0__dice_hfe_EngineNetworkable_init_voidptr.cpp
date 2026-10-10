// FUNCTION: BF2 0x5c91a0
namespace dice { namespace hfe { namespace io {
extern unsigned int IID_INetworkableObject;
} } }

namespace dice { namespace hfe {

class EngineNetworkable {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int) const;
    virtual ~EngineNetworkable();
    virtual void v6();
    virtual void vfn38();

    class UPDATE_UPDATE {
    public:
        UPDATE_UPDATE()
        {
            *(int*)((char*)this + 0) = 0;
            *(unsigned char*)((char*)this + 4) = 0;
        }
        char _pad[0x3c];
    };

    char _pad0[0x20];
    void* m_unk28;              // +0x28
    char _pad1[0x30];
    void* m_unk60;              // +0x60
    char _pad2[0x10];
    void* m_unk78;              // +0x78
    UPDATE_UPDATE* m_arr;       // +0x80

    bool init(void* p);
};

bool EngineNetworkable::init(void* p)
{
    m_unk60 = p;
    m_unk78 = p;
    m_unk28 = this->queryInterface(dice::hfe::io::IID_INetworkableObject);
    m_arr = new UPDATE_UPDATE[4];
    bool ok = false;
    if (m_arr) {
        vfn38();
        ok = true;
    }
    return ok;
}

} }
