int*twoSum(int*nums,int numsSize,int target,int*returnSize)
{int a,b,c,d,e,f,x,j,v,w,*z,s;
a=2,b=pow(10,4);c=pow(-10,9),d=pow(10,9);e=pow(-10,9),f=pow(10,9);z=malloc(8);x=0;s=numsSize;
while(x<s){if(*(nums+x)>c&&*(nums+x)<d&&(target>e&&target<f)){
j=x+1;while(j<s){v=*(nums+x);w=*(nums+j);if(v+w==target){z[0]=x,z[1]=j;*returnSize=2;return z;}j++;
}}x++;}return z;}