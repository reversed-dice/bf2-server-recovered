// FUNCTION: BF2 0x787f90
// AITemplateUnit::getEquipmentTypeName 0x787f90 — global + virtual
namespace dice { namespace hfe { namespace ai {

typedef void* (*VF_GETEQ)(void*, int);

void* getEquipmentTypeName(void* self) {
    void* g = *(void**)0x10ade00;
    VF_GETEQ f = (VF_GETEQ)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(g) + 0xa0));
    return f(g, *(int*)((char*)self + 0x20));
}

}}}
