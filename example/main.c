/*
The MIT License (MIT)
Copyright (c) 2016 Lorhan Sohaky
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include <stdio.h>
#include <LogicGate.h>

int main(){
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d AND %d = %d\n",i,j,AND(i,j));
		}
	}
	printf("\n");

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d OR %d = %d\n",i,j,OR(i,j));
		}
	}
	printf("\n");

	for(i=0;i<2;i++){
			printf("%d NOT = %d\n",i,NOT(i));
	}
	printf("\n");

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d NAND %d = %d\n",i,j,NAND(i,j));
		}
	}
	printf("\n");

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d NOR %d = %d\n",i,j,NOR(i,j));
		}
	}
	printf("\n");

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d XOR %d = %d\n",i,j,XOR(i,j));
		}
	}
	printf("\n");

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d XNOR %d = %d\n",i,j,XNOR(i,j));
		}
	}
	printf("\n");
    return 0;
}
