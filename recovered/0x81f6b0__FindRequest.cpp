// FUNCTION: BF2 0x81f6b0
extern void* serverreqs;
extern int fn_83af50(void*);
extern void* fn_83ad40(void*, int);

int fn_81f6b0(int a, int b, int c)
{
    int i = 0;
    if (serverreqs != 0) {
        while (i < fn_83af50(serverreqs)) {
            int* e = (int*)fn_83ad40(serverreqs, i);
            if (e[0] == a && e[1] == b && e[2] == c)
                return i;
            i++;
        }
    }
    return -1;
}
