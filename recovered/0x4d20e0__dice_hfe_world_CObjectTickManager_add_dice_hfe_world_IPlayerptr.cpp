// FUNCTION: BF2 0x4d20e0
// CObjectTickManager::add 0x4d20e0
extern "C" {
    void* _Znwm(unsigned long size);
    void _ZNSt15_List_node_base4hookEPS_(void* node, void* pos);
}

namespace dice { namespace hfe { namespace world {

void CObjectTickManager_add(void* self, void* player) {
    char* raw = (char*)_Znwm(0x20);
    char* node = raw + 0x10;
    if (node != 0) {
        *(void**)(raw + 0x10) = player;
        *(int*)(node + 0x8) = 0;
    }
    _ZNSt15_List_node_base4hookEPS_(raw, self);
}

} } }
