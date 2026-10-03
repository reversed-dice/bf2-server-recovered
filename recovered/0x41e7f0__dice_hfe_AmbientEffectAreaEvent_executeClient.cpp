// FUNCTION: BF2 0x41e7f0
extern "C" {
extern long dice_hfe_io_networkManager;
long dice_hfe_io_NetworkManager_getObject(long mgr, unsigned short id, long a3, int a4);
void dice_hfe_world_AmbientEffectArea_playEffect(long area, long vec, unsigned char flag, long obj);
}

long executeClient(long self, long a2, long a3) {
    long area = *(long*)(self + 0x28);
    if (area == 0) return 1;
    long obj = 0;
    unsigned short id = *(unsigned short*)(self + 0x22);
    if (id != 0) {
        long mgr = *(long*)0x010aebe8;
        obj = dice_hfe_io_NetworkManager_getObject(mgr, id, a3, 0);
        area = *(long*)(self + 0x28);
    }
    unsigned char flag = *(unsigned char*)(self + 0x20);
    dice_hfe_world_AmbientEffectArea_playEffect(area, self + 0x10, flag, obj);
    return 1;
}