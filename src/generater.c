#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <unistd.h>
#include "func.h"
int generater(int z_i){
	int res = 0;
	int tmp[4];
	int k = 0;
	for (int i = 0; i < 4; i++) {
		tmp[i] = i;
	}
	while (res == 0) {
		int index = tmp[rand() % (4 - k) + k];
		int new_index;
		if (index == 0){
			new_index = z_i - 4;
		}
		else if (index == 1){
			new_index = z_i + 4;
		}
		else if (index == 2){
			new_index = z_i - 1;
		}
		else{
			new_index = z_i + 1;
		}
		if ((new_index >= 0) && (new_index <= 15) && ((abs(new_index / 4 - z_i / 4) == 0 && abs(new_index % 4 - z_i % 4) <= 1)
			|| (abs(new_index / 4 - z_i / 4) <= 1 && abs(new_index % 4 - z_i % 4) == 0))) {
			res = new_index;
			break;
		}
		int m = tmp[k];
		tmp[k] = tmp[index];
		tmp[index] = m;
		k++;
	}
	return res;
}

