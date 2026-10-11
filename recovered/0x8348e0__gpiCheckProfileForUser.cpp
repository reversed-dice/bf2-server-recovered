// FUNCTION: BF2 0x8348e0
extern "C" {
int strcmp(const char*, const char*);
}

int gpiCheckProfileForUser(void* a, void* node, void* target)
{
    void* profile = *(void**)((char*)node + 0x10);
    if (profile)
    {
        if (strcmp(*(char**)((char*)target), *(char**)((char*)profile)) == 0)
        {
            if (strcmp(*(char**)((char*)target + 8),
                       *(char**)((char*)profile + 0x10)) == 0)
            {
                *(int*)((char*)target + 0x18) = 1;
                **(void***)((char*)target + 0x10) = node;
                return 0;
            }
        }
    }
    return 1;
}
