// FUNCTION: BF2 0x5d2950
namespace dice { namespace hfe { namespace io {
extern unsigned int IID_INetworkableObject;
} } }

namespace dice { namespace hfe {

class PlayerControlObjectNetworkable {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int) const;
    virtual ~PlayerControlObjectNetworkable();

    class UPDATE_UPDATE {
    public:
        UPDATE_UPDATE()
        {
            *(int*)((char*)this + 0) = 0;
            *(unsigned char*)((char*)this + 4) = 0;
        }
        char _pad[0x38];
    };

    char _pad0[0x20];
    void* m_unk28;              // +0x28
    char _pad1[0x1c];
    int m_unk4c;                // +0x4c
    char _pad2[0x10];
    void* m_unk60;              // +0x60
    char _pad3[0x10];
    UPDATE_UPDATE* m_arr;       // +0x78

    bool init(void* p);
};

bool PlayerControlObjectNetworkable::init(void* p)
{
    m_unk60 = p;
    m_unk28 = this->queryInterface(dice::hfe::io::IID_INetworkableObject);
    m_arr = new UPDATE_UPDATE[4];
    bool ok = false;
    if (m_arr) {
        m_unk4c = 0;
        ok = true;
    }
    return ok;
}

} }
