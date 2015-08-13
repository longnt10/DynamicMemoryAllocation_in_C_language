#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MemoryManager.h"
#define MAX_CHARAC_DESC	80
#define MAX_CHARAC_SERIALNUMBER	15
#define MAX_CHARAC_CONTRACTNUMBER	10
#define MAX_CHARAC_CODE	15
#define MAX_CHARAC_NAME_ADDRESS	50

typedef struct
{
	char description[80];
	int  appliancePrice;
	int  insurancePolicy;
	char serialNumber[15];
	char contractNumber[10];
} tCon;
{
	tCon *pContract;
	int  nCurrentContract;
} tContract;
{
	char name[50];
	char lastName[50];
	char address[50];
	char code[15]; // Customer personal code
	tContract custContract;
} tCustomer;