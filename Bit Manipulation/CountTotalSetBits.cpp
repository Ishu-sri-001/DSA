// https://www.codingninjas.com/studio/problems/count-total-set-bits_784?leftPanelTab=0

int count(int num)
{
    int c=0;
    while(num>0)
    {
        c+=num&1;
        num>>=1;
    }
    return c;
}
int countSetBits(int n)
{
    int c=0;
    for (int i=1;i<=n;i++)
    {
        c+=count(i);
    }
    return c;
}
