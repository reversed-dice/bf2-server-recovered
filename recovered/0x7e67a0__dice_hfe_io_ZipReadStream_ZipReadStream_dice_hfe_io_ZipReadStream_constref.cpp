// FUNCTION: BF2 0x7e67a0
// BF2_FLAGS: -fno-strict-aliasing
// Candidate for 0x7e67a0 - ZipReadStream copy constructor
extern "C" {
    void dice_hfe_io_ZipReadStream_init(long self) __attribute__((noinline));
}

struct ZipReadStream {
    long vtable;      // +0x00
    int field1;       // +0x08
    long archive;     // +0x10
    long entry;       // +0x18
};

void ZipReadStream_copy_ctor(long self, long src) {
    ZipReadStream* s = (ZipReadStream*)self;
    ZipReadStream* r = (ZipReadStream*)src;
    s->vtable = 0xbad210;
    *(__typeof__(s->field1) volatile*)&s->field1 = 1;
    s->archive = r->archive;
    s->entry = r->entry;
    
    // Virtual call on archive (first vtable slot)
    (*(void(**)(long))(*(long*)s->archive))(s->archive);
    
    // Tail-call to init
    dice_hfe_io_ZipReadStream_init(self);
}
// REVERSED_FUNCTION: dice_hfe_io_ZipReadStream_ZipReadStream_dice_hfe_io_ZipReadStream_constref (0x7e67a0)
