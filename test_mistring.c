#include <stdio.h>
#include <stdlib.h>
#include "mistring.h"

void prueba_len(){
	printf("##################################\nPrueba mi_strlen\n##################################\n");
	printf("Caso1: string vacía: <string_vacia>.");
	int result;
	char string1[50] = "";
	char* ptr;
	ptr = &(string1[0]);
	result = mi_strlen(ptr);
	printf(" La longitud de la string es: %d\n", result);

	printf("Caso2: string con 10 espacios: <diez_espacios>.");
	char string2[50] = "          ";
	ptr = &(string2[0]);
	result = mi_strlen(ptr);
	printf(" La longitud de la string es: %d\n", result);

	printf("Caso3: string con 15 caracteres: AB9DEF1H2JK5MNO.");
	char string3[50] = "ABCDEFGHIJKLMNO";
	ptr = &(string3[0]);
	result = mi_strlen(ptr);
	printf(" La longitud de la string es: %d\n", result);

	printf("Caso4: string con 7 caracteres no alfanumericos: @#~/*-+.");
	char string4[50] = "@#~/*-+";
	ptr = &(string4[0]);
	result = mi_strlen(ptr);
	printf(" La longitud de la string es: %d\n", result);
}

void prueba_cpy(){
	printf("##################################\nPrueba mi_strcpy\n##################################\n");
	printf("Caso1: string vacía: <string_vacia>. -> ");
	char* s1;
	char* s2;
	char string2[50] = "";
	char string1[50];
	s2 = &(string2[0]);
	s1 = string1;
	s1 = mi_strcpy(s1, s2);
	printf("Resultado: %s\n", s1);

	printf("Caso2: string no vacía: Hola me llamo Eduardo. -> ");
	char string4[50] = "Hola me llamo Eduardo.";
	char string3[50];
	s2 = &(string4[0]);
	s1 = string3;
	s1 = mi_strcpy(s1, s2);
	printf("Resultado: %s\n", s1);
}

void prueba_cat(){
	printf("##################################\nPrueba mi_strcat\n##################################\n");
	printf("Caso1: ambas string vacía: <string_vacia>+<string_vacia>. -> ");
	char* s1;
	char* s2;
	char string1[50] = "";
	char string2[50] = "";
	s2 = &(string2[0]);
	s1 = string1;
	s1 = mi_strcat(s1, s2);
	printf("Resultado: %s\n", s1);

	printf("Caso2: string1 vacia: <string_vacia>+Y tu te llamas Juan. -> ");
	char string3[50] = "";
	char string4[50] = "Y tu te llamas Juan";
	s2 = &(string4[0]);
	s1 = string3;
	s1 = mi_strcat(s1, s2);
	printf("Resultado: %s\n", s1);

	printf("Caso3: string2 vacia: Hola me llamo Eduardo+<string_vacia>. -> ");
	char string5[50] = "Hola me llamo Eduardo";
	char string6[50] = "";
	s2 = &(string6[0]);
	s1 = string5;
	s1 = mi_strcat(s1, s2);
	printf("Resultado: %s\n", s1);

	printf("Caso4: ningua string vacia: Hola me llamo Eduardo+Y tu te llamas Juan. -> ");
	char string7[50] = "Hola me llamo Eduardo";
	char string8[50] = "Y tu te llamas Juan";
	s2 = &(string8[0]);
	s1 = string7;
	s1 = mi_strcat(s1, s2);
	printf("Resultado: %s\n", s1);
}

void prueba_dup(){
	printf("##################################\nPrueba mi_strdup\n##################################\n");
	printf("Caso1: string vacia: <string_vacia>.");
	char* str1;
	char* str2;
	char string1[50] = "";
	str1 = &(string1[0]);
	str2 = mi_strdup(str1);
	printf("Resultado: %s\n", str2);

	printf("Caso2: string no vacia: Hola me llamo Juan.");
	char string2[50] = "Hola me llamo Juan";
	str1 = &(string2[0]);
	str2 = mi_strdup(str1);
	printf("Resultado: %s\n", str2);

	printf("Caso3: string no vacia (caracteres no alfanumericos: Hola@#$€/*-+={}.");
	char string3[50] = "Hola@#$€/*-+={}";
	str1 = &(string3[0]);
	str2 = mi_strdup(str1);
	printf("Resultado: %s\n", str2);
}

void prueba_equals(){
	printf("##################################\nPrueba mi_strequals\n##################################\n");
	printf("Caso1: ambas strings vacias (iguales): <string_vacia> vs <string_vacia>.");
	int result;
	char* s1;
	char* s2;
	char string2[50] = "";
	char string1[50] = "";
	s2 = &(string2[0]);
	s1 = string1;
	result = mi_strequals(s1, s2);
	printf("%d\n", result);

	printf("Caso2: ambas strings iguales: Y tu te llamas Juan vs Y tu te llamas Juan.");
	char string4[50] = "Y tu te llamas Juan";
	char string3[50] = "Y tu te llamas Juan";
	s2 = &(string4[0]);
	s1 = string3;
	result = mi_strequals(s1, s2);
	printf("%d\n", result);

	printf("Caso3: strings totalemnte distintas: Y tu te llamas Juan vs Me gusta la pizza.");
	char string6[50] = "Y tu te llamas Juan";
	char string5[50] = "Me gusta la pizza";
	s2 = &(string6[0]);
	s1 = string5;
	result = mi_strequals(s1, s2);
	printf("%d\n", result);

	printf("Caso4: ambas strings iguales hasta cierto punto: Y tu te llamas Juan vs Y tu te llamas Juan, pero no mario.");
	char string8[50] = "Y tu te llamas Juan";
	char string7[50] = "Y tu te llamas Juan, pero no mario";
	s2 = &(string8[0]);
	s1 = string7;
	result = mi_strequals(s1, s2);
	printf("%d\n", result);

	printf("Caso5: 1 string vacia vs una string no vacia: Y tu te llamas Juan vs <string_vacia>.");
	char string10[50] = "Y tu te llamas Juan";
	char string9[50] = "";
	s2 = &(string10[0]);
	s1 = string9;
	result = mi_strequals(s1, s2);
	printf("%d\n", result);
}


void ejecuta_tests(){
	prueba_len();
	prueba_cpy();
	prueba_cat();
	prueba_dup();
	prueba_equals();
}

int main(){
	ejecuta_tests();
	return 0;
}
