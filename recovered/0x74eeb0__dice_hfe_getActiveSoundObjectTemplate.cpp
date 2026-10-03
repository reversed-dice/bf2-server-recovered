// FUNCTION: BF2 0x74eeb0
// getActiveSoundObjectTemplate 0x74eeb0 — template + virtual call slot 0x2a0
namespace dice { namespace hfe {

extern void* get_template(unsigned int id);
typedef void* (*VF1)(void*);

void* getActiveSoundObjectTemplate() {
    void* t = get_template(0x985fd1);
    if (t == 0)
        return 0;
    VF1 fn = (VF1)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(t) + 0x2a0));
    return fn(t);
}

}}
