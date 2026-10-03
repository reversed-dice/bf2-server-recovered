// FUNCTION: BF2 0x83f400
extern unsigned long fn_407878(const char*);
extern void* fn_83eef0(unsigned long);
extern char* fn_407978(char*, const char*);
char* goastrdup_0x83f400(char* s) {
    char* r = 0;
    if (s) {
        unsigned long n = fn_407878(s);
        r = (char*)fn_83eef0(n + 1);
        if (r)
            fn_407978(r, s);
    }
    return r;
}
