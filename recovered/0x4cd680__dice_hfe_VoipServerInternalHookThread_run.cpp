// FUNCTION: BF2 0x4cd680
// dice::hfe::VoipServerInternalHookThread::run() -- 0x4cd680
//
// Update loop under the mutex at +0x18: while the stop flag at +0x20 is clear,
// pump the voip server, publish state 1, sleep 10ms outside the lock, retake
// it and publish state 2.

extern "C" void mutexLock_4cd680(void*);
extern "C" void mutexUnlock_4cd680(void*);
extern "C" void voipUpdate_4cd680(void*);

typedef void (*FnSleep_4cd680)(void*, int);

extern "C" void run_4cd680(char* self)
{
    mutexLock_4cd680(*(void**)(self + 0x18));
    while (*(char*)(self + 0x20) == 0) {
        voipUpdate_4cd680(*(void**)(self + 0x28));
        *(int*)(self + 0x10) = 1;
        mutexUnlock_4cd680(*(void**)(self + 0x18));
        void* system = *(void**)0x010aa1a8;
        (*(FnSleep_4cd680*)(*(char**)system + 0x40))(system, 10);
        mutexLock_4cd680(*(void**)(self + 0x18));
        *(int*)(self + 0x10) = 2;
    }
    mutexUnlock_4cd680(*(void**)(self + 0x18));
}
// REVERSED_FUNCTION: dice_hfe_VoipServerInternalHookThread_run (0x4cd680)
