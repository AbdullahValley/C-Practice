#include<stdio.h>
#include<string.h>

int flag=0,p,j,ms,i,n;
char s[1000];
int main()
{
while(scanf("%s",s)==1)
{

 n = strlen (s);
 p=0, ms=0; flag = 0;
 for (i=0,j=n-1;i<=n/2-1;i++,j--)

{
    if (s[i]==s[j])
    p++;
    else break;
}


 for (i=0,j=n-1;i<n/2;i++,j--)

{
	 if((s[i] == 'A') && (s[j] =='A')
	  ||(s[i] == 'E') && (s[j] =='3')
	  ||(s[i] == 'H') && (s[j] =='H')
	  ||(s[i] == 'I') && (s[j] =='I')
	  ||(s[i] == 'J') && (s[j] =='L')
	  ||(s[i] == 'L') && (s[j] =='J')
      ||(s[i] == 'M') && (s[j] =='M')
      ||(s[i] == 'O') && (s[j] =='O')
	  ||(s[i] == 'S') && (s[j] =='2')
	  ||(s[i] == 'T') && (s[j] =='T')
	  ||(s[i] == 'U') && (s[j] =='U')
	  ||(s[i] == 'V') && (s[j] =='V')
	  ||(s[i] == 'W') && (s[j] =='W')
      ||(s[i] == 'X') && (s[j] =='X')
	  ||(s[i] == 'Y') && (s[j] =='Y')
	  ||(s[i] == 'Z') && (s[j] =='5')
	  ||(s[i] == '1') && (s[j] =='1')
	  ||(s[i] == '2') && (s[j] =='S')
	  ||(s[i] == '3') && (s[j] =='E')
	  ||(s[i] == '5') && (s[j] =='Z')
      ||(s[i] == '8') && (s[j] =='8'))
	  {
		ms++;
		continue;
	  }
	  else break;


 }
if(n%2==0)
flag =1;
if (n%2!=0)
{

	if ((s[i] == 'A')
	  ||(s[i] == 'H')
	  ||(s[i] == 'I')
	  ||(s[i] == 'M')
	  ||(s[i] == 'O')
	  ||(s[i] == 'T')
	  ||(s[i] == 'U')
	  ||(s[i] == 'V')
	  ||(s[i] == 'X')
	  ||(s[i] == 'Y')
	  ||(s[i] == '1')
	  ||(s[i] == '8'))

	  flag = 1;
	  if(n==1 && flag ==1) {flag =2;}
	  if(flag==2)
	 {
	    printf("%s -- is a mirrored palindrome.\n\n",s);
	    continue;
	 }
	 if(n==1)
	 {
	 printf("%s -- is a regular palindrome.\n\n",s);
	 continue;
	 }

}

 if(n!=1)
{
 if(p+ms==n/2*2 && flag ==1)
 {
 printf("%s -- is a mirrored palindrome.\n\n",s);
 continue;
 }

 else if (p==n/2) printf("%s -- is a regular palindrome.\n\n",s);
 else if (ms==n/2 && flag==1)printf("%s -- is a mirrored string.\n\n",s);
 else printf("%s -- is not a palindrome.\n\n",s);
}
}
return 0;
}

