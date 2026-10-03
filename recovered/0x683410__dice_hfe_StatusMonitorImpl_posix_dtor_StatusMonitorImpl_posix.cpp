// FUNCTION: BF2 0x683410
// dice::hfe::StatusMonitorImpl_posix::~StatusMonitorImpl_posix() -- 0x683410
//
// Tears down the curses window when one is open (delwin + endwin), clears the
// module-local singleton pointer at 0x01092c00, then tail-calls the base
// destructor. 0x683410 and 0x683450 are byte-identical D1/D2 variants of the
// same body, so they share one reconstruction.
//
// The window pointer at +0x18 is passed to delwin: without that hidden
// argument the guard block collapses and the candidate stalls at 73.7%.

extern "C" void delwin(void*);
extern "C" void endwin(void);
extern "C" void StatusMonitorImpl_dtor(void*);
extern "C" void* anonymous_namespace_posix_impl;   // 0x01092c00

void dtor(void* self)
{
    *(void**)self = (void*)0xb8c8d0;
    void* win = *(void**)((char*)self + 0x18);
    if (win != 0) {
        delwin(win);
        endwin();
    }
    anonymous_namespace_posix_impl = 0;
    StatusMonitorImpl_dtor(self);
}
// REVERSED_FUNCTION: dice_hfe_StatusMonitorImpl_posix_dtor_StatusMonitorImpl_posix (0x683410)
