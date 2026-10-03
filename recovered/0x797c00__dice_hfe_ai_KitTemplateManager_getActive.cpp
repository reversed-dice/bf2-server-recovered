// FUNCTION: BF2 0x797c00
namespace dice { namespace hfe { namespace ai {
struct SS7 { char buf[0x20]; };
extern void fn_407cc8(SS7* a, void* b);
extern void fn_407e08(SS7* a, void* b, char* c);
struct KTM {
    unsigned char _pad[0x10];
    char m_10[0x20];
    unsigned char _pad2[0x38 - 0x30];
    void* m_38;
};
SS7* getActive_0x797c00(SS7* self, KTM* arg2) {
    char local;
    if (arg2->m_38 != (char*)arg2 + 0x10) {
        fn_407cc8(self, (char*)arg2->m_38 + 0x20);
    } else {
        fn_407e08(self, (void*)0xbb25f1, &local);
    }
    return self;
}
} } }
