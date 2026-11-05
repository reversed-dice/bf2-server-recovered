// FUNCTION: BF2 0x418c00
#include <string>
#include <deque>

namespace
{
void read_raw(unsigned char const*& p, unsigned short* v);
void read_raw(unsigned char const*& p, std::string& s);
}

namespace dice { namespace hfe {

struct MapListEntry {
    std::string name;    // +0x00
    std::string mode;    // +0x08
    unsigned short size; // +0x10
};

class MapList {
public:
    char _pad0[0x8];
    unsigned int m_count;                 // +0x8
    std::deque<MapListEntry> m_entries;   // +0x10
    char _pad2[0x10];
    char m_70;
    void updateFromDataBlock(unsigned char const*, unsigned int);
};

void MapList::updateFromDataBlock(unsigned char const* data, unsigned int)
{
    m_entries.clear();
    unsigned char const* p = data;
    unsigned short count;
    unsigned short current;
    read_raw(p, &count);
    read_raw(p, &current);
    for (unsigned short i = 0; i < count; ++i) {
        MapListEntry e;
        read_raw(p, e.name);
        read_raw(p, e.mode);
        read_raw(p, &e.size);
        m_entries.push_back(e);
    }
    m_count = current;
}

} }
