// FUNCTION: BF2 0x634440
namespace dice { namespace hfe {
extern unsigned int IID_IBase;
namespace io {
extern unsigned int IID_IConsoleSaveable;
}

namespace world {
extern unsigned int IID_IObjectTemplate;
extern unsigned int IID_IBundleTemplate;

class EngineTemplate {
public:
    virtual void* queryInterface(unsigned int id) const;
};

void* EngineTemplate::queryInterface(unsigned int id) const {
    if (IID_IBase == id) {
        return const_cast<EngineTemplate*>(this);
    }
    if (id == IID_IObjectTemplate) {
        return const_cast<EngineTemplate*>(this);
    }
    if (id == IID_IBundleTemplate) {
        return (char*)this + 0x1c8;
    }
    if (id == io::IID_IConsoleSaveable) {
        return (char*)this + 0x10;
    }
    void* res = 0;
    if (id == 0x8c230) {
        res = (char*)this + 0x290;
    }
    return res;
}

} } }
