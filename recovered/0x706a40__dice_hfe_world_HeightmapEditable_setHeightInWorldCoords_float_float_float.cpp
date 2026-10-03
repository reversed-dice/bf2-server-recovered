// FUNCTION: BF2 0x706a40
namespace dice { namespace hfe { namespace world {

class HeightmapEditable {
public:
    void setHeightInWorldCoords(float x, float z, float height);
};

void HeightmapEditable::setHeightInWorldCoords(float x, float z, float height)
{
    typedef void (*Fn)(HeightmapEditable*, int, float, float, float);
    void** vtable = *reinterpret_cast<void***>(this);
    union { void* v; Fn f; } u;
    u.v = vtable[0x220 / sizeof(void*)];
    u.f(this, 3,
        x - (float)*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x20),
        z - (float)*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x24),
        height);
}

} } }
