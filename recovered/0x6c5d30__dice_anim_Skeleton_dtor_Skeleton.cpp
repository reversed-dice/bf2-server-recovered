// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6c5d30
// dice_anim_Skeleton_dtor_Skeleton
#include <vector>

namespace dice { namespace anim {

struct Bone {
    char _pad[0x50];
    ~Bone();
};

struct X24 {
    char _pad[0x24];
    ~X24() {}
};

struct T54 {
    char _pad[0x54];
    ~T54() {}
};

struct Blob
{
};

struct Ptr48 {
    Blob* m_p;
    ~Ptr48() { if (m_p != (Blob*)0) operator delete((void*)m_p); }
};

struct T30 {
    char _pad[0x30];
    ~T30() {}
};

class Skeleton {
public:
    ~Skeleton();

private:
    unsigned char _pad0[0x8];
    Bone* m_bones;                                  // 0x08
    X24* m_10;                                      // 0x10
    bool m_flag;                                    // 0x18
    unsigned char _pad1[0x20 - 0x19];
    void* m_20;                                     // 0x20
    unsigned char _pad2[0x30 - 0x28];
    std::vector<T54> m_v30;                         // 0x30
    Ptr48 m_48;                                     // 0x48
    unsigned char _pad3[0x60 - 0x50];
    std::vector<T30> m_v60;                         // 0x60
};

Skeleton::~Skeleton() {
    if (m_flag) {
        delete[] m_10;
    }
    delete[] (char*)m_20;
    delete[] m_bones;
}

} }
