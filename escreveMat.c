#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(int argc, char **argv) {
	FILE *arq;	
	arq=fopen(argv[1],"w");	//Por padrão do exercício o arquivo tem nome de --matD.dat--

	fprintf(arq,"%d\n",4); //Dimensão da matriz
	
	fprintf(arq,"%lf\t%lf\t%lf\t%lf\t%lf\n", M_PI, -exp(1), sqrt(2), -sqrt(3), sqrt(11));
	fprintf(arq,"%lf\t%lf\t%lf\t%lf\t%lf\n", pow(M_PI,2), exp(1), -exp(2), 3./7., 0.);
	fprintf(arq,"%lf\t%lf\t%lf\t%lf\t%lf\n", sqrt(5), -sqrt(6), 1., -sqrt(2), M_PI);
	fprintf(arq,"%lf\t%lf\t%lf\t%lf\t%lf\n", pow(M_PI,3), exp(2), -sqrt(7), 1./9., sqrt(2));
	
	fclose(arq);
}
