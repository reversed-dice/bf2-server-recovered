// FUNCTION: BF2 0x6ff650
extern "C" bool fn_6ff600(void* self);
extern "C" int  fn_6ff5e0(void* self, int sx, int sy);

extern "C" void* getHeightmapInSector_6ff650(void* self, int sx, int sy)
{
    void* r = 0;
    if (fn_6ff600(self)) {
        int idx = fn_6ff5e0(self, sx, sy);
        void* t = ((void**)*(void**)((char*)self + 0x30))[idx];
        if (t != 0) r = t;
    }
    return r;
}
// REVERSED_FUNCTION: dice_hfe_world_HeightmapCluster_getHeightmapInSector_int_int_const (0x6ff650)
