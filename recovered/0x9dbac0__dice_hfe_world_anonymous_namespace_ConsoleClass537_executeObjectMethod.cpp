// FUNCTION: BF2 0x9dbac0
namespace dice { namespace hfe {

// may_alias so the two temporary stores below land in alias set 0 and conflict
// with the vtable-slot load: without it sched2 sinks that load past them and
// the score stops at 97.62%. See this pattern module's docstring.
typedef unsigned int __attribute__((may_alias)) uint_alias_9dbac0;

struct Vec2_9dbac0 { unsigned int a; unsigned int b; };

// Declared, not defined: the target CALLs the singleton accessor, so this is a
// relocation and no absolute address is emitted.
void* getSingleton_9dbac0();

typedef void (*getfn_9dbac0)(Vec2_9dbac0*, void*);
typedef void (*setfn_9dbac0)(void*, Vec2_9dbac0*);

void* executeObjectMethod_9dbac0(char* self)
{
    if (*(int*)(self + 0x30) == 0) {
        *(unsigned char*)(self + 0x108) = 1;
        void* p = getSingleton_9dbac0();
        Vec2_9dbac0 tmp;
        getfn_9dbac0 g = *(getfn_9dbac0*)(*(char**)p + 0x328);
        g(&tmp, p);
        unsigned int* dst = (unsigned int*)(self + 0x10c);
        dst[0] = tmp.a;
        dst[1] = tmp.b;
        return dst;
    }
    if (*(int*)(self + 0x30) != 1) return 0;
    unsigned int* src = *(unsigned int**)(self + 0x38);
    // High word before low word: the target reads [RAX+4] then [RAX].
    unsigned int hi = src[1];
    unsigned int lo = src[0];
    *(unsigned char*)(self + 0x108) = 0;
    void* p = getSingleton_9dbac0();
    Vec2_9dbac0 t2;
    setfn_9dbac0 s = *(setfn_9dbac0*)(*(char**)p + 0x320);
    *(uint_alias_9dbac0*)&t2.a = lo;
    *(uint_alias_9dbac0*)&t2.b = hi;
    s(p, &t2);
    return 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass537_executeObjectMethod (0x9dbac0)
