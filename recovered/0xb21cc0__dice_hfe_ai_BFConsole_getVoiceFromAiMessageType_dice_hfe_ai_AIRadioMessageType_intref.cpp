// FUNCTION: BF2 0xb21cc0
namespace dice { namespace hfe { namespace ai {
extern void* fn_b25d80(void* a, void* b);
struct GVFM { unsigned char _pad[0x70]; char m_70; unsigned char _pad2[0x78 - 0x71]; char m_78; };
bool getVoiceFromAiMessageType_0xb21cc0(GVFM* self, int arg2, int* out) {
    void* p = fn_b25d80((char*)self + 0x70, &arg2);
    if (p == (char*)self + 0x78)
        return false;
    *out = *(unsigned char*)((char*)p + 0x24);
    return true;
}
} } }
