// FUNCTION: BF2 0x60c540
namespace dice { namespace hfe { namespace world {
extern void base_0x0060bcc0(void* self);
extern void del_0x004085b8(void* self);
void dtor_60c540(void* self) {
    *(void**)self = (void*)0xb79730;
    *(void**)((char*)self + 0x20) = (void*)0xb798c0;
    base_0x0060bcc0(self);
    del_0x004085b8(self);
}
} } }
