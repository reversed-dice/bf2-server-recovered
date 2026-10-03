// FUNCTION: BF2 0x524a20
// ItemContainerTemplate::replaceItem 0x524a20
extern "C" {
    void* _Znwm(unsigned long size);
    void _ZNSsC1ERKSs(void* dst, const void* src);
    void _ZNSt15_List_node_base4hookEPS_(void* node, void* pos);
}

namespace dice { namespace hfe { namespace world {

void ItemContainerTemplate_replaceItem(void* self, const void* item) {
    void* listpos = (char*)self + 0x218;
    char* raw = (char*)_Znwm(0x18);
    char* strslot = raw + 0x10;
    if (strslot != 0) {
        _ZNSsC1ERKSs(strslot, item);
    }
    _ZNSt15_List_node_base4hookEPS_(raw, listpos);
}

} } }
