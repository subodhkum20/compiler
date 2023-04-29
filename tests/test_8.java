//testcase for checking (or-||, and-&&) operators

public class test_8
{
    static int whilefun(int i, int j, int inc){
        if(i>j||i==j)return 1;
        else return whilefun(i+inc,j,inc);
    }

    public static int main(int args) 
    {
        int i=0;
        int j=10;
        int inc=1;
        return whilefun(i,j,inc);
    }
}