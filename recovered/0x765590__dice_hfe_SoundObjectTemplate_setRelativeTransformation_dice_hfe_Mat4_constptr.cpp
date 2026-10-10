// FUNCTION: BF2 0x765590
void setRelativeTransformation(long self, char* p) {
    if (p == 0) return;
    void* o = *(void**)(self + 0x78);
    ((void (*)(void*, void*))(*(void***)o)[0x100 / 8])(o, p + 0x30);
    void* o2 = *(void**)(self + 0x78);
    ((void (*)(void*, void*))(*(void***)o2)[0x110 / 8])(o2, p + 0x20);
}
