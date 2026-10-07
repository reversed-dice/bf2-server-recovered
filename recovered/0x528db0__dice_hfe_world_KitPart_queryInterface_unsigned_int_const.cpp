// FUNCTION: BF2 0x528db0
namespace dice { namespace hfe {
extern unsigned int IID_IBase;
namespace io {
extern unsigned int IID_IConsoleSaveable;
}

namespace world {
extern unsigned int IID_IKitPart;
extern unsigned int IID_IObject;

class KitPart {
public:
    virtual void* queryInterface(unsigned int id) const;
};

void* KitPart::queryInterface(unsigned int id) const {
    if (IID_IBase == id) {
        return const_cast<KitPart*>(this);
    }
    if (id == IID_IKitPart) {
        return (char*)this + 0x238;
    }
    if (id == IID_IObject) {
        return const_cast<KitPart*>(this);
    }
    void* res = 0;
    if (id == io::IID_IConsoleSaveable) {
        res = (char*)this + 0x100;
    }
    return res;
}

} } }
