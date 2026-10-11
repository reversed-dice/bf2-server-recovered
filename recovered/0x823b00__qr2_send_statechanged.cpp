// FUNCTION: BF2 0x823b00
extern "C" unsigned int current_time(...);
extern "C" int send_heartbeat(void* rec, int flag);
extern "C" void* current_rec;

struct Rec { char pad0[0xd0]; int f_d0; int f_d4; int f_d8; int f_dc; int f_e0; };

extern "C" void qr2_send_statechanged(Rec* rec)
{
    if (rec == 0) rec = (Rec*)current_rec;
    if (rec->f_e0 == 0) return;
    if (current_time() - rec->f_d0 > 9999) {
        send_heartbeat(rec, 1);
        rec->f_d8 = 0;
    } else {
        rec->f_d8 = 1;
    }
}
