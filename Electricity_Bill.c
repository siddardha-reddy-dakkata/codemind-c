#include<stdio.h>
int main(){float a,b,sr,tot,u;int c;scanf("%f",&a);c=a;if(a<=199) u=1.20;else if(a>199 && a<400) u=1.40;else if(a>399 && a<600) u=1.60;else if(a>599 && a<800) u=1.80;else if(a>=800) u=2.00;b=a*u;if(b>=400) sr=b*0.15;tot=b+sr;printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f
",c,u,b,sr,tot);}