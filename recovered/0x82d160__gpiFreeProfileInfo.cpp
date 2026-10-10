// FUNCTION: BF2 0x82d160
struct Profile { char pad[0x28]; void* f28; };
extern "C" {
void gpiFreeInfoCache(Profile*);
void gsifree(void*);
int gpiCanFreeProfile(Profile*);
void gpiRemoveProfile(void*, Profile*);
}

int gpiFreeProfileInfo(void* a, Profile* p) {
    gpiFreeInfoCache(p);
    gsifree(p->f28);
    p->f28 = 0;
    int r = 1;
    if (gpiCanFreeProfile(p)) {
        gpiRemoveProfile(a, p);
        r = 0;
    }
    return r;
}
