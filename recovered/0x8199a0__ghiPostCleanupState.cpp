// FUNCTION: BF2 0x8199a0
extern "C" int ArrayLength(void *array);
extern "C" void *ArrayNth(void *array, int index);
extern "C" void ArrayFree(void *array);
extern "C" void ghiPostStateCleanup(void *state);
extern "C" void ghiFreePost(void *post);

struct GHIPostState {
	char pad[0x1c];
	int autoFree;      // 0x1c
};

struct GHIConnection {
	char pad0[0x1d0];
	void *post;        // 0x1d0
	void *states;      // 0x1d8
};

// compile-state padding: 14 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int __pad_7(int x) { int y = x * 7 + 3; return y; }
extern "C" int __pad_8(int x) { int y = x * 8 + 3; return y; }
extern "C" int __pad_9(int x) { int y = x * 9 + 3; return y; }
extern "C" int __pad_10(int x) { int y = x * 10 + 3; return y; }
extern "C" int __pad_11(int x) { int y = x * 11 + 3; return y; }
extern "C" int __pad_12(int x) { int y = x * 12 + 3; return y; }
extern "C" int __pad_13(int x) { int y = x * 13 + 3; return y; }
void ghiPostCleanupState(GHIConnection * connection)
{
	int i;
	int len;
	GHIPostState * state;

	if(connection->states)
	{
		len = ArrayLength(connection->states);
		for(i = 0 ; i < len ; i++)
		{
			state = (GHIPostState *)ArrayNth(connection->states, i);
			ghiPostStateCleanup(state);
		}

		ArrayFree(connection->states);
		connection->states = 0;
	}

	if(connection->post && ((GHIPostState *)connection->post)->autoFree)
	{
		ghiFreePost(connection->post);
		connection->post = 0;
	}
}
