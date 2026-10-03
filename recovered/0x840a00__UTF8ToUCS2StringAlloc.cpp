// FUNCTION: BF2 0x840a00
// UTF8ToUCS2StringAlloc: allocate and convert UTF8 to UCS2
extern "C" {
    int _UTF8ToUCS2ConversionLengthOnly(const void* src);
    void* gsimalloc(long size);
    void UTF8ToUCS2String(const void* src, void* dst);
}

void* UTF8ToUCS2StringAlloc(const void* src) {
    void* result = 0;
    if (src != 0) {
        int len = _UTF8ToUCS2ConversionLengthOnly(src);
        len = len + 1;
        result = gsimalloc((long)len * 2);
        UTF8ToUCS2String(src, result);
    }
    return result;
}
