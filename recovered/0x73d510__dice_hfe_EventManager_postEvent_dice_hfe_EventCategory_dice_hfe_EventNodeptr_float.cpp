// FUNCTION: BF2 0x73d510
namespace dice { namespace hfe {
class EventNode {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    int category;   // +0x8
};
class EventManager {
public:
    int postEvent(int cat, EventNode* node, float time);
    int insertEvent(EventNode* node, float time);
    void dispatchEvent(EventNode* node);
    char pad[0x28];
    void* m_handlers[1];
};
int EventManager::postEvent(int cat, EventNode* node, float time)
{
    if (node) {
        if (m_handlers[cat]) {
            node->category = cat;
            if (time <= 0.0f) {
                if (!(time <= 0.0f))
                    return insertEvent(node, time);
                dispatchEvent(node);
            } else {
                return insertEvent(node, time);
            }
        }
        node->v2();
    }
    return 0;
}
}}
