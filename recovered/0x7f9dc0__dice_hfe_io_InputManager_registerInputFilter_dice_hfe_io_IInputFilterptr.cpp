// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7f9dc0
namespace dice { namespace hfe { namespace io {

class IInputFilter;

struct FilterNode {
    IInputFilter* m_filter;
    FilterNode* m_next;
};

class InputManager {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual void init(unsigned int);
    virtual void shutdown();
    virtual void setHasFocus(bool, unsigned int);
    virtual void update(int, float);
    virtual bool registerInputFilter(IInputFilter* filter);

    char _pad[0x38];
    FilterNode* m_filters;
};

bool InputManager::registerInputFilter(IInputFilter* filter) {
    if (!filter) {
        return false;
    }
    FilterNode* node = new FilterNode;
    node->m_next = 0;
    node->m_filter = filter;
    if (!m_filters) {
        m_filters = node;
        return true;
    }
    FilterNode* cur = m_filters;
    while (cur->m_next) {
        cur = cur->m_next;
    }
    cur->m_next = node;
    return true;
}

} } }
