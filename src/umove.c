int umove(int a[]){
	int m,T=0,i,j,u,n,w,flag=0;
	
	while(1){
	
	printf("\nВведите значение:\n");
        scanf("%d", &n);
      
         for (i = 0; i < 16; i++) {
            if (a[i] == 0 ) u = i;
            if (a[i] == n) j = i;
        }

	      if(u==15&&((j==u-1)||(j==u-4)))	{
        		m = a[u];
            a[u] = a[j];
            a[j] = m;
            T++;
		}

		
		 if(((u==14)||(u==13))&&((j==u-1)||(j==u-4)||(j==u+1))) {
        		m = a[u];
            a[u] = a[j];
            a[j] = m;
            T++;	
	    	}
	    	
	      if(u==12&&((j==u+1)||(j==u-4)))	{
        		m = a[u];
            a[u] = a[j];
            a[j] = m;
            T++;
		}	

		if(((u==11)||(u==7))&&((j==u-1)||(j==u-4)||(j==u+4))){
        		m = a[u];
            a[u] = a[j];
            a[j] = m;
            T++;
		}	
		
		if(((u==8)||(u==4))&&((j==u+1)||(j==u-4)||(j==u+4))){
        		m = a[u];
            a[u] = a[j];
            a[j] = m;
            T++;
		}	
		
		if(u==0&&((j==u+1)||(j==u+4))){
        		m = a[u];
            a[u] = a[j];
            a[j] = m;
            T++;
		}	
		
		
		if(u==3&&((j==u-1)||(j==u+4)))	{
        		m = a[u];
            a[u] = a[j];
            a[j] = m;
            T++;
		}	
		
		if(((u==1)||(u==2))&&((j==u-1)||(j==u+1)||(j==u+4))){
        		m = a[u];
            a[u] = a[j];
            a[j] = m;
            T++;
		}	
		
		if(((u==5)||(u==6)||(u==9)||(u==10))&&((j==u-1)||(j==u+1)||(j==u+4)||(j==u-4))){
        		m = a[u];
            a[u] = a[j];
            a[j] = m;
            T++;
		}	
		
		system("cls");
                printmass(a,4);
                 printf("\n");
            printf("Количество ваших ходов:%d",T);
            flag = 1;
            
              if (n == 0)
            return 0;

        else { if(n>15)
                printf("\nВведите число 1-15"); 
            flag = 0;
        }
         w = victory(a);
        if (w == 15) {
            printf("\nПоздравляем, Вы прошли игру!");
            break;
        }
        
	}
}
