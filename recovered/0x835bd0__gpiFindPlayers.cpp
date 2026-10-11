// FUNCTION: BF2 0x835bd0
extern int fn_835470(void*, void**, int);
extern int fn_835570(void*, void*, int, void*, void*);

int fn_835bd0(void* gp, int a2, int a3, void* a4, void* a5)
{
    void* p;
    int res = fn_835470(gp, &p, 4);
    if (res == 0) {
        *(int*)((char*)p + 0x148) = a2;
        int r2 = fn_835570(gp, p, a3, a4, a5);
        if (r2 != 0)
            res = r2;
    }
    return res;
}
