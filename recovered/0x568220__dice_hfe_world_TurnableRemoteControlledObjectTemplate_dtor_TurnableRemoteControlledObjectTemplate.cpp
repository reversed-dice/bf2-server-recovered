// FUNCTION: BF2 0x568220
namespace dice { namespace hfe { namespace world {
extern void base_0x00544720(void* self);
void dtor_568220(void* self) {
    *(void**)self = (void*)0xb53af0;
    *(void**)((char*)self + 0x10) = (void*)0xb53d80;
    *(void**)((char*)self + 0x68) = (void*)0xb53db8;
    *(void**)((char*)self + 0x1c8) = (void*)0xb53e38;
    base_0x00544720(self);
}
} } }
