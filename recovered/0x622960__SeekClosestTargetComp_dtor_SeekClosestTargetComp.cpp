// FUNCTION: BF2 0x622960
// Candidate for 0x622960 - SeekClosestTargetComp destructor
// Destructor: reset vtables, lock, refcount release, operator delete

extern "C" {
    void _ZdlPv(long ptr); // operator delete
}

struct RefCounted {
    int refcount;
};

void SeekClosestTargetComp_dtor(long self) {
    // Reset vtable pointers
    *(long*)self = 0xb7e790;
    *(long*)(self + 0x20) = 0xb7e868;
    
    // Lock vehicle
    extern void lockVehicle(long self, long obj);
    lockVehicle(self, 0);
    
    // Release refcounted members at offsets 0x48, 0x38, 0x30
    // (param_1[9], param_1[7], param_1[6] = offsets 72, 56, 48)
    RefCounted* ref9 = *(RefCounted**)(self + 0x48);
    if (ref9 != 0) {
        if (--ref9->refcount == 0) {
            _ZdlPv((long)ref9);
        }
    }
    
    int __perm_pad2 = 2; (void)__perm_pad2;
    RefCounted* ref7 = *(RefCounted**)(self + 0x38);
    if (ref7 != 0) {
        if (!(__builtin_expect(!(--ref7->refcount == 0), 1))) {
            _ZdlPv((long)ref7);
        }
    }
    
    RefCounted* ref6 = *(RefCounted**)(self + 0x30);
    if (ref6 != 0) {
        if (__builtin_expect(--ref6->refcount == 0, 0)) {
            _ZdlPv((long)ref6);
            // Reset vtables and delete self
            *(long*)(self + 0x20) = 0xb7e5b0;
            *(long*)self = 0xb7bcb0;
            _ZdlPv(self);
            return;
        }
    }
    
    // Reset vtables and delete self (even if ref6 wasn't the last)
    *(long*)(self + 0x20) = 0xb7e5b0;
    *(long*)self = 0xb7bcb0;
    _ZdlPv(self);
}
