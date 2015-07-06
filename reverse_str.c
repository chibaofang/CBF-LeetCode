#include<stdio.h>

int main(){
	int c;
	char string[1000];
	string[0] = '\0';  //?
	int i = 1;

	while((c = getchar())!= EOF){
		if(c != '\n'){
			string[i++] = c;
		}else{
			for(int j=i-1; j>=0; j--){
				if(c!='\0'){
					printf("%c",string[j]);
				}
			}
			
			putchar('\0');
			i = 1;
		}
	}
	
	return 0;
}
