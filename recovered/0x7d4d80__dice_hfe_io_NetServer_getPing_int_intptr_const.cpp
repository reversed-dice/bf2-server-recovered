// FUNCTION: BF2 0x7d4d80
extern "C" void* fn_7d4d30(void*, void*);

int getPing(char* self, int id, int* out)
{
    int tmp = id;
    void* r = fn_7d4d30(self + 0x10, &tmp);
    if (r != (void*)(self + 0x18)) {
        void* p2 = *(void**)((char*)r + 0x28);
        if (p2) {
            *out = *(int*)((char*)p2 + 0xa0);
            return 1;
        }
    }
    return 0;
}
