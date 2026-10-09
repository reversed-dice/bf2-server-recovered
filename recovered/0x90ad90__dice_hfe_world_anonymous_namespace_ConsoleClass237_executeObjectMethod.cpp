// FUNCTION: BF2 0x90ad90
#include <string>

extern "C" {
    void* dice_hfe_world_objectManager;
    unsigned int dice_hfe_world_CID_ObjectSpawnerTemplate;
};

struct Template {
    virtual void T0() = 0;
    virtual void T1() = 0;
    virtual void T2() = 0;
    virtual void T3() = 0;
    virtual unsigned typeId() = 0;          // slot 0x20
};

struct ObjectManager {
    // 36 virtuals
#define M0(n) virtual void n() = 0;
    M0(m0) M0(m1) M0(m2) M0(m3) M0(m4) M0(m5) M0(m6) M0(m7) M0(m8) M0(m9)
    M0(m10) M0(m11) M0(m12) M0(m13) M0(m14) M0(m15) M0(m16) M0(m17) M0(m18) M0(m19)
    M0(m20) M0(m21) M0(m22) M0(m23) M0(m24) M0(m25) M0(m26) M0(m27) M0(m28) M0(m29)
    M0(m30) M0(m31) M0(m32) M0(m33) M0(m34) M0(m35)
    virtual void* getActive() = 0;          // slot 0x120
};

struct SpawnerGet {
    // 103 virtuals
#define S(n) virtual void n() = 0;
    S(s0) S(s1) S(s2) S(s3) S(s4) S(s5) S(s6) S(s7) S(s8) S(s9)
    S(s10) S(s11) S(s12) S(s13) S(s14) S(s15) S(s16) S(s17) S(s18) S(s19)
    S(s20) S(s21) S(s22) S(s23) S(s24) S(s25) S(s26) S(s27) S(s28) S(s29)
    S(s30) S(s31) S(s32) S(s33) S(s34) S(s35) S(s36) S(s37) S(s38) S(s39)
    S(s40) S(s41) S(s42) S(s43) S(s44) S(s45) S(s46) S(s47) S(s48) S(s49)
    S(s50) S(s51) S(s52) S(s53) S(s54) S(s55) S(s56) S(s57) S(s58) S(s59)
    S(s60) S(s61) S(s62) S(s63) S(s64) S(s65) S(s66) S(s67) S(s68) S(s69)
    S(s70) S(s71) S(s72) S(s73) S(s74) S(s75) S(s76) S(s77) S(s78) S(s79)
    S(s80) S(s81) S(s82) S(s83) S(s84) S(s85) S(s86) S(s87) S(s88) S(s89)
    S(s90) S(s91) S(s92) S(s93) S(s94) S(s95) S(s96) S(s97) S(s98) S(s99)
    S(s100) S(s101)
    virtual void setCount(unsigned) = 0;     // slot 0x330
    virtual unsigned getCount() = 0;         // slot 0x338
};

struct SpawnerSet {
#define R(n) virtual void n() = 0;
    R(r0) R(r1) R(r2) R(r3) R(r4) R(r5) R(r6) R(r7) R(r8) R(r9)
    R(r10) R(r11) R(r12) R(r13) R(r14) R(r15) R(r16) R(r17) R(r18) R(r19)
    R(r20) R(r21) R(r22) R(r23) R(r24) R(r25) R(r26) R(r27) R(r28) R(r29)
    R(r30) R(r31) R(r32) R(r33) R(r34) R(r35) R(r36) R(r37) R(r38) R(r39)
    R(r40) R(r41) R(r42) R(r43) R(r44) R(r45) R(r46) R(r47) R(r48) R(r49)
    R(r50) R(r51) R(r52) R(r53) R(r54) R(r55) R(r56) R(r57) R(r58) R(r59)
    R(r60) R(r61) R(r62) R(r63) R(r64) R(r65) R(r66) R(r67) R(r68) R(r69)
    R(r70) R(r71) R(r72) R(r73) R(r74) R(r75) R(r76) R(r77) R(r78) R(r79)
    R(r80) R(r81) R(r82) R(r83) R(r84) R(r85) R(r86) R(r87) R(r88) R(r89)
    R(r90) R(r91) R(r92) R(r93) R(r94) R(r95) R(r96) R(r97) R(r98) R(r99)
    R(r100) R(r101)
    virtual void setCount(unsigned) = 0;    // slot 0x330
};

void* fn_90ad90(void* p) {
    unsigned m = *(unsigned*)((char*)p + 0x30);
    if (m == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* obj = ((ObjectManager*)dice_hfe_world_objectManager)->getActive();
        SpawnerGet* t = 0;
        if (obj != 0) {
            Template* child = *(Template**)((char*)obj + 0x28);
            if (child != 0) {
                if (child->typeId() == dice_hfe_world_CID_ObjectSpawnerTemplate) {
                    t = (SpawnerGet*)obj;
                }
            }
        }
        unsigned v = t->getCount();
        *(unsigned*)((char*)p + 0x10c) = v;
        return (char*)p + 0x10c;
    }
    if (m != 1) return 0;
    {
        unsigned val = **(unsigned**)((char*)p + 0x38);
        *(char*)((char*)p + 0x108) = 0;
        void* obj = ((ObjectManager*)dice_hfe_world_objectManager)->getActive();
        SpawnerGet* t = 0;
        if (obj != 0) {
            Template* child = *(Template**)((char*)obj + 0x28);
            if (child != 0) {
                if (child->typeId() == dice_hfe_world_CID_ObjectSpawnerTemplate) {
                    t = (SpawnerGet*)obj;
                }
            }
        }
        t->setCount(val);
        return 0;
    }
}
