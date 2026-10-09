// FUNCTION: BF2 0x63dc00

namespace dice { namespace hfe { namespace world {

class Object {
public:
    void destroy(bool flag);
};

class LightSource : public Object {
public:
    /* 0x000 */ unsigned char _pad0[0x26c];
    /* 0x26c */ char m_unk26c;
    /* 0x26d */ unsigned char _pad1[0x478 - 0x26d];
    /* 0x478 */ LightSource* m_unk478;

    void destroy(bool flag);
};

void LightSource::destroy(bool flag) {
    if (((char (*)(void*))(*(void***)this)[0x78/8])(this) == 0) {
        LightSource* p = m_unk478;
        if (p != 0) {
            if (m_unk26c != 0) {
                ((void (*)(void*, void*))(*(void***)p)[0x130/8])(p, this);
                p = m_unk478;
            }
            ((void (*)(void*, void*))(*(void***)p)[0x120/8])(p, this);
        }
    }
    ((Object*)this)->destroy(flag);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSource_destroy_bool (0x63dc00)
