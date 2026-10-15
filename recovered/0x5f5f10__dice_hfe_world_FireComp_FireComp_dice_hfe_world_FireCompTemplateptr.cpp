// FUNCTION: BF2 0x5f5f10
// BF2_FLAGS: -fno-strict-aliasing
extern "C" void fn_0x5f5f10(void* self, void* tmpl) {
    char* p = (char*)self;
    *(int*)(p + 0x8) = 1;
    *(void**)(p + 0x0) = (void*)0xb732b0;
    *(void**)(p + 0x20) = (void*)0xb73518;
    void** node = (void**)(p + 0x28);
    node[1] = (void*)node;
    node[0] = (void*)node;
    long* z = (long*)(p + 0xa0);
    *(int*)(p + 0x3c) = -1;
    *(int*)(p + 0x44) = 0;
    *(int*)(p + 0x48) = 0;
    *(int*)(p + 0x4c) = 0;
    *(int*)(p + 0x50) = 0;
    *(int*)(p + 0x80) = 0;
    *(int*)(p + 0x84) = -1;
    *(char*)(p + 0x88) = 0;
    *(int*)(p + 0x8c) = 0;
    *(int*)(p + 0x90) = 0;
    *(char*)(p + 0x94) = 0;
    *(char*)(p + 0x95) = 0;
    *(char*)(p + 0x96) = 0;
    *(int*)(p + 0x98) = 0;
    z[0] = 0;
    z[1] = 0;
    z[2] = 0;
    *(long*)(p + 0xb8) = (long)0x759dc150;
    *(void**)(p + 0xc0) = tmpl;
    char* base1 = p + 0xc8;
    {
        unsigned int* q = (unsigned int*)base1;
        for (unsigned long i = 4; i != 0; --i) {
            q[0] = 0; q[1] = 0; q[2] = 0; q[3] = 0;
            q += 4;
        }
    }
    *(float*)(base1 + 0x3c) = 1.0f;
    *(float*)(base1 + 0x28) = 1.0f;
    *(float*)(base1 + 0x14) = 1.0f;
    *(float*)(base1 + 0x0) = 1.0f;
    char* base2 = p + 0x108;
    {
        float* q = (float*)base2;
        long n = 3;
        do {
            --n;
            q[0] = 0.0f; q[1] = 0.0f; q[2] = 0.0f; q[3] = 0.0f;
            q += 4;
        } while (n != -1);
    }
    *(unsigned int*)(base2 + 0x3c) = 0x3f800000;
    *(unsigned int*)(base2 + 0x28) = 0x3f800000;
    *(unsigned int*)(base2 + 0x14) = 0x3f800000;
    *(unsigned int*)(base2 + 0x0) = 0x3f800000;
    *(int*)(p + 0x148) = 0;
    *(int*)(p + 0x14c) = 0;
    *(int*)(p + 0x150) = 0;
    *(char*)(p + 0x154) = 1;
    *(int*)(p + 0x158) = 0;
    *(int*)(p + 0x15c) = 0;
    int* ve = *(int**)((char*)tmpl + 0x40);
    int* vb = *(int**)((char*)tmpl + 0x38);
    long cnt = ve - vb;
    if (cnt == 0) {
        *(int*)(p + 0x40) = 2;
        *(int*)(p + 0x38) = 0;
    } else {
        int e = vb[0];
        *(int*)(p + 0x38) = 0;
        *(int*)(p + 0x40) = e;
    }
}
