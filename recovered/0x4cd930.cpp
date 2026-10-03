extern "C" char fn_4cd7f0(void*);

extern "C" int votingEnabled_4cd930(void* self)
{
    if (fn_4cd7f0(self) && *(char*)self) {
        return 1;
    }
    return 0;
}
