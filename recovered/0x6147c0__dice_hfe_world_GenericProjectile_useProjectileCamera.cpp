// FUNCTION: BF2 0x6147c0
namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IPlayerControlObject;

class GenericProjectile {
public:
    void enableProjectileCamera();
    void useProjectileCamera();
};

void GenericProjectile::useProjectileCamera() {
    void* a = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x2b0);
    if (a == 0) return;
    if (*reinterpret_cast<void**>(reinterpret_cast<char*>(a) + 0x8) == 0) return;
    void* b = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x2b8);
    if (b == 0) return;
    void* c = *reinterpret_cast<void**>(reinterpret_cast<char*>(b) + 0x8);
    if (c == 0) return;
    void* r = c;
    do {
        if (((void* (*)(void*, unsigned int))(*reinterpret_cast<void***>(r))[3])(r, IID_IPlayerControlObject) != 0) {
            enableProjectileCamera();
            return;
        }
        r = *reinterpret_cast<void**>(reinterpret_cast<char*>(r) + 0x50);
    } while (r != 0);
}

} } }
