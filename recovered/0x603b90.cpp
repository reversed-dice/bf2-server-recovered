extern "C" void* getProjectile_603b90(void* self)
{
    void* a = *(void**)((char*)self + 0x88);
    if (!a) return 0;
    void* p = *(void**)((char*)a + 0x8);
    if (!p) return 0;
    return p;
}
