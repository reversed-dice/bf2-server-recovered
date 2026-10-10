// FUNCTION: BF2 0x8272c0
extern "C" {
int ArrayLength(void*);
void* ArrayNth(void*, int);
void ArrayFree(void*);
void SBReleaseStr(void*, char*);
}

struct KeyList { char pad[0x10]; void* keys; };

void FreeKeyList(KeyList* t) {
    if (t->keys != 0) {
        for (int i = 0; i < ArrayLength(t->keys); i++)
            SBReleaseStr(t, *(char**)ArrayNth(t->keys, i));
        ArrayFree(t->keys);
        t->keys = 0;
    }
}
