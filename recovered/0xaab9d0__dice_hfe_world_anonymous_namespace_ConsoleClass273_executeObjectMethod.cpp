namespace dice { namespace hfe { namespace world {

typedef void* (*getactive_t)(void*);
typedef void  (*setflags_t)(void*, unsigned int, unsigned int);

struct Console_aab9d0 {
    char  _pad0[0x30];
    int   argCount;     // +0x30
    char  _pad1[0x4];
    char* arg0;         // +0x38
    char  _pad2[0xc8];
    char  hasResult;    // +0x108
    char  _pad3[0x1];
    bool  result;       // +0x10a
};

extern "C" bool* eom_aab9d0(Console_aab9d0* self)
{
    bool* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        void* m0 = *(void**)0x0112ee48;
        *(int*)0x0112ee2c = 0x20000;
        (*(getactive_t*)(*(char**)m0 + 0x120))(m0);
        void* m1 = *(void**)0x0112ee48;
        void* o = (*(getactive_t*)(*(char**)m1 + 0x120))(m1);
        // volatile: the target loads the mask into a register and TESTs the
        // object field in memory; a plain read puts the field in the register.
        self->result = (*(unsigned int*)((char*)o + 0x8) & *(volatile unsigned int*)0x0112ee2c) != 0;
        void* a = &self->result;
        ret = (bool*)a;
    } else if (self->argCount == 1) {
        char v = *self->arg0;
        self->hasResult = 0;
        void* m0 = *(void**)0x0112ee48;
        *(int*)0x0112ee2c = 0x20000;
        (*(getactive_t*)(*(char**)m0 + 0x120))(m0);
        if (v != 0) {
            void* m1 = *(void**)0x0112ee48;
            void* o = (*(getactive_t*)(*(char**)m1 + 0x120))(m1);
            (*(setflags_t*)(*(char**)o + 0xc0))(o, *(unsigned int*)0x0112ee2c, 0);
        } else {
            void* m1 = *(void**)0x0112ee48;
            void* o = (*(getactive_t*)(*(char**)m1 + 0x120))(m1);
            (*(setflags_t*)(*(char**)o + 0xc0))(o, 0, *(unsigned int*)0x0112ee2c);
        }
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass273_executeObjectMethod (0xaab9d0)
