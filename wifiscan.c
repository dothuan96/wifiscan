#include <stdio.h>
#include <string.h>
#define SIZE 100

void read_data(void)
{
	FILE *fp;
	char data[SIZE];
	char *stt;
	int i;

	printf("Wifi data will be processed\n");
	fp = fopen("scan.txt", "r");

	if(fp==NULL)
		printf("Cannot open a file scan.txt.\n");
	else
	{
		i=0;
		for(stt = fgets(data, SIZE, fp); stt != 0; stt = fgets(data, SIZE, fp))
		{
			if(data[strlen(data)-1] == '\n')
				data[strlen(data)-1] = '\0';
			printf("%s\n", data);
			i++;

			if(i==3)
			{
				printf("\n");
				i=0;
			}
		}
	}
	fclose(fp);
}
