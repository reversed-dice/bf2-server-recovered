// FUNCTION: BF2 0x5621b0
// 0x5621b0 TriggerableTarget::getName
extern "C" void string_copy(void*, void*);

void* getName(void* dst, void* self)
{
    void* src = (char*)self + 0x250;
    string_copy(dst, src);
    return dst;
}
