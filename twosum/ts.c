int*twoSum(int*n,int s,int y,int*rs)
{int a,b,c,d,e,f,x,j,v,w,*z;
a=2,b=pow(10,4);c=pow(-10,9),d=pow(10,9);e=pow(-10,9),f=pow(10,9);z=malloc(8);x=0;
while(x<s){if(*(n+x)>c&&*(n+x)<d&&(y>e&&y<f)){
j=x+1;while(j<s){v=*(n+x);w=*(n+j);if(v+w==y){z[0]=x,z[1]=j;*rs=2;return z;}j++;
}}x++;}return z;}