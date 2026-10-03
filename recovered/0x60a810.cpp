typedef void (*vfn70)(void*, int);

extern "C" void fireStop_60a810(void* self, char flag)
{
    void* t = *(void**)((char*)self + 0x28);
    if (t) {
        if (*(char*)((char*)(*(void**)((char*)self + 0x40)) + 0x24)) {
            if (!flag) {
                ((vfn70)(*(void***)t)[0x70/8])(t, 1);
            }
        }
    }
}
