typedef void (*vfn1)(void*, int);

extern "C" void handleMessage_5a03f0(void* self, int type, void* p, bool b)
{
    if (type == 0x1d) {
        ((vfn1)(*(void***)self)[0x68/8])(self, 1);
    }
}
