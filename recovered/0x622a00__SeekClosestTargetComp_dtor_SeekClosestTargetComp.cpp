// FUNCTION: BF2 0x622a00
// Candidate for 0x622a90 - SeekClosestTargetComp dtor (non-deleting variant)
// Same as 0x622960 but WITHOUT operator delete on self at the end

extern "C" {
    void _ZdlPv(long ptr);
}

struct RefCounted {
    int refcount;
};

void SeekClosestTargetComp_dtor(long self) {
    *(long*)self = 0xb7e790;
    *(long*)(self + 0x20) = 0xb7e868;
    
    extern void lockVehicle(long self, long obj);
    lockVehicle(self, 0);
    
    // Release ref at offset 0x48
    RefCounted* ref9 = *(RefCounted**)(self + 0x48);
    if (__builtin_expect(ref9 != 0, 1)) {
        if (--ref9->refcount == 0) {
            _ZdlPv((long)ref9);
        }
    }
    
    // Release ref at offset 0x38
    RefCounted* ref7 = *(RefCounted**)(self + 0x38);
    if (ref7 != 0) {
        if (__builtin_expect(--ref7->refcount == 0, 0)) {
            _ZdlPv((long)ref7);
        }
    }
    
    // Release ref at offset 0x30
    RefCounted* ref6 = *(RefCounted**)(self + 0x30);
    if (ref6 != 0) {
        if (--ref6->refcount == 0) {
            _ZdlPv((long)ref6);
        }
    }
    
    // Reset vtables only (NO operator delete on self)
    *(long*)(self + 0x20) = 0xb7e5b0;
    *(long*)self = 0xb7bcb0;
}
