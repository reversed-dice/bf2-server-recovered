// FUNCTION: BF2 0x768690
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

void FreeLibraryBf(void*, char const*);

namespace ai {

class AIConnection {
public:
    bool clear();
    char _pad[0x10];
    struct Impl {
        void* m_lib;
        void* m_obj;
    } *m_impl;
};

bool AIConnection::clear() {
    if (m_impl->m_obj) {
        ((void (*)(void*))(*(void***)m_impl->m_obj)[0x18 / 8])(m_impl->m_obj);
    }
    m_impl->m_obj = 0;
    if (m_impl->m_lib) {
        dice::hfe::FreeLibraryBf(m_impl->m_lib, "AI");
    }
    m_impl->m_lib = 0;
    return true;
}

} } }
