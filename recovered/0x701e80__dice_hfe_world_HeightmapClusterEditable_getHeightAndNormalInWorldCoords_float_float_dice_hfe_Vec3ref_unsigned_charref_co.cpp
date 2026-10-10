// FUNCTION: BF2 0x701e80
extern "C" {
    float dice_hfe_world_HeightmapCluster_getHeightAndNormalInWorldCoords(
        void* self, float x, float z, void* normal, void* flag);
}
float getHANIWC(void* self, float x, float z, void* normal, void* flag) {
    if (*(char*)((char*)self + 0x45) != 0) {
        *(float*)normal = 0.0f;
        *(float*)((char*)normal + 4) = 1.0f;
        *(float*)((char*)normal + 8) = 0.0f;
        *(char*)flag = 0;
        return 0.0f;
    }
    return dice_hfe_world_HeightmapCluster_getHeightAndNormalInWorldCoords(
        (char*)self + 8, x, z, normal, flag);
}
