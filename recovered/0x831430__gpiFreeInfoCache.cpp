// FUNCTION: BF2 0x831430
// gpiFreeInfoCache
extern "C" void gsifree(void*);

struct GPIInfoCache {
    void* f00;      // +0x00
    void* f08;      // +0x08
    void* f10;      // +0x10
    void* f18;      // +0x18
    void* f20;      // +0x20
    void* f28;      // +0x28
    unsigned char pad[0xe0 - 0x30];
    void* fe0;      // +0xe0
};

struct GPICacheHolder {
    unsigned char pad[0x10];
    GPIInfoCache* m_cache;   // +0x10
};

void gpiFreeInfoCache(GPICacheHolder* h) {
    if (!h->m_cache)
        return;
    gsifree(h->m_cache->f00);
    h->m_cache->f00 = 0;
    gsifree(h->m_cache->f08);
    h->m_cache->f08 = 0;
    gsifree(h->m_cache->f10);
    h->m_cache->f10 = 0;
    gsifree(h->m_cache->f18);
    h->m_cache->f18 = 0;
    gsifree(h->m_cache->f20);
    h->m_cache->f20 = 0;
    gsifree(h->m_cache->f28);
    h->m_cache->f28 = 0;
    gsifree(h->m_cache->fe0);
    h->m_cache->fe0 = 0;
    gsifree(h->m_cache);
    h->m_cache = 0;
}
