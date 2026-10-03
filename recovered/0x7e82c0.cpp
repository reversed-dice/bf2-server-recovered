extern "C" char fn_7a7af0(void*);

extern "C" int getAvailableBytes_7e82c0(void* self)
{
    void* t = *(void**)((char*)self + 0x18);
    int r = 0;
    if (t) {
        if (!fn_7a7af0(t)) {
            r = 1;
        }
    }
    return r;
}
