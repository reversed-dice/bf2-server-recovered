// FUNCTION: BF2 0x74b7e0
// BF2_FLAGS: -fno-tree-dominator-opts
#include <string.h>

static int strcmpcasenosensitive_internal(const char* fileName1, const char* fileName2)
{
    for (;;) {
        char c1 = *(fileName1++);
        char c2 = *(fileName2++);
        if ((c1 >= 'a') && (c1 <= 'z')) c1 -= 0x20;
        if ((c2 >= 'a') && (c2 <= 'z')) c2 -= 0x20;
        if (c1 == '\0') {
            if (c2 == '\0') return 0;
            goto neg;
        }
        if (c2 == '\0') return 1;
        if (c1 < c2) goto neg;
        if (c1 > c2) return 1;
    }
neg:
    return -1;
}

int unzStringFileNameCompare(const char* fileName1, const char* fileName2, int iCaseSensitivity)
{
    if (iCaseSensitivity == 0)
        iCaseSensitivity = 2;
    if (iCaseSensitivity == 1)
        return strcmp(fileName1, fileName2);
    return strcmpcasenosensitive_internal(fileName1, fileName2);
}
