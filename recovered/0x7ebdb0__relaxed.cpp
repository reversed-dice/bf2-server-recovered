// FUNCTION: BF2 0x7ebdb0
namespace dice { namespace hfe { namespace io {
extern void* fn_7f03e0(void* a, void* b);
struct GTS { unsigned char _pad[0x20]; char m_50; char m_58; };
int getTriggerState_0x7ebdf0(GTS* self, int arg2) {
    void* p = fn_7f03e0((char*)self + 0x20, &arg2);
    if (p != (char*)self + 0x28)
        return *(unsigned char*)((char*)*(void**)((char*)p + 0x28) + 0xb0);
    return 0;
}
} } }
