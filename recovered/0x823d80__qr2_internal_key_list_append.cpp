// FUNCTION: BF2 0x823d80
extern "C" void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((__noreturn__));
extern "C" void * gsimalloc(unsigned long size);

typedef struct QR2KeyListNodeS
{
	char* mKeyData;
	struct QR2KeyListNodeS*	mNextKey;
} QR2KeyListNode;

typedef struct QR2KeyListS
{
	struct QR2KeyListNodeS* mHead;
} QR2KeyList;

extern QR2KeyList qr2_internal_key_list;

extern "C" void qr2_internal_key_list_append(char* theKey)
{
	QR2KeyListNode* aNewNode;

	if (!(theKey != 0)) {
		__assert_fail("theKey != ((void *)0)", "External/GameSpy/qr2/qr2regkeys.c", 69, __PRETTY_FUNCTION__);
	}

	// Init the new node
	aNewNode = (QR2KeyListNode*)gsimalloc(sizeof(QR2KeyListNode));
	aNewNode->mKeyData = theKey;
	aNewNode->mNextKey = 0;

	// Check for a NULL head
	if (qr2_internal_key_list.mHead == 0)
		qr2_internal_key_list.mHead = aNewNode;
	else
	{
		// Find the end of the list and append this node
		QR2KeyListNode* aInsertPlace = qr2_internal_key_list.mHead;
		while(aInsertPlace->mNextKey != 0)
			aInsertPlace = aInsertPlace->mNextKey;

		aInsertPlace->mNextKey = aNewNode;
	}
}
