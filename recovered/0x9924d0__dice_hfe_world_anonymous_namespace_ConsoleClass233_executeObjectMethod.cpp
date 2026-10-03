// FUNCTION: BF2 0x9924d0
extern "C" unsigned _ZN4dice3hfe5world28CID_RotationalBundleTemplateE;
extern "C" void _ZN4dice3hfe5world24RotationalBundleTemplate15setAccelerationERKNS0_4Vec3E(void*, const unsigned*);
extern "C" void* _ZN4dice3hfe5world17getActiveTemplateEj(unsigned);

long dice_hfe_world_anonymous_namespace_ConsoleClass233_executeObjectMethod(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto not_zero;
    {
        *(char*)(param_1 + 0x108) = 1;
        void* obj = _ZN4dice3hfe5world17getActiveTemplateEj(_ZN4dice3hfe5world28CID_RotationalBundleTemplateE);
        const unsigned* v = (const unsigned*)((char*)obj + 0x230);
        unsigned* d = (unsigned*)(param_1 + 0x10c);
        unsigned a2 = v[2], a1 = v[1], a0 = v[0];
        d[0] = a0; d[1] = a1; d[2] = a2;
        return param_1 + 0x10c;
    }
    not_zero:
    if (sel != 1) return 0;
    {
        const unsigned* src = *(const unsigned**)(param_1 + 0x38);
        unsigned b2 = src[2], b1 = src[1], b0 = src[0];
        unsigned tmp[3];
        tmp[0] = b0; tmp[1] = b1; tmp[2] = b2;
        *(char*)(param_1 + 0x108) = 0;
        void* obj = _ZN4dice3hfe5world17getActiveTemplateEj(_ZN4dice3hfe5world28CID_RotationalBundleTemplateE);
        void (*f)(void*, const unsigned*) = _ZN4dice3hfe5world24RotationalBundleTemplate15setAccelerationERKNS0_4Vec3E;
        f(obj, tmp);
        return 0;
    }
}
