// FUNCTION: BF2 0x718c50
extern "C" int fn_0x00407338(unsigned int a);
extern "C" void atexit_0x004071c8(void* f, void* arg, void* dso);

void si_718c50(int a, int b) {
    if (a != 1)
        return;
    if (b != 0xffff)
        return;
    fn_0x00407338(0x10a4eb8);
    atexit_0x004071c8((void*)0x718b40, 0, (void*)0xf66a88);

    *(float*)0x010a4e40 = 0.66f;
    *(float*)0x010a4e44 = 0.66f;
    *(float*)0x010a4e48 = 0.185f;
    *(float*)0x010a4e4c = 0.185f;
    *(float*)0x010a4e50 = 0.66f;
    *(float*)0x010a4e54 = 0.185f;
    *(float*)0x010a4e58 = 0.185f;
    *(float*)0x010a4e5c = 0.185f;
    *(float*)0x010a4e60 = 0.66f;
    *(float*)0x010a4e64 = 0.185f;
    *(float*)0x010a4e68 = 0.66f;
    *(float*)0x010a4e6c = 0.66f;
    *(float*)0x010a4e70 = 0.66f;
    *(float*)0x010a4e74 = 0.185f;
    *(float*)0x010a4e78 = 0.185f;
    *(float*)0x010a4e7c = 0.66f;
    *(float*)0x010a4e80 = 0.66f;
    *(float*)0x010a4e84 = 0.66f;
    *(float*)0x010a4e88 = 0.66f;
    *(float*)0x010a4e8c = 0.185f;
    *(float*)0x010a4e90 = 0.66f;
    *(float*)0x010a4e94 = 0.185f;
    *(float*)0x010a4e98 = 0.185f;
    *(float*)0x010a4e9c = 0.185f;
    *(float*)0x010a4ea0 = 1.0f;
    *(float*)0x010a4ea4 = 1.0f;
    *(float*)0x010a4ea8 = 1.0f;
    *(float*)0x010a4eac = 0.0f;
    *(float*)0x010a4eb0 = 0.0f;
    *(float*)0x010a4eb4 = 0.0f;

    *(int*)0x010a4e30 = 0;
    *(void**)0x010a4e28 = (void*)0x10a4e30;
    *(int*)0x010a4e20 = 1;
    *(void**)0x010a4e18 = (void*)0x10a4e20;
    *(int*)0x010a4e10 = 1;
    *(void**)0x010a4e08 = (void*)0x10a4e10;
    *(int*)0x010a4e00 = 1;
    *(void**)0x010a4df8 = (void*)0x10a4e00;
    *(int*)0x010a4df0 = 0;
    *(void**)0x010a4de8 = (void*)0x10a4df0;
    *(int*)0x010a4de0 = 0;
    *(void**)0x010a4dd8 = (void*)0x10a4de0;
    *(float*)0x010a4dd0 = 0.01f;
    *(void**)0x010a4dc8 = (void*)0x10a4dd0;
    *(float*)0x010a4dc0 = 0.866f;
    *(void**)0x010a4db8 = (void*)0x10a4dc0;

    *(void**)0x010a4da0 = 0;
    *(void**)0x010a4da8 = 0;
    *(void**)0x010a4db0 = 0;
    atexit_0x004071c8((void*)0x718c30, 0, (void*)0xf66a88);

    *(void**)0x010a4d80 = 0;
    *(void**)0x010a4d88 = 0;
    *(void**)0x010a4d90 = 0;
    atexit_0x004071c8((void*)0x718ed0, 0, (void*)0xf66a88);

    *(void**)0x010a4d60 = 0;
    *(void**)0x010a4d68 = 0;
    *(void**)0x010a4d70 = 0;
    atexit_0x004071c8((void*)0x718ea0, 0, (void*)0xf66a88);
}
