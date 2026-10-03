// FUNCTION: BF2 0x79ea90
// BitStream dtor 0x79ea90 — flag + buffer release conditionnel
namespace dice { namespace hfe { namespace io {

extern void buffer_release(void* b);

void bitstream_dtor(void* p) {
    if (*(unsigned char*)((char*)p + 0x10) != 0) {
        void* buf = *(void**)p;
        if (buf)
            buffer_release(buf);
    }
}

}}}
