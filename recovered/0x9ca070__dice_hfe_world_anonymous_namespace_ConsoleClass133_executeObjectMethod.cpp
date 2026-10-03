// FUNCTION: BF2 0x9ca070
namespace dice { namespace hfe {
extern void* fn_69de30(unsigned id);

long dice_hfe_world_anonymous_namespace_ConsoleClass133_executeObjectMethod(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto not_zero;
    {
        *(char*)(param_1 + 0x108) = 1;
        char* obj = (char*)fn_69de30(*(unsigned*)(0x00c7d094));
        unsigned long a = *(unsigned long*)(obj + 0x498);
        *(unsigned long*)(param_1 + 0x110) = a;
        unsigned long b = *(unsigned long*)(obj + 0x4a0);
        *(unsigned long*)(param_1 + 0x118) = b;
        unsigned long c = *(unsigned long*)(obj + 0x4a8);
        *(unsigned long*)(param_1 + 0x120) = c;
        return param_1 + 0x110;
    }
    not_zero:
    if (sel != 1) return 0;
    {
        char* q = *(char**)(param_1 + 0x38);
        unsigned long handle = *(unsigned long*)(q + 0x10);
        unsigned char flag = *(unsigned char*)(q + 0xc);
        unsigned dz = *(unsigned*)(q + 0x8);
        unsigned dy = *(unsigned*)(q + 0x4);
        unsigned dx = *(unsigned*)(q + 0x0);
        *(char*)(param_1 + 0x108) = 0;
        char* obj = (char*)fn_69de30(*(unsigned*)(0x00c7d094));
        *(unsigned long*)(obj + 0x4a8) = handle;
        *(unsigned char*)(obj + 0x4a4) = flag;
        *(unsigned*)(obj + 0x4a0) = dz;
        *(unsigned*)(obj + 0x49c) = dy;
        *(unsigned*)(obj + 0x498) = dx;
        return 0;
    }
}
} }
