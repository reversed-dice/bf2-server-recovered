// FUNCTION: BF2 0x4b5400
namespace dice { namespace hfe { namespace world {

class MaterialManager {
public:
    void* getCreateCell();
};

void* MaterialManager::getCreateCell()
{
    unsigned int x = *reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x40);
    if (x > 0x270f)
        return 0;
    unsigned int y = *reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x44);
    if (y > 0x270f)
        return 0;
    typedef void* (*Fn)(MaterialManager*, unsigned int, unsigned int);
    void** vtable = *reinterpret_cast<void***>(this);
    union { void* v; Fn f; } u;
    u.v = vtable[0x90 / sizeof(void*)];
    return u.f(this, x, y);
}

} } }
