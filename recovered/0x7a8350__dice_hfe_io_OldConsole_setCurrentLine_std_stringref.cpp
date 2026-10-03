// FUNCTION: BF2 0x7a8350
namespace dice { namespace hfe { namespace io {
extern void fn_407648(void* a, void* b, int c);
extern int fn_407878(void* a);
struct SCL { unsigned char _pad[0xdc]; char m_dc; unsigned char _pad2[0x164 - 0xdd]; int m_164; };
void setCurrentLine_0x7a8350(SCL* self, void* arg2) {
    fn_407648((char*)self + 0xdc, *(void**)arg2, 0x100);
    self->m_164 = fn_407878((char*)self + 0xdc);
}
} } }
