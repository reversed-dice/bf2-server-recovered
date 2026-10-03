// FUNCTION: BF2 0x7e5930
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    void* m_p;
    void* get() { return *(void**)((char*)m_p + 0x38); }
};
void* f_24(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_ZipReadStream_getSize (0x7e5930)
