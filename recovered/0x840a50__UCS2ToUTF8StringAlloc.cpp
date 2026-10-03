// FUNCTION: BF2 0x840a50
// UCS2ToUTF8StringAlloc: allocate and convert UCS2 to UTF8
extern "C" {
    int _UCS2ToUTF8ConversionLengthOnly(const void* src);
    void* gsimalloc(long size);
    void UCS2ToUTF8String(const void* src, void* dst);
}

void* UCS2ToUTF8StringAlloc(const void* src) {
    void* result = 0;
    if (src != 0) {
        int len = _UCS2ToUTF8ConversionLengthOnly(src);
        result = gsimalloc((long)(len + 1));
        UCS2ToUTF8String(src, result);
    }
    return result;
}
