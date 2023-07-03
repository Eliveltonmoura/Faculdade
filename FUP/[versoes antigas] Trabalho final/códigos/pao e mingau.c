#include<stdio.h>

int main() {
	
	int manda_audio, para_de_mandar_audio; 
	
	scanf("%d", & manda_audio);
	scanf("%d", & para_de_mandar_audio);
	
	while(manda_audio != para_de_mandar_audio) {
		
		manda_audio++;
		printf("manda audio ");
		
	}
	
	if(manda_audio == para_de_mandar_audio) printf("\npara de mandar audio");
	
	return(0);
	
}
