// FUNCTION: BF2 0x711bd0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {

typedef void* (*Fn_get)(void*);
typedef void* (*Fn_child)(void*);
typedef void (*Fn_draw)(void*, unsigned char, int, void*, unsigned int, unsigned int, unsigned int);
typedef void (*Fn_recurse)(void*, void*);

void drawRec(void* self, void* obj)
{
    void* mesh = *(void**)((char*)obj + 0x80);
    if (mesh != 0) {
        void** vt = *(void***)mesh;
        Fn_draw f = (Fn_draw)vt[0xd8 / 8];
        unsigned int b73 = *(unsigned char*)((char*)self + 0x73);
        unsigned int b72 = *(unsigned char*)((char*)self + 0x72);
        unsigned int b71 = *(unsigned char*)((char*)self + 0x71);
        void* id = ((Fn_get)(*(void***)obj)[0x108 / 8])(obj);
        f(mesh,
          *(unsigned char*)((char*)self + 0x68),
          *(int*)((char*)self + 0x64),
          id, b71, b72, b73);
    }
    void* c = ((Fn_child)(*(void***)obj)[0x1e0 / 8])(obj);
    while (c != 0) {
        ((Fn_recurse)(*(void***)self)[0x148 / 8])(self, c);
        c = *(void**)((char*)c + 0x58);
    }
}

}}}
