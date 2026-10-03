namespace dice { namespace hfe {

extern unsigned char SoldierTemplate_m_drawSkeleton;

extern "C" long ctor_8d18a0(long param_1) {
    if (*(int*)(param_1 + 0x30) == 0) {
        *(unsigned char*)(param_1 + 0x108) = 1;
        *(unsigned char*)(param_1 + 0x10a) = SoldierTemplate_m_drawSkeleton;
        return param_1 + 0x10a;
    }
    if (*(int*)(param_1 + 0x30) != 1) {
        return 0;
    }
    unsigned char v = **(unsigned char**)(param_1 + 0x38);
    *(volatile unsigned char*)(param_1 + 0x108) = 0;
    *(volatile unsigned char*)&SoldierTemplate_m_drawSkeleton = v;
    return 0;
}
} }
