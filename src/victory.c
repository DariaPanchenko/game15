int victory(int a[])
{ 
    int v, i;
    v = 0;
    for (i = 0;i < 15;i++) {
        if (a[i] < a[i+1]) {
            v++;
        }
      }
    if (a[15] == 0) 
        v++;
return v;	
}
