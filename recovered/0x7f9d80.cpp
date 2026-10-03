extern "C" int advanceNextUnread_7f9d80(void* self)
{
    int r = 0;
    int n = *(int*)((char*)self + 0x4c);
    if (n < *(int*)((char*)self + 0x48)) {
        *(int*)((char*)self + 0x4c) = n + 1;
        r = 1;
    }
    return r;
}
