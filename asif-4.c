    #include<stdio.h>
    void main()
    {
    int i;
    printf("Quality of your batting is:");
    scanf("%d",&i);

    if(i>70)
    {
    printf("A top quality batsman");
    }

    else if(i>=50 && i<=70)
    {
    printf("Excellent batsman");
    }
    else if(i>=40 && i<=54)
    {
    printf("Good batsman");
    }
    else if(i>=25 && i<=39)
    {
    printf("Average batsman");
    }
    else if(i<25)
    {
    printf("Ordinary batsman");
    }

    }

