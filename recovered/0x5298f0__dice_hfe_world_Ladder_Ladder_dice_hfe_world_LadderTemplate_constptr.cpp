// FUNCTION: BF2 0x5298f0
// BF2_FLAGS: -fno-strict-aliasing
#include <map>

namespace dice { namespace hfe { namespace world {

extern int globalLadderId;

class SimpleObjectTemplate { public: unsigned char pad[0x200]; };
class LadderTemplate : public SimpleObjectTemplate { public: unsigned char pad2[0x100]; };
class Ladder;

class Object { public: virtual ~Object(); unsigned char m_pad[0xf8]; };
class ISimpleIface { public: virtual void is0(); virtual void is1(); };

class SimpleObject : public Object, public ISimpleIface {
    unsigned char m_pad0[0x124];
public:
    SimpleObject(SimpleObjectTemplate const*);
    virtual void so0();
};

class Ladder : public SimpleObject {
    int m_a;
    LadderTemplate const* m_template;
    int m_id;
    bool m_b;
    unsigned char m_pad1[3];
    float m_f;
    unsigned char m_pad2[4];
    float m_g;
    float m_h;
    float m_i;
public:
    Ladder(LadderTemplate const* t);
    virtual void so0();
    static std::map<int, Ladder*> m_ladders;
};

Ladder::Ladder(LadderTemplate const* t)
    : SimpleObject(t), m_a(1), m_template(t), m_b(true), m_f(2.0f), m_g(0.0f), m_h(0.0f), m_i(0.0f)
{
    m_id = globalLadderId++;
    m_ladders.insert(std::pair<int, Ladder*>(m_id, this));
}

} } }
