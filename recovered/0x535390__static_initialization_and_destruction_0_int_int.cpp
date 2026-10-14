// FUNCTION: BF2 0x535390
extern "C" int fn_0x00407338(unsigned int a);
extern "C" void atexit_0x004071c8(void* f, void* arg, void* dso);
extern "C" int* Vars_getInt(char const* name, int def);

void si_535390(int a, int b) {
    if (a != 1)
        return;
    if (b != 0xffff)
        return;
    fn_0x00407338(0x108e724);
    atexit_0x004071c8((void*)0x5351b0, 0, (void*)0xf66a88);

    *(float*)0x0108e70c = 0.0f;
    *(float*)0x0108e710 = 0.0f;
    *(float*)0x0108e714 = 0.0f;

    *(float*)0x0108e6a0 = 0.66f;
    *(float*)0x0108e6a4 = 0.66f;
    *(float*)0x0108e6a8 = 0.185f;
    *(float*)0x0108e6ac = 0.185f;
    *(float*)0x0108e6b0 = 0.66f;
    *(float*)0x0108e6b4 = 0.185f;
    *(float*)0x0108e6b8 = 0.185f;
    *(float*)0x0108e6bc = 0.185f;
    *(float*)0x0108e6c0 = 0.66f;
    *(float*)0x0108e6c4 = 0.185f;
    *(float*)0x0108e6c8 = 0.66f;
    *(float*)0x0108e6cc = 0.66f;
    *(float*)0x0108e6d0 = 0.66f;
    *(float*)0x0108e6d4 = 0.185f;
    *(float*)0x0108e6d8 = 0.185f;
    *(float*)0x0108e6dc = 0.66f;
    *(float*)0x0108e6e0 = 0.66f;
    *(float*)0x0108e6e4 = 0.66f;
    *(float*)0x0108e6e8 = 0.66f;
    *(float*)0x0108e6ec = 0.185f;
    *(float*)0x0108e6f0 = 0.66f;
    *(float*)0x0108e6f4 = 0.185f;
    *(float*)0x0108e6f8 = 0.185f;
    *(float*)0x0108e6fc = 0.185f;
    *(float*)0x0108e700 = 1.0f;
    *(float*)0x0108e704 = 1.0f;
    *(float*)0x0108e708 = 1.0f;
    *(float*)0x0108e718 = 0.0f;
    *(float*)0x0108e71c = 0.0f;
    *(float*)0x0108e720 = 0.0f;

    *(float*)0x0108e680 = 8.0f;
    *(void**)0x0108e678 = (void*)0x108e680;
    *(float*)0x0108e670 = 0.05f;
    *(void**)0x0108e668 = (void*)0x108e670;
    *(float*)0x0108e660 = 0.05f;
    *(void**)0x0108e658 = (void*)0x108e660;
    *(float*)0x0108e650 = 0.3f;
    *(void**)0x0108e648 = (void*)0x108e650;
    *(void**)0x0108e640 = (void*)Vars_getInt("parachute-debug", 0);
}
