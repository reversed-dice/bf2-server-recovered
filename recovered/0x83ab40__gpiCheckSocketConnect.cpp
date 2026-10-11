// FUNCTION: BF2 0x83ab40
extern int fn_83f0d0(int, int, int*, int*);
extern void gpiSetError(void*, int, char const*);
extern void gpiCallErrorCallback(void*, int, int);

int fn_83ab40(void* gp, int sock, int* state)
{
    int b = 0;
    int a = 0;
    int r = fn_83f0d0(sock, 0, &b, &a);
    if (r == -1) {
        gpiSetError(gp, 5, "There was an error checking for a completed connection.");
        gpiCallErrorCallback(gp, 3, 1);
        return 3;
    }
    if (r > 0) {
        if (a != 0) {
            *state = 4;
            return 0;
        }
        if (b != 0) {
            *state = 3;
            return 0;
        }
    }
    *state = 0;
    return 0;
}
