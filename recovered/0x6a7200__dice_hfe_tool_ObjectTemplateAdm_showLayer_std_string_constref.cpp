// FUNCTION: BF2 0x6a7200
namespace dice { namespace hfe { namespace tool {
extern int fn_6a7190(void* a, void* b);
struct OTA { unsigned char _pad[0x10]; char m_10; };
void showLayer_0x6a7200(OTA* self, void* arg2) {
    int i = fn_6a7190(self, arg2);
    if (i >= 0)
        *(char*)((char*)self + (long)i * 16 + 0x10) = 0;
}
} } }
