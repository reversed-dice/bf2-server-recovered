// FUNCTION: BF2 0x5e3b10
// GenericFireArm::getAutoReload 0x5e3b10 — délégation + défaut 1
namespace dice { namespace hfe { namespace world {

typedef bool (*VF_GETAR)(void*);

bool getAutoReload(void* self) {
    void* c = *(void**)((char*)self + 0x2b0);
    if (c == 0)
        return true;
    VF_GETAR f = (VF_GETAR)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(c) + 0x1a0));
    return f(c);
}

}}}
