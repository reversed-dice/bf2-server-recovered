namespace dice { namespace hfe {

extern unsigned char DAT_01092d81;

extern "C" long ctor_ac0a10(long param_1) {
    if (*(int*)(param_1 + 0x30) == 0) {
        *(unsigned char*)(param_1 + 0x108) = 1;
        *(unsigned char*)(param_1 + 0x10a) = DAT_01092d81;
        return param_1 + 0x10a;
    }
    if (*(int*)(param_1 + 0x30) != 1) {
        return 0;
    }
    unsigned char v = **(unsigned char**)(param_1 + 0x38);
    *(volatile unsigned char*)(param_1 + 0x108) = 0;
    *(volatile unsigned char*)&DAT_01092d81 = v;
    return 0;
}
} }
