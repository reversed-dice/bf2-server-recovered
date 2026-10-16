// FUNCTION: BF2 0x683830
// BF2_FLAGS: -fno-strict-aliasing
extern "C" void ctor_683830(void* self) {
    char* p = (char*)self;
    *(void**)(p + 0x0) = (void*)0xb8c9d0;
    *(int*)(p + 0x8) = 1;
    *(void**)(p + 0x10) = 0;
    *(void**)(p + 0x18) = 0;
    float z;
    *(unsigned int*)&z = 0;
    {
        float* v = (float*)(p + 0x20);
        v[0] = z; v[1] = z; v[2] = z;
    }
    {
        float* v = (float*)(p + 0x2c);
        v[0] = z; v[1] = z; v[2] = z;
    }
    {
        float* v = (float*)(p + 0x38);
        v[0] = z; v[1] = z; v[2] = z;
    }
    {
        float* v = (float*)(p + 0x44);
        v[0] = z; v[1] = z; v[2] = z;
    }
    {
        float* v = (float*)(p + 0x50);
        v[0] = z; v[1] = z; v[2] = z;
    }
    char* b = p + 0x60;
    {
        unsigned int* q = (unsigned int*)b;
        for (unsigned long i = 6; i != 0; --i) {
            q[0] = 0; q[1] = 0; q[2] = 0;
            q += 4;
        }
    }
    {
        unsigned int* q = (unsigned int*)(b + 0x60);
        long n = 7;
        do {
            --n;
            q[0] = 0; q[1] = 0; q[2] = 0;
            q += 3;
        } while (n != -1);
    }
    {
        unsigned int* q = (unsigned int*)(b + 0xc0);
        long n = 7;
        do {
            --n;
            q[0] = 0; q[1] = 0; q[2] = 0;
            q += 3;
        } while (n != -1);
    }
    {
        unsigned int* v = (unsigned int*)(b + 0x120);
        unsigned int* w = (unsigned int*)(b + 0x12c);
        char* base = b + 0x174;
        v[0] = 0; v[1] = 0; v[2] = 0;
        w[0] = 0; w[1] = 0; w[2] = 0;
        v[6] = 0;
        v[7] = 0;
        *(unsigned char*)(v + 8) = 1;
        {
            unsigned int* x = (unsigned int*)(b + 0x144);
            x[0] = 0; x[1] = 0; x[2] = 0;
        }
        {
            unsigned int* x = (unsigned int*)(b + 0x150);
            x[0] = 0; x[1] = 0; x[2] = 0;
        }
        {
            unsigned int* q = (unsigned int*)base;
            long n = 3;
            do {
                --n;
                q[0] = 0; q[1] = 0; q[2] = 0; q[3] = 0;
                q += 4;
            } while (n != -1);
        }
        *(float*)(base + 0x3c) = 1.0f;
        *(float*)(base + 0x28) = 1.0f;
        *(float*)(base + 0x14) = 1.0f;
        *(float*)(base + 0x0) = 1.0f;
        {
            unsigned int* x = (unsigned int*)(b + 0x1b4);
            x[0] = 0; x[1] = 0; x[2] = 0;
        }
        *(unsigned char*)(b + 0x1c8) = 1;
        *(int*)(b + 0x1e4) = 2;
        *(unsigned char*)(p + 0xe60) = 0;
    }
}
