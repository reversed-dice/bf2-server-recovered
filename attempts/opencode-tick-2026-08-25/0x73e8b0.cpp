extern "C" char eq2(void*, void*);
extern "C" char eq3(void*, void*);
extern "C" int dice_hfe_MD5String_operator_ne(void* a, void* b) {
    return (eq2(a, b) || eq3(a, b)) ? 1 : 0;
}
