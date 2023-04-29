// testcase for 2 layer calls

class gfg {
    // Gcd of u and v using recursive method
    static int GCD(int u, int v)
    {
        if(u==0) return v;
        else return GCD(v % u, u);
    }
    
    static int LCM(int u, int v){
        int x=u*v;
        return x/GCD(u,v);
    }

    // The Driver method
    public static int main()
    {
        int u = 25, v = 15;
        return LCM(u, v);
    }
}