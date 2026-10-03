// FUNCTION: BF2 0x4f7b70
#include <string>
namespace dice { namespace hfe { namespace python {
extern int fn_4f8da0(void*, int, std::string*);
extern int fn_4f8b30(void*, int, int*);
extern void* dice_hfe_gameLogic;
extern void* dice_hfe_world_scoreManager;
extern void PyErr_SetString(void*, const char*);
extern void* PyExc_RuntimeError;
extern int string_compare(const std::string*, const char*);
extern void* PyInt_FromLong(long);
extern void* PyFloat_FromDouble(double);
extern void* PyString_FromString(const char*);
extern unsigned int dice_hfe_ServerGameLogic_getNumberOfTickets_unsigned_int_const(void*, unsigned int);
extern int dice_hfe_ServerGameLogic_getTicketLimit_unsigned_int_int(void*, unsigned int, int);
extern float dice_hfe_ServerGameLogic_getTicketChangePerSecond_unsigned_int(void*, unsigned int);

void* cb_4f7b70(void* self, void* arg) {
    std::string name;
    void* r = 0;
    if (fn_4f8da0(arg, 0, &name) == 0) {
        int team, id;
        if (fn_4f8b30(arg, 1, &team) + fn_4f8b30(arg, 2, &id) == 0) {
            void* gl = dice_hfe_gameLogic;
            if (string_compare(&name, "tickets") == 0) {
                r = PyInt_FromLong(dice_hfe_ServerGameLogic_getNumberOfTickets_unsigned_int_const(gl, team));
            } else if (string_compare(&name, "startTickets") == 0) {
                typedef unsigned int (*fn_t)(void*, unsigned int);
                r = PyInt_FromLong((*(fn_t*)((char*)*(void**)gl + 0x130))(gl, team));
            } else if (string_compare(&name, "ticketLimit") == 0) {
                r = PyInt_FromLong(dice_hfe_ServerGameLogic_getTicketLimit_unsigned_int_int(gl, team, id));
            } else if (string_compare(&name, "ticketState") == 0) {
                typedef int (*fn_t)(void*, unsigned int);
                r = PyInt_FromLong((*(fn_t*)((char*)*(void**)gl + 0x120))(gl, team));
            } else if (string_compare(&name, "ticketChangePerSecond") == 0) {
                r = PyFloat_FromDouble((double)(float)dice_hfe_ServerGameLogic_getTicketChangePerSecond_unsigned_int(gl, team));
            } else if (string_compare(&name, "defaultTicketLossPerMin") == 0) {
                typedef float (*fn_t)(void*, unsigned int);
                r = PyFloat_FromDouble((double)(*(fn_t*)((char*)*(void**)gl + 0x170))(gl, team));
            } else if (string_compare(&name, "defaultTicketLossAtEndPerMin") == 0) {
                typedef float (*fn_t)(void*);
                r = PyFloat_FromDouble((double)(*(fn_t*)((char*)*(void**)gl + 0x160))(gl));
            } else if (string_compare(&name, "teamName") == 0) {
                typedef void* (*fn_t)(void*, unsigned int);
                r = PyString_FromString(*(char**)(*(fn_t*)((char*)*(void**)gl + 0x90))(gl, team));
            } else if (string_compare(&name, "winner") == 0) {
                typedef unsigned char (*fn_t)(void*);
                r = PyInt_FromLong((*(fn_t*)((char*)*(void**)dice_hfe_world_scoreManager + 0x30))(dice_hfe_world_scoreManager));
            } else if (string_compare(&name, "victoryType") == 0) {
                typedef unsigned char (*fn_t)(void*);
                r = PyInt_FromLong((*(fn_t*)((char*)*(void**)dice_hfe_world_scoreManager + 0x48))(dice_hfe_world_scoreManager));
            } else {
                PyErr_SetString(PyExc_RuntimeError, "bad attribute");
            }
        } else {
            PyErr_SetString(PyExc_RuntimeError, "function needs team an id parameter");
        }
    }
    return r;
}
} } }
// REVERSED_FUNCTION: dice_hfe_python_sgl_getParam_objectptr_objectptr (0x4f7b70)
