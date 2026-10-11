// FUNCTION: BF2 0x81eea0
// BF2_FLAGS: -fno-gcse
extern "C" {
extern unsigned char* enc;

void xcode_buf(unsigned char* param_1, int param_2) {
    unsigned char* puVar1 = enc;
    unsigned char* pbVar4 = puVar1;
    if (param_2 <= 0) return;
    int iVar2 = 0;
    do {
        *param_1 ^= *pbVar4;
        pbVar4++;
        if (*pbVar4 == 0) pbVar4 = puVar1;
        iVar2++;
        param_1++;
    } while (param_2 != iVar2);
}
}
