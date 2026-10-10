// FUNCTION: BF2 0x73cfe0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

class EventNode {
public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    char _pad0[8];
    double m_time;
    int m_field18;
    int m_id;
    EventNode* m_next;
};

class EventManager {
public:
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual void s5();
    virtual void s6();
    virtual void s7();
    virtual void s8();
    virtual void s9();
    virtual void s10();
    virtual void s11();
    virtual void s12();
    virtual void s13();
    virtual void s14();
    virtual void s15();
    virtual void s16();
    char _pad0[4];
    int m_field0c;
    char _pad1[8];
    EventNode* m_head;
    double m_base;
    char _pad2[0x98];
    int m_counter;
    int insertEvent(EventNode* node, float delay);
};

int EventManager::insertEvent(EventNode* node, float delay)
{
    double t = (double)delay + m_base;
    node->m_field18 = m_field0c;
    node->m_time = t;
    int id = m_counter;
    node->m_id = id;
    m_counter = id + 1;
    EventNode* prev = 0;
    EventNode* cur = m_head;
    if (cur == 0)
    {
        node->m_next = 0;
        m_head = node;
        return node->m_id;
    }
    while (cur != 0 && t >= cur->m_time)
    {
        prev = cur;
        cur = cur->m_next;
    }
    if (prev == 0)
    {
        m_head = node;
        node->m_next = cur;
        return node->m_id;
    }
    prev->m_next = node;
    node->m_next = cur;
    return node->m_id;
}

} }
