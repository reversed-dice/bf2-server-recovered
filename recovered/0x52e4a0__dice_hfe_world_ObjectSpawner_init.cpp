// FUNCTION: BF2 0x52e4a0
// ObjectSpawner::init 0x52e4a0 — registre le spawner
namespace dice { namespace hfe { namespace world {

typedef void (*VF_REG)(void*, void*);
extern void os_base_init(void* p);

void init(void* self) {
    os_base_init(self);
    *(unsigned char*)((char*)self + 0xf0) = 1;
    void* gl = *(void**)0x10b8c08;
    VF_REG f = (VF_REG)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(gl) + 0x3b8));
    f(gl, self);
}

}}}
