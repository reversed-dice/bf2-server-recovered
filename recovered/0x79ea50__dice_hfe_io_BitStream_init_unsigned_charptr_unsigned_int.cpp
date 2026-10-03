// FUNCTION: BF2 0x79ea50
// BitStream::init 0x79ea50 — stores + tail-call
namespace dice { namespace hfe { namespace io {

extern void bs_init2(void* p);

void bitstream_init(void* p, void* buf, unsigned int size) {
    *(void**)p = buf;
    *(unsigned int*)((char*)p + 8) = size;
    *(unsigned int*)((char*)p + 0xc) = 0;
    bs_init2(p);
}

}}}
