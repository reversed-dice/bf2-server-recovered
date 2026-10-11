// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6cedd0
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace io {
class IStream {
public:
    virtual void _m0();
    virtual void _m1();
    virtual void _m2();
    virtual void _m3();
    virtual void _m4();
    virtual int write(void const* buf, unsigned int size);
};
} } }

namespace dice { namespace anim {

class ValueHolder;
class Bundle;
class AnimationSystem;

class Trigger {
public:
    virtual ~Trigger();
    virtual void makeScript(dice::hfe::io::IStream*);
    virtual void getAlreadySaved() const;
    virtual void setAlreadySaved(bool);
    virtual void getType() const;
    virtual void getTypeName() const;
    virtual void readBinary(dice::hfe::io::IStream*);
    virtual void writeBinary(dice::hfe::io::IStream*) const;
    virtual void activate();
    virtual void listBundles() const;
    virtual void addChild(Trigger*);
    virtual void addChild(std::string const&);
    virtual void removeChild(std::string const&);
    virtual void removeChildByPtr(Trigger*);
    virtual void addBundle(Bundle*);
    virtual void addBundle(std::string const&);
    virtual void removeBundle(std::string const&);
    virtual void removeBundleByPtr(Bundle*);
    virtual void update(AnimationSystem&);
    virtual void applyAnimations(AnimationSystem&);
    char _pad0[0x40];
};

class MovementTrigger : public Trigger {
public:
    virtual void makeScript(dice::hfe::io::IStream*);
    virtual void setValueHolder(std::string const&);
    virtual std::string const& getValueHolder() const;
    virtual void setTriggerOnAcceleration(bool);
    virtual bool getTriggerOnAcceleration() const;
    virtual void setUseDirection(bool);
    virtual bool getUseDirection() const;
    virtual void clearValueHolder();
    virtual bool isWithinRange(float);
    ValueHolder* m_valueHolder;
    bool m_triggerOnAcceleration;
    bool m_useDirection;
};

void MovementTrigger::makeScript(dice::hfe::io::IStream* stream)
{
    Trigger::makeScript(stream);
    std::ostringstream ss;
    if (m_valueHolder) {
        ss << "animationTrigger.valueHolder " << getValueHolder() << std::endl;
        if (m_triggerOnAcceleration)
            ss << "animationTrigger.triggerOnAcceleration " << m_triggerOnAcceleration << std::endl;
    }
    if (m_useDirection)
        ss << "animationTrigger.useDirection 1" << std::endl;
    std::string s = ss.str();
    stream->write(s.c_str(), s.length());
}

} }
