//整数越界
//·整数是以纯二进制方式进行运算的，所以
//  ·11111111+1------->100000000------>0
//  ·01111111+1------->10000000------->-128
//  ·10000000-1------->01111111------>127

//  127+1=128,但char ：-128~127，所以结果 = -128，我们的数可以看作循环，越界便返回原点绕回来

//示例程序

char c = 127;
c = c+1;
printf("c=%d\n",c);
//输出：c=-128 

char c = -128;
c = c-1;
printf("c=%d\n",c);
//输出：c=127

unsigned char c = 127;
c = c+1;
printf("c=%d\n",c);
//输出：c=128 

unsigned char c = 255;
c = c+1;
printf("c=%d\n",c);
//输出：c=0

char c = 0;
c = c-1;
printf("c=%d\n",c);
//输出：c=255
