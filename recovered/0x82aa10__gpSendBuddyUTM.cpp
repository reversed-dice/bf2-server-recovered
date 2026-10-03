// FUNCTION: BF2 0x82aa10
extern "C" void fn_83ad30(void*, void*);
extern "C" long fn_82d350(void*, void*, int, void*, int);
long fn_82aa10(void* self, void* a2, void* msg, int type) {
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
        return fn_82d350(self, a2, 5, msg, type);
    }
    fn_83ad30(self, (void*)0xbb4eb6);
    return 2;
}