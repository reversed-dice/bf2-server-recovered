namespace dice { namespace hfe {

extern unsigned char EngineTemplate_m_alwaysPlaySound;

extern "C" long ctor_a655e0(long param_1) {
    if (*(int*)(param_1 + 0x30) == 0) {
        *(unsigned char*)(param_1 + 0x108) = 1;
        *(unsigned char*)(param_1 + 0x10a) = EngineTemplate_m_alwaysPlaySound;
        return param_1 + 0x10a;
    }
    if (*(int*)(param_1 + 0x30) != 1) {
        return 0;
    }
    unsigned char v = **(unsigned char**)(param_1 + 0x38);
    *(volatile unsigned char*)(param_1 + 0x108) = 0;
    *(volatile unsigned char*)&EngineTemplate_m_alwaysPlaySound = v;
    return 0;
}
} }
