// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x84bd10
#include <string>

namespace dice { namespace hfe {

struct Entry {
    Entry* m_next;
    std::string m_b;
    std::string m_a;
};

struct Container {
    Entry** m_data;
    unsigned int m_count;
    unsigned int m_cap;
    void* m_x;
    ~Container()
    {
        for (unsigned int i = 0; i < m_count; ++i) {
            Entry* e = m_data[i];
            while (e) {
                Entry* n = e->m_next;
                delete e;
                e = n;
            }
            m_data[i] = 0;
        }
        delete[] m_data;
    }
};

} }

static dice::hfe::Container g_arr[9];
