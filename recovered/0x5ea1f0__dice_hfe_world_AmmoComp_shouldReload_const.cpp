// FUNCTION: BF2 0x5ea1f0
namespace dice { namespace hfe { namespace world {

struct AmmoData {
    unsigned char pad_0x00[0x30];
    unsigned char m_30;
};

class AmmoComp {
public:
    unsigned char pad_0x00[0x68];
    int m_68;
    unsigned char pad_0x6c[0x14];
    AmmoData* m_ammoData;
    bool shouldReload() const;
};

bool AmmoComp::shouldReload() const {
    return m_68 == 0
        && (*(bool (*)(const void*))(*(void***)this)[55])((const void*)this)
        && (*(bool (*)(const void*))(*(void***)this)[58])((const void*)this)
        && m_ammoData->m_30 == 0;
}

} } }
