// FUNCTION: BF2 0x83b5b0
// ArrayClear: iterates array backwards and deletes each element
extern "C" {
    int ArrayLength(void* arr);
    void ArrayDeleteAt(void* arr, int index);
}

void ArrayClear(void* arr) {
    int len = ArrayLength(arr);
    len--;
    if (len >= 0) {
        do {
            ArrayDeleteAt(arr, len);
            len = (len - 1);
        } while (len != -1);
    }
}
