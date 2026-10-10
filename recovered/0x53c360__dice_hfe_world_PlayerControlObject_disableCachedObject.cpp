// FUNCTION: BF2 0x53c360
// BF2_COMPILER: gcc-3.4
extern "C" void abort() __attribute__((noreturn));

namespace dice { namespace hfe {

extern void* spawnManager;

namespace world {

class SimpleObject {
public:
    virtual void disableCachedObject();
};

struct InnerInfo {
    char _pad[8];
    void* m_ptr; // +0x8
};

class PlayerControlObject : public SimpleObject {
public:
    char _pad[0x25c - sizeof(SimpleObject)];
    bool m_flag25c; // +0x25c
    char _pad2[0x268 - 0x25d];
    InnerInfo* m_inner; // +0x268
    char _pad3[0x3c8 - 0x270];
    int m_spawnGroup; // +0x3c8

    void reset();
    virtual void disableCachedObject();
};

void PlayerControlObject::disableCachedObject() {
    if (!m_flag25c) {
        if (!m_inner || !m_inner->m_ptr) {
            reset();
            if (m_spawnGroup != -1) {
                typedef void (*Fn48)(void*, int);
                void** vtbl = *(void***)spawnManager;
                Fn48 fn = (Fn48)vtbl[9]; // 0x48 / 8 = 9
                fn(spawnManager, m_spawnGroup);
            }
            SimpleObject::disableCachedObject();
            return;
        }
    }
    abort();
}

} } }
