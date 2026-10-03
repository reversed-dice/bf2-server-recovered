// FUNCTION: BF2 0x824d20
// SBRefStrHashCleanup: check global, count, free if empty
extern "C" {
    int TableCount(void* table);
    void TableFree(void* table);
    extern long g_SBRefStrList;
}

void SBRefStrHashCleanup() {
    if (__builtin_expect(g_SBRefStrList != 0, 1)) {
        int count = TableCount((void*)g_SBRefStrList);
        if (count == 0) {
            TableFree((void*)g_SBRefStrList);
            g_SBRefStrList = 0;
        }
    }
}
