extern "C" void f_6f9380(float a0, float a1, char* self) {
    float dx = a0 - (float)*(int*)(self + 0x20);
    float dy = a1 - (float)*(int*)(self + 0x24);
    char* vtbl = *(char**)self;
    void (*func)(float, float, char*) = *(void(**)(float, float, char*))(vtbl + 0x118);
    func(dx, dy, self);
}
