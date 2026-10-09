// FUNCTION: BF2 0x6fc1c0
#include <string>

namespace dice { namespace hfe { namespace io {
extern void* fileManager;
} } }

namespace dice { namespace hfe { namespace world {

class Heightmap {
public:
    /* 0x000 */ unsigned char _pad0[0x28];
    /* 0x028 */ int m_unk28;
    /* 0x02c */ int m_unk2c;
    /* 0x030 */ unsigned char _pad1[0xcc - 0x30];
    /* 0x0cc */ int m_unkcc;
    /* 0x0d0 */ void* m_unkd0;

    void loadMaterialData(const std::string& name);
};

void Heightmap::loadMaterialData(const std::string& name) {
    if (m_unkd0 != 0) {
        delete[] (char*)m_unkd0;
    }
    void* lector = ((void* (*)(void*, const std::string&, int, int, int))
        (*(void***)dice::hfe::io::fileManager)[0x30/8])
        (dice::hfe::io::fileManager, name, 2, 0, 0);
    int n = m_unkcc * (m_unk28 * m_unk2c * m_unkcc);
    char* buf = new char[n];
    m_unkd0 = buf;
    ((void (*)(void*, void*, int))(*(void***)lector)[0x20/8])(lector, buf, n);
    ((void (*)(void*))(*(void***)lector)[0x10/8])(lector);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Heightmap_loadMaterialData_std_string_const_ref (0x6fc1c0)
