// FUNCTION: BF2 0x6d0520
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>
#include <utility>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {
namespace io { class IStream; }

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
    template <class T> std::ostream& operator<<(const T& v) { return os << v; }
};

class NoCaseStringCompare {
public:
    bool operator()(std::string const& a, std::string const& b) const;
};

}}

namespace dice { namespace anim {

class AnimationSystem;
class Bundle;

class Trigger {
public:
    Trigger();
    virtual ~Trigger();                                          // +0x0 slot 0-1
    virtual void makeScript(dice::hfe::io::IStream*);            // +0x10 slot 2
    virtual bool getAlreadySaved() const;                        // +0x18 slot 3
    virtual void setAlreadySaved(bool);                          // +0x20 slot 4
    virtual int getType() const;                                 // +0x28 slot 5
    virtual const std::string& getTypeName() const;              // +0x30 slot 6
    virtual void readBinary(dice::hfe::io::IStream*);            // +0x38 slot 7
    virtual void writeBinary(dice::hfe::io::IStream*) const;     // +0x40 slot 8
    virtual void activate();                                     // +0x48 slot 9
    virtual void listBundles() const;                            // +0x50 slot 10
    virtual void addChild(Trigger*);                             // +0x58 slot 11
    virtual void addChild(const std::string&);                   // +0x60 slot 12
    virtual void removeChild(const std::string&);                // +0x68 slot 13
    virtual void removeChildByPtr(Trigger*);                     // +0x70 slot 14
    virtual void addBundle(Bundle*);                             // +0x78 slot 15
    virtual void addBundle(const std::string&);                  // +0x80 slot 16
    virtual void removeBundle(const std::string&);               // +0x88 slot 17
    virtual void removeBundleByPtr(Bundle*);                     // +0x90 slot 18
    virtual void update(AnimationSystem&);                       // +0x98 slot 19
    virtual void applyAnimations(AnimationSystem&);              // +0xa0 slot 20
    char _pad[0x3c];
};

class PoseTrigger : public Trigger {
};

class IdleTrigger : public Trigger {
public:
    IdleTrigger();
    char _pad[0x8];
};

class RandomTrigger : public Trigger {
};

class MessageTrigger : public Trigger {
public:
    MessageTrigger();
};

class SwitchMessageTrigger : public MessageTrigger {
};

class MovementTrigger : public Trigger {
public:
    MovementTrigger();
    char _pad[0x10];
};

class ForwardTrigger : public MovementTrigger {
};

class SideTrigger : public MovementTrigger {
};

class UpTrigger : public MovementTrigger {
};

class TurnTrigger : public MovementTrigger {
};

class LookAroundTrigger : public MovementTrigger {
};

class AnimationSystemTemplate {
public:
    virtual ~AnimationSystemTemplate();          // +0x0
    virtual void addRef();                       // +0x10
    virtual void release();                      // +0x18
    virtual bool loadScript(const std::string& name);  // +0x20
    virtual void save(const std::string& name);        // +0x28
    virtual const std::string& getName() const;        // +0x30
};

typedef std::map<std::string, Trigger*, dice::hfe::NoCaseStringCompare> TriggerMap;

class TriggerManager {
public:
    TriggerMap m_triggers;                          // 0x0
    Trigger* m_lastTrigger;                         // 0x30
    AnimationSystemTemplate* m_template;            // 0x38

    Trigger* getTriggerByName(const std::string& name, bool b) const;
    Trigger* createTrigger(const std::string& type, const std::string& name);
};

Trigger* TriggerManager::createTrigger(const std::string& type, const std::string& name) {
    using dice::hfe::Debug;
    if (getTriggerByName(name, true))
        return 0;

    Trigger* trigger;
    if (type.compare("Trigger") == 0)
        trigger = new Trigger();
    else if (type.compare("PoseTrigger") == 0)
        trigger = new PoseTrigger();
    else if (type.compare("IdleTrigger") == 0)
        trigger = new IdleTrigger();
    else if (type.compare("RandomTrigger") == 0)
        trigger = new RandomTrigger();
    else if (type.compare("MessageTrigger") == 0)
        trigger = new MessageTrigger();
    else if (type.compare("SwitchMessageTrigger") == 0)
        trigger = new SwitchMessageTrigger();
    else if (type.compare("MovementTrigger") == 0)
        trigger = new MovementTrigger();
    else if (type.compare("ForwardTrigger") == 0)
        trigger = new ForwardTrigger();
    else if (type.compare("SideTrigger") == 0)
        trigger = new SideTrigger();
    else if (type.compare("UpTrigger") == 0)
        trigger = new UpTrigger();
    else if (type.compare("TurnTrigger") == 0)
        trigger = new TurnTrigger();
    else if (type.compare("LookAroundTrigger") == 0)
        trigger = new LookAroundTrigger();
    else {
        Debug(6, std::string("Animation/BoneAnimation/TriggerManager.cpp"), 0x7d,
              std::string(&DAT_00bb25f1))
            << m_template->getName() << " " << type << " : type not found";
        return 0;
    }

    m_triggers.insert(TriggerMap::value_type(std::make_pair(std::string(name), trigger)));
    m_lastTrigger = trigger;
    trigger->activate();
    return trigger;
}

}}
