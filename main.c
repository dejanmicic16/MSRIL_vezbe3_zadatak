include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


char getTaster()
	{
	FILE *fp;
	char *str;
	char tval1,tval2,tval3,tval4;
	size_t num_of_bytes = 6;

	fp = fopen ("/dev/button", "r");
	if(fp==NULL)
	 {
		puts("Problem pri otvaranju /dev/button");
		return -1;
	 }
	str = (char *)malloc(num_of_bytes+1);
	getline(&str, &num_of_bytes, fp);
	if(fclose(fp))
	{
		puts("Problem pri zatvaranju /dev/button");
		return -1;
	}
	tval1 = str[2] - 48;
	tval2 = str[3] - 48;
	free(str);
	if(tvall)
	{
		return 1;
	}
	else if(tval2)
	{
		return 0; 
	}
	else
	{
		return -1;
	}
	sleep(1);
	}

	void Dioda(int procenat)
	{
		long int period = 20000L;
		FILE* fp;
		fp = fopen("/dev/led", "w");
		fputs("0x0F\n", fp);
		fclose(fp);
		usleep(procenat*period);
		fp = fopen("/dev/led", "w");
		fputs("0x00\n", fp);               
		fclose(fp);
		usleep((1-procenat)*period);

	}	


int main ()
	{
	float percentage = 0;
	while(1)		{
		
		taster = getTaster();
		if(taster)
		{
			percentage + 0.1;  
		}
		else if(taster == 0)
		{
			percentage - 0.1;
		}	
		if(percentage = 1.1)
		{
			percentage = 0;
		}
		if(percetage = -0.1)
		{
			percentage = 1; 
		}
		Dioda(percentage);
	    }
	}	
