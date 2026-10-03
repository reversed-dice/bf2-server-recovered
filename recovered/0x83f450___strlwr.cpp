// FUNCTION: BF2 0x83f450
extern "C" {
extern int** __ctype_tolower_loc(void);
extern int** __ctype_toupper_loc(void);

char* strlwr(char* param_1) {
    char c = *param_1;
    if (c == 0) return param_1;
    int** tbl = __ctype_tolower_loc();
    char* p = param_1;
    do {
        *p = (char)((*tbl)[c]);
        p++;
        c = *p;
    } while (c != 0);
    return param_1;
}

char* strupr(char* param_1) {
    char c = *param_1;
    if (c == 0) return param_1;
    int** tbl = __ctype_toupper_loc();
    char* p = param_1;
    do {
        *p = (char)((*tbl)[c]);
        p++;
        c = *p;
    } while (c != 0);
    return param_1;
}
}
