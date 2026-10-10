// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6ce4b0
#include <vector>

namespace dice { namespace anim {

class Trigger {
public:
    virtual ~Trigger();
    virtual void makeScript(void*);
    virtual bool getAlreadySaved() const;
    virtual void setAlreadySaved(bool);
    virtual int getType() const;
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    char _pad8[0x18];
    std::vector<Trigger*> m_children;
    char _pad38[8];
    char m_40;
    char m_41;
    void addChild(Trigger* child);
};

void Trigger::addChild(Trigger* child)
{
    m_children.push_back(child);
    child->m_40 = 1;
    if (getType() == 2 || m_41 != 0) child->m_41 = 1;
}

} }
