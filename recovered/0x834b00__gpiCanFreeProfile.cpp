// FUNCTION: BF2 0x834b00
struct GPIProfile {
    char pad8[8];
    void *p8;
    void *p10;
    void *p18;
    char pad20[8];
    void *p28;
};

extern "C" int gpiCanFreeProfile(GPIProfile *profile)
{
    if (profile == 0)
        return 0;
    if (profile->p10 != 0)
        return 0;
    if (profile->p8 != 0)
        return 0;
    if (profile->p28 != 0)
        return 0;
    return (profile->p18 == 0) ? 1 : 0;
}
