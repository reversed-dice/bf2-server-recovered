// FUNCTION: BF2 0x4fc1b0
// pmgr::getNumberOfPlayers 0x4fc1b0 — global + virtual + conversion
namespace dice { namespace hfe { namespace python {

typedef int (*VF_NUMPLAYERS)(void*);

extern int conv_pyobj(long n);

int getNumberOfPlayers(void* self, void* a) {
    void* g = *(void**)0x112ee38;
    VF_NUMPLAYERS f = (VF_NUMPLAYERS)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(g) + 0x110));
    return conv_pyobj((long)f(g));
}

}}}
