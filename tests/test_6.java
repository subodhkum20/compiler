class gfg {
    // Gcd of u and v using recursive method
    static int GCD(int u, int v)
    {
        if(u==0)return v;
        else return GCD(v%u,u);
    }
 
    // The Driver method
    public static int main()
    {
        int u = 25, v = 15;
        return GCD(u, v);
    }
}