// FUNCTION: BF2 0x54dd50
namespace dice { namespace hfe { namespace world {
extern void fn_54da70(void* a, void* b, void* c);
void handlePickupOnItem_0x54dd50(void* self, void* obj, void* item) {
    void* p = *(void**)((char*)item + 0x28);
    if (((int (*)(void*))(*(void***)p)[0x4])(p) != *(int*)0x00c7d038)
        return;
    fn_54da70(self, obj, item);
}
} } }
