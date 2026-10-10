// FUNCTION: BF2 0x5e1480
namespace dice { namespace hfe { namespace io {
extern unsigned int IID_INetworkableObject;
} } }

namespace dice { namespace hfe {

class TriggerableTargetNetworkable {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int) const;
    virtual ~TriggerableTargetNetworkable();

    class UPDATE_UPDATE {
    public:
        UPDATE_UPDATE();
        char _pad[0x28];
    };

    char _pad0[0x20];
    void* m_unk28;              // +0x28
    char _pad1[0x30];
    void* m_unk60;              // +0x60
    char _pad2[0x10];
    UPDATE_UPDATE* m_arr;       // +0x78

    bool init(void* p);
};

bool TriggerableTargetNetworkable::init(void* p)
{
    m_unk60 = p;
    m_unk28 = this->queryInterface(dice::hfe::io::IID_INetworkableObject);
    m_arr = new UPDATE_UPDATE[4];
    return true;
}

} }
