// FUNCTION: BF2 0x569f40
// UAVVehicle_destroyUAVVehicle
extern "C" void _ZN9dice_hfe18UAVVehicleManager19removeUAVVehicle_intEl(long, int);
void UAVVehicle_destroyUAVVehicle(long self) {
    long inst = *(long*)0x0108f2a0;
    if (inst != 0) {
        if (*(long*)(inst + 8) == self) {
            _ZN9dice_hfe18UAVVehicleManager19removeUAVVehicle_intEl(inst, 1);
            inst = *(long*)0x0108f2a0;
        }
        if (self == *(long*)(inst + 0x10)) {
            _ZN9dice_hfe18UAVVehicleManager19removeUAVVehicle_intEl(inst, 2);
        }
    }
}
