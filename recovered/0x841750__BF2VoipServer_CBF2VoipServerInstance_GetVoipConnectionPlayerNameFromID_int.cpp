// FUNCTION: BF2 0x841750
extern bool fn_845ed0(void*);

struct VoipName {
    char _m[25];
};

struct NamesHolder {
    char _pad[0xbb0];
    VoipName names[0x40];
};

char* fn_841750(void* self, int id)
{
    if (!fn_845ed0((char*)self + 0x1288))
        return 0;
    if ((unsigned int)id > 0x3f) {
        if (id == 0xff || id == 0xffffffff)
            return (char*)self + 0x11f8;
        return 0;
    }
    NamesHolder* h = (NamesHolder*)((char*)self + 8);
    return (char*)&h->names[id];
}
