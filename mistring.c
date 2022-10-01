#include <stdio.h>
#include <stdlib.h>
#include "mistring.h"

int mi_strlen(char* str){
	int contador = 0;
	while (*str!=0){
		contador++;
		str++;
	}
	return contador;
}

char* mi_strcpy(char* s1, char* s2){
	char* devolucion;
	devolucion = s1;
	while (*s2!=0){
		*s1 = *s2;
		s1++;
		s2++; 
	}
	*s1 = *s2;
	return devolucion;
}

char* mi_strcat(char* s1, char* s2){
	int n;
	char* devolucion;
	devolucion = s1;
	n = mi_strlen(s1);
	s1 += n;
	while (*s2!=0){
		*s1 = *s2;
		s1++;
		s2++; 
	}
	*s1 = *s2;
	return devolucion;
}

char* mi_strdup(char* str){
	int n;
	char* str2;
	char* devolucion;
	n = mi_strlen(str) + 1;
	str2 = malloc(n*sizeof(int));
	devolucion = str2;
	while (*str!=0){
		*str2 = *str;
		str++;
		str2++;
	}
	return devolucion;
}

int mi_strequals(char* s1, char* s2){
	while (*s1!=0){
		if (*s1 == *s2){
			s1++;
			s2++;
		}
		else return 0;		
	}
	if (*s2 != 0){
		return 0;
	}
	else return 1;
}
