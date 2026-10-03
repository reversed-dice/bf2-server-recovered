extern "C" void fn_4085b8(void*);

extern "C" void Parachute_reset_535920(void* self)
{
    *(int*)((char*)self + 0x600) = 0xbf800000;
    *(int*)((char*)self + 0x604) = 0;
    *(int*)((char*)self + 0x608) = 0;
    void* rc = *(void**)((char*)self + 0x610);
    if (rc) {
        if (--(*(int*)rc) == 0) {
            fn_4085b8(rc);
        }
    }
    *(void**)((char*)self + 0x610) = 0;
}
