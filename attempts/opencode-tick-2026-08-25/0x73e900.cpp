extern "C" char eq2(void*, void*);
extern "C" char eq3b(void*, void*);
extern "C" int dice_hfe_MD5String_operator_ne2(void* a, void* b) {
    if (eq2(a, b) == 0) {
        if (eq3b(a, b) == 0) return 0;
    }
    return 1;
}
