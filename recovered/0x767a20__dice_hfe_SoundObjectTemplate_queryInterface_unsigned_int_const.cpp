// FUNCTION: BF2 0x767a20
namespace dice { namespace hfe {
extern unsigned int IID_IBase;
namespace io {
extern unsigned int IID_IConsoleSaveable;
}

namespace world {
extern unsigned int IID_IObjectTemplate;
}

class SoundObjectTemplate {
public:
    virtual void* queryInterface(unsigned int id) const;
};

void* SoundObjectTemplate::queryInterface(unsigned int id) const {
    if (IID_IBase == id) {
        return const_cast<SoundObjectTemplate*>(this);
    }
    if (id == world::IID_IObjectTemplate) {
        return const_cast<SoundObjectTemplate*>(this);
    }
    void* res = 0;
    if (id == io::IID_IConsoleSaveable) {
        res = (char*)this + 0x10;
        return res;
    }
    if (id == 0x985fd2) {
        res = (char*)this + 0x68;
    }
    return res;
}

} }
