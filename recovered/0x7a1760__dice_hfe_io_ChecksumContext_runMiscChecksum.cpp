// FUNCTION: BF2 0x7a1760
// BF2_FLAGS: -fno-strict-aliasing
#include <string.h>
#include <string>

class FileManager;

extern "C" {
    extern void* dice_hfe_g_system;
    extern FileManager* dice_hfe_io_fileManager;
}

struct MD5_CTX {
    unsigned int state[4];
    unsigned int count[2];
    unsigned char buffer[64];
};

extern "C" void MD5Init(MD5_CTX*);
extern "C" void MD5Update(MD5_CTX*, const unsigned char*, unsigned int);
extern "C" void MD5Final(unsigned char*, MD5_CTX*);

class FileManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void* open(const std::string& name, int a, int b, int c);
};

void runMiscChecksum(void* self)
{
    typedef void (*VoidFn)(void*);

    ((VoidFn)(*(void***)dice_hfe_g_system)[0x38 / 8])(dice_hfe_g_system);

    char buf[0x4000];
    MD5_CTX ctx;
    const char* names[5] = { (const char*)0xba82a1, (const char*)0xb346b4, (const char*)0xb34847, (const char*)0xb3483e, 0 };

    memset(&ctx, 0, sizeof(ctx));
    MD5Init(&ctx);

    for (const char** p = names; *p; ++p) {
        void* ar = dice_hfe_io_fileManager->open(std::string(*p), 2, 0, 0);
        if (ar) {
            while (((int(*)(void*))(*(void***)ar)[0x38 / 8])(ar)) {
                int n = ((int(*)(void*, void*, int))(*(void***)ar)[0x20 / 8])(ar, buf, 0x4000);
                if (n)
                    MD5Update(&ctx, (unsigned char*)buf, (unsigned int)n);
            }
            ((void(*)(void*))(*(void***)ar)[0x10 / 8])(ar);
        }
    }

    MD5Final((unsigned char*)self + 4, &ctx);

    ((VoidFn)(*(void***)dice_hfe_g_system)[0x38 / 8])(dice_hfe_g_system);
}
