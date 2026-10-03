// FUNCTION: BF2 0x82a990
extern "C" void fn_83ad30(void*, void*);
extern "C" long fn_82d350(void*, void*, int, void*, int);
long fn_82a990(void* self, void* a2, void* msg) {
    if (!self) return 2;
    void* p = *(void**)self;
    if (!p) return 2;
    int flag = *(int*)((char*)p + 0x108);
    if (flag != 0) return 0;
    if (*(int*)((char*)p + 0x23c) == 4) {
        fn_83ad30(self, (void*)0xbb5088);
        return 2;
    }
    if (msg) {
        return fn_82d350(self, a2, 1, msg, 0);
    }
    fn_83ad30(self, (void*)0xbb4eb6);
    return 2;
}