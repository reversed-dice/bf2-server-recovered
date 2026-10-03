extern "C" void* g;
typedef void (*vfn1)(void*, void*, int, float);

extern "C" void onFirstGhost_536b00(void* self)
{
    if (*(char*)((char*)self + 0x5fa) == 1) {
        *(char*)((char*)self + 0x5fa) = 0;
        ((vfn1)(*(void***)g)[0x1a0/8])(g, self, 0x46, *(float*)0xb4a5d8);
        ((vfn1)(*(void***)g)[0x1a0/8])(g, self, 0x46, *(float*)0xb34b64);
    }
}
