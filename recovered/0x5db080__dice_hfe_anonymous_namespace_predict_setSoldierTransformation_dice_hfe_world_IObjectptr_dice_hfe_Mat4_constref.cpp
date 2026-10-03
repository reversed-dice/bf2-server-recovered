// FUNCTION: BF2 0x5db080
struct Mat4 { float m[16]; };

extern "C" void setSoldierTransformation_5db080(void* self, Mat4* mat) {
    if (*(void**)((char*)self + 0x50) == 0) {
        typedef void (*Fn)(void*);
        Fn fn = (Fn)(*(void***)self)[0x118/8];
        fn(self);
    } else {
        typedef void (*Fn)(void*);
        Fn fn = (Fn)(*(void***)self)[0x1d8/8];
        fn(self);
    }
    void* child = *(void**)((char*)self + 0x88);
    if (child != 0) {
        typedef void (*Fn)(void*, Mat4*);
        Fn fn = (Fn)(*(void***)child)[0xa8/8];
        fn(child, mat);
    }
}
