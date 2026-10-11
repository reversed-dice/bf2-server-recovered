// FUNCTION: BF2 0x813f00
extern void* gsirealloc(void*, unsigned long);
extern void* gsimalloc(unsigned long);
extern unsigned long strlen(char const*);
extern char* strcpy(char*, char const*);

struct Params {
    char _pad[0x40];
    char** list;
    int count;
};

int fn_813f00(char const* name, Params* p)
{
    char** newList = (char**)gsirealloc(p->list, (p->count + 1) * sizeof(char*));
    if (newList == 0)
        return 0;
    p->list = newList;
    char* copy = (char*)gsimalloc(strlen(name) + 1);
    if (copy == 0)
        return 0;
    strcpy(copy, name);
    p->list[p->count++] = copy;
    return 1;
}
