#include<stdio.h>
#include<string.h>

/*int strlen(char entrada[156]){
	int total=0;							//Fun��o para contagem de caracteres
	
	while(entrada[total] != '\0'){
		total++;
	}
	return total;
} */

int main(){
	int i, j, letras;			//contadores
	char entrada[156], comparar; //varias char de entrada e outra que compara valores 
	int copas=0, totalcopas=13; //variaveis para as opera�oes do naipe de copas
	int espada=0, totalespada=13;	//variaveis para as operacoes do naipe de espadas
	int ouro=0, totalouro=13;		//variaveis para as operacoes do naipe de ouro
	int paus=0, totalpaus=13;		//variaveis para as operacoes do naipe de ouro
	int  restricaocopas[13], restricaoespada[13], restricaoouro[13], restricaopaus[13], parar=0; 			
	//variaveis para restringir repeticoes
	
	scanf("%s", entrada);
	
	letras= strlen(entrada);
	printf("%d",letras);
	//letras = strlen(entrada);		//variavel com o total de entrada de caracteres

	if(letras%3==0){
		
		for(i=1;i<=letras;i++){
		
			comparar = entrada[i-1];        //Adiciona o caracter na variavel para fazer a compara�a� dentro das estruras de condi��o
			
			if(i%3==1 && comparar=='0'){	//Codi��o para entrada quando os primeiros algarismo s�o 0
				if(entrada[i+1]=='c'||entrada[i+1]=='C'){   //Condi��o para verificar se o "terceiro" caracter � copas
					copas+=1;
					
					for(j=1;j<10;j++){				//estrutura de repeti��o para contar os algarismo de 1 a 9
						
						if((int)entrada[i]-48==j){	//codicional que verifica o valor do "segundo" caracter entrado
							if(restricaocopas[j]!=j){		//condicao de restri��o. caso n�o seja verdadeiro houve a entrada de um numero repetido. Linha 43
								totalcopas-=1;
								restricaocopas[j]=j;
								
							}else{
								parar=1;
							}
						}
					}
				}	
			}else{							//Codi��o para entrada quando os primeiros algarismo s�o 1. Ctrl C+ Ctrl V na condicional de cima
				if(i%3==1 && comparar=='1'){
					if(entrada[i+1]=='c'||entrada[i+1]=='C'){   //Condi��o para verificar se o "terceiro" caracter � copas
						
						copas+=1;
						
						for(j=10;j<14;j++){			//contador come�a do 10 pois deve se diferenciar do J, para n�o ocorrer a resti��o
													//se fosse igual a 1, ele iria restrigir quando digitado 01 e em seguida 11
							if((int)entrada[i]-48==j-10){   //-10 para poder igualar a entrada do "terceiro" caractere
								if(restricaocopas[j]!=j){
									totalcopas-=1;
									restricaocopas[j]=j;	
								}else{
									parar=1;
								}
							}
						}
					}
				}
			}	
			
		}
		
		if(parar==1){
			printf("\nErro\n");
		}else{
			printf("\n%d\n",totalcopas);
	}
	
	parar=0;
	//FINAL DA PARTE DE COPAS
	

	for(i=1;i<=letras;i++){
		
		comparar = entrada[i-1];        
			
		if(i%3==1 && comparar=='0'){	
			if(entrada[i+1]=='e'||entrada[i+1]=='E'){   
				espada+=1;
				
				for(j=1;j<10;j++){				
					if((int)entrada[i]-48==j){	
						if(restricaoespada[j]!=j){		
							totalespada-=1;
							restricaoespada[j]=j;		
								
						}else{
							parar=1;
						}
					}
				}
			}	
		}else{							
			if(i%3==1 && comparar=='1'){
				if(entrada[i+1]=='e'||entrada[i+1]=='E'){  
					espada+=1;
					 
				
					for(j=10;j<14;j++){
						
						if((int)entrada[i]-48==j-10){
							if(restricaoespada[j]!=j){
								totalespada-=1;
								restricaoespada[j]=j;	
							}else{
								parar=1;
							}
						}
					}
				}
			}
		}	
		
	}
		
	if(parar==1){
		printf("Erro\n");
	}else{
		printf("%d\n",totalespada);
	}
	
	parar=0;
	//FINAL ESPADAS
	
	for(i=1;i<=letras;i++){
		
		comparar = entrada[i-1];        
			
		if(i%3==1 && comparar=='0'){	
			if(entrada[i+1]=='u'||entrada[i+1]=='U'){   
				ouro+=1;
					
				for(j=1;j<10;j++){				
					if((int)entrada[i]-48==j){	
						if(restricaoouro[j]!=j){		
							totalouro-=1;
							restricaoouro[j]=j;		
								
						}else{
							parar=1;
						}
					}
				}
			}	
		}else{							
			if(i%3==1 && comparar=='1'){
				if(entrada[i+1]=='u'||entrada[i+1]=='U'){  
					ouro+=1;
					
				
					for(j=10;j<14;j++){
								
						if((int)entrada[i]-48==j-10){
							if(restricaoouro[j]!=j){
								totalouro-=1;
								restricaoouro[j]=j;	
							}else{
								parar=1;
							}
						}
					}
				}
			}
		}	
		
	}
		
	if(parar==1){
		printf("Erro\n");
	}else{
		printf("%d\n",totalouro);
	}
	
	parar=0;
	//FINAL OURO
	
	
	for(i=1;i<=letras;i++){
		
		comparar = entrada[i-1];        
			
		if(i%3==1 && comparar=='0'){	
			if(entrada[i+1]=='p'||entrada[i+1]=='P'){   
				paus+=1;
					
				for(j=1;j<10;j++){				
					if((int)entrada[i]-48==j){	
						if(restricaopaus[j]!=j){		
							totalpaus-=1;
							restricaopaus[j]=j;		
								
						}else{
							parar=1;
						}
					}
				}
			}	
		}else{							
			if(i%3==1 && comparar=='1'){
				if(entrada[i+1]=='p'||entrada[i+1]=='P'){  
					paus+=1;
					
				
					for(j=10;j<14;j++){
								
						if((int)entrada[i]-48==j-10){
							if(restricaopaus[j]!=j){
								totalpaus-=1;
								restricaopaus[j]=j;	
							}else{
								parar=1;
							}
						}
					}
				}
			}
		}	
		
	}
		
	if(parar==1){
		printf("Erro\n");
	}else{
		printf("%d\n",totalpaus);
	}
	
	parar=0;
	//FINAL OURO
	
	}else{
		printf("Entrada Invalida");
	}
	
	
	
	
	//printf("\n\nTotal de Copas: %d\n\nCartas: %d\n\nCaracteres: %d",copas,totalcopas,letras);
	
	return 0;
}
