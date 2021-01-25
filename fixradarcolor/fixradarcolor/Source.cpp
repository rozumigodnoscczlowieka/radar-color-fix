#include "source.h"


void mainThread(char * args)
{
	while (true)
	{
		*reinterpret_cast<byte *>(0x58A9A2) = 255;
		*reinterpret_cast<byte *>(0x58A99A) = 255;
		*reinterpret_cast<byte *>(0x58A996) = 255;
		*reinterpret_cast<byte *>(0x58A8EE) = 255;
		*reinterpret_cast<byte *>(0x58A8E6) = 255;
		*reinterpret_cast<byte *>(0x58A8DE) = 255;
		*reinterpret_cast<byte *>(0x58A89A) = 255;
		*reinterpret_cast<byte *>(0x58A896) = 255;
		*reinterpret_cast<byte *>(0x58A894) = 255;
		*reinterpret_cast<byte *>(0x58A798) = 255;
		*reinterpret_cast<byte *>(0x58A790) = 255;
		*reinterpret_cast<byte *>(0x58A78E) = 255;

		Sleep(50);
	}
}




class Plugin
{
public:
	Plugin()
	{

		CreateThread(NULL, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(mainThread), NULL, 0, 0);

	}
	~Plugin()
	{
	}
} Plugin;