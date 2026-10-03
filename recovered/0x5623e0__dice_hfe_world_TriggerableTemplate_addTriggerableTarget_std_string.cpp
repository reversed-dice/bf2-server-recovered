// FUNCTION: BF2 0x5623e0
// TriggerableTemplate::addTriggerableTarget 0x5623e0
extern "C" {
    void* _Znwm(unsigned long size);
    void _ZNSsC1ERKSs(void* dst, const void* src);
    void _ZNSt15_List_node_base4hookEPS_(void* node, void* pos);
}

namespace dice { namespace hfe { namespace world {

void TriggerableTemplate_addTriggerableTarget(void* self, const void* target) {
    void* listpos = (char*)self + 0x1f8;
    char* raw = (char*)_Znwm(0x18);
    char* strslot = raw + 0x10;
    if (strslot != 0) {
        _ZNSsC1ERKSs(strslot, target);
    }
    _ZNSt15_List_node_base4hookEPS_(raw, listpos);
}

} } }
