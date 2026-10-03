// FUNCTION: BF2 0x7e6800
// Candidate for 0x7e67d0 - ZipReadStream constructor v2
// Fix: field1 is int (4 bytes), not long (8 bytes)

extern "C" {
    void dice_hfe_io_ZipReadStream_init(long self) __attribute__((noinline));
}

struct ZipReadStream {
    long vtable;      // +0x00
    int field1;       // +0x08 (4 bytes) + 4 padding
    long archive;     // +0x10
    long entry;       // +0x18
};

void ZipReadStream_ctor(long self, long archive_ptr, long entry_ptr) {
    volatile ZipReadStream* s = (ZipReadStream*)self;
    s->vtable = 0xbad210;
    s->field1 = 1;
    s->archive = archive_ptr;
    s->entry = entry_ptr;
    
    // Virtual call on archive (first vtable slot)
    (*(void(**)(long))(*(long*)archive_ptr))(archive_ptr);
    
    // Tail-call to init
    dice_hfe_io_ZipReadStream_init(self);
}
