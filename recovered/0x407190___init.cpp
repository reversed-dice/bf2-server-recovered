// FUNCTION: BF2 0x407190
// _init at 0x407190
extern "C" void call_gmon_start(void);
extern "C" void frame_dummy(void);
extern "C" int __do_global_ctors_aux(void);

int _init() {
    call_gmon_start();
    frame_dummy();
    __typeof__(__do_global_ctors_aux()) __perm_t = __do_global_ctors_aux();
    int __perm_pad6 = 6; (void)__perm_pad6;
    return __perm_t;
}

