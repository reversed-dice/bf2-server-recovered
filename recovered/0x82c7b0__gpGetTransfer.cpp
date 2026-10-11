// FUNCTION: BF2 0x82c7b0
extern void gpiSetErrorString(void*, char const*);
extern int fn_838470(void*, int, int*);

int fn_82c7b0(void* gp, int index, int* out)
{
    if (gp == 0)
        return 2;
    if (*(void**)gp == 0)
        return 2;
    if (out == 0) {
        gpiSetErrorString(gp, "NULL pointer.");
        return 2;
    }
    int id = fn_838470(gp, index, out);
    if (id == -1) {
        gpiSetErrorString(gp, "Index out of range.");
        return 2;
    }
    *out = id;
    return 0;
}
