// FUNCTION: BF2 0x510410
#include <list>

namespace dice { namespace hfe { namespace world {
struct ArtilleryObjectStruct {
    unsigned long long m_a;
    unsigned long long m_b;
    unsigned long long m_c;
    unsigned char m_d;
    ArtilleryObjectStruct() { }
    ArtilleryObjectStruct(ArtilleryObjectStruct const& __o)
        : m_a(__o.m_a), m_b(__o.m_b), m_c(__o.m_c), m_d(__o.m_d) { }
    ~ArtilleryObjectStruct() { }
    ArtilleryObjectStruct& operator=(ArtilleryObjectStruct const& __o) {
        m_a = __o.m_a; m_b = __o.m_b; m_c = __o.m_c; m_d = __o.m_d;
        return *this;
    }
    bool operator==(ArtilleryObjectStruct const& __o) const {
        return m_a == __o.m_a && m_b == __o.m_b && m_c == __o.m_c && m_d == __o.m_d;
    }
    bool operator<(ArtilleryObjectStruct const& __o) const {
        return m_a < __o.m_a;
    }
};
}}}

template class std::list<dice::hfe::world::ArtilleryObjectStruct>;
