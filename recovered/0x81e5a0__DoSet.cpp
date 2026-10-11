// FUNCTION: BF2 0x81e5a0
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((noreturn));
extern "C" void gsifree(void *ptr);
extern "C" char *goastrdup(const char *str);

enum { bt_int = 0, bt_float = 1, bt_string = 2 };

struct bucket_t {
	char *name;                 // 0x0
	int type;                   // 0x8
	int pad0;                   // 0xc
	union { int ival; double fval; char *sval; } vals;  // 0x10
};

void *DoGet(bucket_t *pbucket);

static char *stripchars(char *s)
{
	char *p = s;
	while (*s)
	{
		if (*s == '\\')
			*s = '/';
		s++;
	}
	return p;
}

void *DoSet(bucket_t *pbucket, void *value)
{
	if (pbucket->type == bt_int)
		pbucket->vals.ival = *(int*)value;
	else if (pbucket->type == bt_float)
		pbucket->vals.fval = *(double *)value;
	else if (pbucket->type == bt_string)
	{
		if (pbucket->vals.sval != 0)
			gsifree(pbucket->vals.sval);
		pbucket->vals.sval = (value == 0 ? 0 : stripchars(goastrdup((char *)value)));
	}
	return DoGet(pbucket);
}
