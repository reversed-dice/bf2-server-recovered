// FUNCTION: BF2 0x474400
// BF2_FLAGS: -fno-strict-aliasing
#include <map>

namespace dice { namespace hfe {

class EventNode;
enum EventCategory { EC_0 = 0 };

class IEventListener {
public:
    virtual void handleEvent(EventCategory, unsigned int, EventNode*, void*);
};

extern void* gameLogic;

namespace world {

class RemoteControlledObject;

class IObject;

IObject* getRootParent(RemoteControlledObject const* obj);

class ToyTemplate {
public:
    char _pad_0x00[0x1f8];
    int m_type;
};

class RemoteControlledObject {
public:
    int getTeam() const;
    char _pad_0x00[0x28];
    ToyTemplate* m_template;
};

class CommanderToolState {
public:
    void resetToysStats();
    char _pad_0x00[0x1c];
    float m_sum1;
    float m_sum3;
    float m_sum2;
    int m_cnt1;
    int m_cnt3;
    int m_cnt2;
    char _pad_0x34[4];
};

class CommanderToolsManager : public dice::hfe::IEventListener {
public:
    virtual void handleEvent(dice::hfe::EventCategory, unsigned int, dice::hfe::EventNode*, void*);
    void updateCommanderToys();
    CommanderToolState m_states[2];
};

typedef std::map<unsigned int, RemoteControlledObject*> ToyMap;
typedef void* (*GetRegistryFn)(void*);
typedef float (*FloatFn)(void*);

void CommanderToolsManager::updateCommanderToys()
{
    ToyMap* toys = (ToyMap*)((GetRegistryFn)(*(void***)gameLogic)[0x388 / 8])(gameLogic);

    m_states[0].resetToysStats();
    m_states[1].resetToysStats();

    struct Acc { float v[2]; float pad[2]; };
    Acc t1;
    t1.v[0] = 0.0f;
    t1.v[1] = 0.0f;
    Acc t2;
    t2.v[0] = 0.0f;
    t2.v[1] = 0.0f;
    Acc t3;
    t3.v[0] = 0.0f;
    t3.v[1] = 0.0f;

    for (ToyMap::iterator it = toys->begin(); it != toys->end(); ++it) {
        int type = it->second->m_template->m_type;
        int idx = it->second->getTeam() - 1;
        if ((unsigned int)idx > 1) {
            continue;
        }
        float a = 0.0f;
        float b = 0.0f;
        if (type == 1 || type == 3 || type == 2) {
            IObject* root = getRootParent(it->second);
            void* f = *(void**)((char*)root + 0x78);
            if (f != 0) {
                a = ((FloatFn)(*(void***)f)[0x78 / 8])(f);
                a = a > 0.0f ? a : 0.0f;
                b = ((FloatFn)(*(void***)f)[0x108 / 8])(f);
            }
        }
        switch (type) {
        case 1:
            m_states[idx].m_cnt1++;
            m_states[idx].m_sum1 += a;
            t1.v[idx] += b;
            break;
        case 2:
            m_states[idx].m_cnt2++;
            m_states[idx].m_sum2 += a;
            t2.v[idx] += b;
            break;
        case 3:
            m_states[idx].m_cnt3++;
            m_states[idx].m_sum3 += a;
            t3.v[idx] += b;
            break;
        }
    }

    for (int i = 0; i < 2; ++i) {
        if (t1.v[i] > 0.0f) {
            m_states[i].m_sum1 /= t1.v[i];
        } else {
            m_states[i].m_sum1 = 1.0f;
        }
        if (t2.v[i] > 0.0f) {
            m_states[i].m_sum2 /= t2.v[i];
        } else {
            m_states[i].m_sum2 = 1.0f;
        }
        if (t3.v[i] > 0.0f) {
            m_states[i].m_sum3 /= t3.v[i];
        } else {
            m_states[i].m_sum3 = 1.0f;
        }
    }
}

} } }
