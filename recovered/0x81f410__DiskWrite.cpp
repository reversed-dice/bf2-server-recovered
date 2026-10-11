// FUNCTION: BF2 0x81f410
extern "C" void* fopen(const char* path, const char* mode);
extern "C" unsigned long fwrite(const void* ptr, unsigned long size, unsigned long n, void* f);
extern "C" int fclose(void* f);
extern "C" int g_crc32(const char* data, int len);
extern "C" void xcode_buf(char* buf, int len);

extern char statsfile[280];
extern char enc2[16];
extern char* enc;

void DiskWrite(char* line, int len)
{
    void* f;
    int check;
    int temp;
    char filemode[3];

    filemode[0] = 'a'; filemode[1] = 'b'; filemode[2] = 0;
    f = fopen(statsfile, filemode);
    if (!f)
        return;
    check = g_crc32(line, len);
    fwrite(&check, sizeof(check), 1, f);
    temp = len ^ 0x70f33a5f;
    fwrite(&temp, sizeof(temp), 1, f);
    enc = enc2;
    xcode_buf(line, len);
    fwrite(line, 1, len, f);
    fclose(f);
}
