// FUNCTION: BF2 0x81cbd0
extern "C" void gsifree(void *ptr);

struct ptaFilePlanetInfoData {
	int fileID;                                             // 0x0
	void (*callback)(int, int, const char *, const char *, int, const char **, const char **, void *); // 0x8
	void *param;                                            // 0x10
};

void ptaCallFilePlanetInfoCallback(ptaFilePlanetInfoData * data, int found, const char * description, const char * size, int numMirrors, char ** mirrorNames, char ** mirrorURLs)
{
	int i;

	if(data->callback)
	{
		if (!found)
			data->callback(data->fileID, 0, 0, 0, 0, 0, 0, data->param);
		else
			data->callback(data->fileID, found, description, size, numMirrors, (const char **)mirrorNames, (const char **)mirrorURLs, data->param);
	}

	for(i = 0 ; i < numMirrors ; i++)
	{
		gsifree(mirrorNames[i]);
		gsifree(mirrorURLs[i]);
	}

	gsifree(data);
}
