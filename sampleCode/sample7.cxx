#include <stdio.h>
#include <string.h>
int main() {
	char filename [100];
	char buff [500];
	char token [1024], *str1, *str2;
	int count = 0, c;
	FILE *fd;
	
	sprintf(filename , "test.txt");
	if((fd = fopen(filename, "r"))!= NULL) {
		while ((str1 = fgets(buff, 500, fd))!= NULL){
			for(c = 0; *str1 !='\n' && *str1 !='\0'; str1 = str2+1, c++) {
				if((str2 = strchr(str1, ','))!= NULL||
				   (str2 = strchr(str1, '\0'))!= NULL||
				   (str2 = strchr(str1, '\n'))!= NULL||
				   (str2 = strchr(str1, '.'))!= NULL) {
					memmove(token, str1, str2-str1);
					token [str2-str1] = '\0';
					if(strstr(token,"apple")!=NULL)
					count++;	
				}
			}
		}
	}	
	fclose(fd);
	printf("\nNumber of apple -> %d", count);
	return 0;
}
