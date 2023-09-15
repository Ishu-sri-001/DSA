// https://www.codingninjas.com/studio/problems/set-the-rightmost-unset-bit_8160456?leftPanelTab=1

int setBits(int n){
    int m=1;
    while((n & m)!=0)
    {
        m<<=1;
    }
    if(m>n)
        return n;
    return (m | n);
}
