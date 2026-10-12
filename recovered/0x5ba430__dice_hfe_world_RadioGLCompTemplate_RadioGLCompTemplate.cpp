// FUNCTION: BF2 0x5ba430
// FUNCTION: BF2 0x5ba430
#include <string>

namespace dice {
namespace hfe {

namespace io {
class IConsoleSaveable {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual void makeScript(void*);
};
}

namespace world {

class IRadioGLCompTemplate {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual void getClassID() const;
    virtual void getInterfaceID();
    virtual void createComponent();
    virtual void objectCreated(void*);
    virtual void objectDestroyed(void*);
    virtual void setTemplate(void*);
    virtual void queryImplementation(unsigned int);
    virtual void setFailMessage(std::string);
    virtual void getFailMessage();
    virtual void setUseMessage(std::string);
    virtual void getUseMessage();
    virtual void setDestroyedMessage(std::string);
    virtual void getDestroyedMessage();
    virtual void setRepairedMessage(std::string);
    virtual void getRepairedMessage();
    virtual void setSpottedMessage(std::string);
    virtual void getSpottedMessage();
    virtual ~IRadioGLCompTemplate();
    virtual void makeScript(void*);
};

class RadioGLCompTemplate : public IRadioGLCompTemplate, public io::IConsoleSaveable {
public:
    int m_refCount;          // +0x10
    bool m_active;           // +0x14
    std::string m_msg1;      // +0x18
    std::string m_msg2;      // +0x20
    std::string m_msg3;      // +0x28
    std::string m_msg4;      // +0x30
    std::string m_msg5;      // +0x38
    std::string m_msg6;      // +0x40
    std::string m_msg7;      // +0x48

    RadioGLCompTemplate();
    virtual ~RadioGLCompTemplate();
};

RadioGLCompTemplate::RadioGLCompTemplate()
    : m_refCount(1),
      m_active(true)
{
    m_msg1 = "";
    m_msg2 = "";
    m_msg3 = "";
    m_msg4 = "";
    m_msg5 = "";
}

} // namespace world
} // namespace hfe
} // namespace dice
