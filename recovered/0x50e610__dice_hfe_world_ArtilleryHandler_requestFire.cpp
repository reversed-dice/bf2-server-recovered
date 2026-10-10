// FUNCTION: BF2 0x50e610

namespace dice { namespace hfe {

struct Vec3 { float x, y, z; };

class WorldPref {
public:
    static int getTickCount();
};

namespace world {

class ArtilleryHandler {
public:
    void requestFire();
    void failedFire();
    void reportFire(dice::hfe::Vec3 const& v, bool fire);

    char m_pad0[0x20];
    void* m_20;            // +0x20
    int m_28;              // +0x28
    char m_pad1[8];
    int m_34;              // +0x34
    unsigned char m_38;    // +0x38
    char m_pad2[7];
    int m_40;              // +0x40
};

void ArtilleryHandler::requestFire()
{
    if ((unsigned int)(dice::hfe::WorldPref::getTickCount() - m_34)
        < (unsigned int)(m_28 - m_40)) {
        failedFire();
        return;
    }

    m_38 = 1;
    m_34 = dice::hfe::WorldPref::getTickCount() + m_40;

    if (m_20) {
        typedef dice::hfe::Vec3 const& (*getvec_t)(void*);
        void* p = *(void**)((char*)m_20 + 8);
        if (p) {
            dice::hfe::Vec3 const& v =
                (*(getvec_t*)((char*)*(void**)p + 0xd8))(p);
            reportFire(v, true);
            return;
        }
    }
}

} } }
