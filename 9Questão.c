#include<stdio.h>

int main(){
	
	int qt_linhas, cont;
	scanf("%i", &qt_linhas);
	
	if(0 < qt_linhas && qt_linhas < 20){
		for (cont = 0; cont<qt_linhas; cont++){
		
		
		
		char palavra[10000];
		
		getchar();
		scanf("%[^\n]", palavra);
		
		int atual=0,n=0,l=0,maior=0;
		
		while(palavra[atual]!='\0'){
			if(palavra[atual]=='n'){
				n++;
				if(l>0){
					l--;
				}
			}
			else if(palavra[atual]=='l'){
				if(palavra[atual+1]=='n'){
					n-=l;	
				}
				if(palavra[atual+1]=='l'){
					l++;	
				}	
			}
			if(n>maior){
				maior=n;
			}
			atual++;
		}
		printf("%i",maior);		
		}
	}
	return 0;	
}
