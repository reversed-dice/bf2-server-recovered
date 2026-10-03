extern "C" void fn_4085b8(void*);

extern "C" void ToggleCameraComp_reset_62ad00(void* self)
{
    void* rc = *(void**)((char*)self + 0x38);
    if (rc) {
        if (--(*(int*)rc) == 0) {
            fn_4085b8(rc);
        }
    }
    *(void**)((char*)self + 0x38) = 0;
}
