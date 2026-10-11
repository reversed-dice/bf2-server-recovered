// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x417950
// dice_hfe_MapList_dtor_MapList
#include <deque>
#include <string>

namespace dice { namespace hfe {

struct MapListEntry {
    std::string m_a;     // 0x00
    std::string m_b;     // 0x08
    void* m_x;           // 0x10
};

class MapList {
public:
    ~MapList();

private:
    std::string m_0;                                    // 0x00
    unsigned char _pad1[0x10 - 0x8];
    std::deque<MapListEntry> m_deque;                   // 0x10
    unsigned char _pad2[0x68 - 0x60];
    void* m_68;                                         // 0x68
};

MapList::~MapList() {
    delete[] (char*)m_68;
}

} }
