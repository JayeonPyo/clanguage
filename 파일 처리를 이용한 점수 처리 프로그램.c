#include <stdio.h>
#include <string.h>

#define MAXN 101

struct Data {
	char num[5];
	char score[12];

};


struct Data datas[MAXN];


void main(){
	FILE *input, *output;
	char *f_name = "Mid.txt";
	char *out_name = "result.txt";
	


	input = fopen(f_name, "r");
	output = fopen(out_name, "w");
	if (input == NULL){
		printf("%s 파일 열기 에러! \n", f_name); 
	}

	struct Data datas[100];
    int disize = 0;

	//파일에서 읽어오기
	while (fscanf(input,"%s %s", datas[disize].num, datas[disize].score) != EOF){


		int s = 0;
		


		for (int i = 0; i < 10; i++){
			if (datas[disize].score[i] == '1'){
				s += 10;


			}

		}
		fprintf(output, "%s %d\n", datas[disize].num, s);
		
		
		++disize;

	

	}
	fclose(input);
	fclose(output);
}
