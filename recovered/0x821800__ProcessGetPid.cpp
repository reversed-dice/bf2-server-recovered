// FUNCTION: BF2 0x821800
extern "C" long __strtol_internal(const char* nptr, char** endptr, int base, int group);

struct serverreq_t
{
    int pad0[2];
    int profileid;
};

extern "C" char* value_for_key_safe(const char* s, const char* key);
extern "C" int FindRequest(int reqtype, int localid, int profileid);
extern "C" void* ArrayNth(void* array, int index);
extern "C" void CallReqCallback(int reqindex, int success, int modified, char* data, int length);
extern void* serverreqs;

void ProcessGetPid(const char* buf, int len)
{
    int reqindex;
    int pid;
    int lid;

    pid = (int)__strtol_internal(value_for_key_safe(buf, "getpidr"), 0, 10, 0);
    lid = (int)__strtol_internal(value_for_key_safe(buf, "lid"), 0, 10, 0);
    reqindex = FindRequest(3, lid, 0);
    if (reqindex == -1)
        return;
    ((serverreq_t*)ArrayNth(serverreqs, reqindex))->profileid = pid;
    CallReqCallback(reqindex, (pid > 0), 0, 0, 0);
}
