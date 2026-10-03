// FUNCTION: BF2 0x847f40
namespace dice { namespace hfe { namespace io {
extern void fn_847a50(void* a, unsigned short b);
extern void fn_845630(void* a, unsigned short b);
struct RC2 { unsigned char _pad[0x810]; char m_810; unsigned char _pad2[0x848 - 0x811]; char m_848; };
void RemoveClient_0x847f40(RC2* self, unsigned short arg2) {
    fn_847a50((char*)self + 0x810, arg2);
    fn_845630((char*)self + 0x848, arg2);
}
} } }
