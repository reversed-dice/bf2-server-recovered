// FUNCTION: BF2 0x67ea40
namespace dice { namespace hfe {
extern void fn_407cc8(void* a, void* b);
struct MT2 { int m_0; unsigned char _pad[4]; char m_8; char m_10; char m_18; char m_20; };
void MapType_copy_0x67ea40(MT2* self, MT2* arg2) {
    self->m_0 = arg2->m_0;
    fn_407cc8((char*)self + 8, (char*)arg2 + 8);
    fn_407cc8((char*)self + 0x10, (char*)arg2 + 0x10);
    fn_407cc8((char*)self + 0x18, (char*)arg2 + 0x18);
    *(char*)((char*)self + 0x20) = *(char*)((char*)arg2 + 0x20);
}
} }
