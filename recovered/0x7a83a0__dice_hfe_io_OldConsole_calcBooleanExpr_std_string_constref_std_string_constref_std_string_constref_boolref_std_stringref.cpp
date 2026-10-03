// FUNCTION: BF2 0x7a83a0
extern "C" char expr_7b76e0(void* a, void* b, void* c, void* d);

extern "C" bool calcBooleanExpr_7a83a0(void* self, void* p2, void* p3, void* p4, char* p5, void** p6)
{
    char u = expr_7b76e0(p2, p3, p4, p6);
    *p5 = u;
    return *(void**)((char*)*p6 - 0x18) == 0;
}
