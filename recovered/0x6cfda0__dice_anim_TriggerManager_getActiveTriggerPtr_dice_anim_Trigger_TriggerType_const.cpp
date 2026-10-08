// FUNCTION: BF2 0x6cfda0
namespace dice { namespace anim {

class Trigger {
public:
    enum TriggerType { TT_None = 0 };
};

class TriggerManager {
public:
    Trigger* getActiveTriggerPtr(Trigger::TriggerType t) const;
};

typedef int (*GetTypeFn)(void*);

Trigger* TriggerManager::getActiveTriggerPtr(Trigger::TriggerType t) const {
    void* p = *(void**)((char*)this + 0x30);
    if (p == 0) return 0;
    if (t != 0) {
        GetTypeFn fn = *(GetTypeFn*)((char*)(*(void**)p) + 0x28);
        if (t != fn(p)) return 0;
        p = *(void**)((char*)this + 0x30);
    }
    return (Trigger*)p;
}

} }
