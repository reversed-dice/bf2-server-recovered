// FUNCTION: BF2 0x872ee0
namespace dice { namespace hfe {
extern void* fn_407508(unsigned int size);
extern void* fn_0x00407e78(void* node, void* list);
void add_872ee0(void* obj) {
    void* node = fn_407508(0x18);
    *(void**)((char*)node + 0x10) = obj;
    fn_0x00407e78(node, (void*)0x10c0920);
}
} }
